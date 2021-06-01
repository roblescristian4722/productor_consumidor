#include "../headers/entityManager.h"

bool getTurn()
{ return rand() % 2; }

short getTime()
{ return rand() % (MAX_AMOUNT_ENTITY - MIN_AMOUNT_ENTITY + 1) + MIN_AMOUNT_ENTITY; }

bool isFull(char *container)
{
    for (short i = 0; i < CONTAINER_SIZE; ++i)
        if (container[i] == EMPTY_SYMBOL)
            return false;
    return true;
}

bool isEmpty(char *container)
{
    for (short i = 0; i < CONTAINER_SIZE; ++i)
        if (container[i] == PRODUCT_SYMBOL)
            return false;
    return true;
}

Entity::Entity(short &tme, char *container, short &totalTime, bool prod, char &key)
{
    this->time = &tme;
    this->container = container;
    this->totalTme = &totalTime;
    this->pos = 0;
    this->prod = prod;
    this->key = &key;
}

void Entity::consume()
{
    *time = getTime();
    while (*time) {
        if (*key == 27)
            break;
        if (container[pos] == EMPTY_SYMBOL)
            break;
        controller->consLeft(*time);
        controller->consumerState(WORKING);
        container[pos] = EMPTY_SYMBOL;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        (*totalTme)++;
        controller->printTime(*totalTme);
        controller->consume(pos);
        pos = (pos + 1) % CONTAINER_SIZE;
        (*time)--;
    }
    *time = 0;
    controller->consLeft(*time);
}

void Entity::produce()
{
    *time = getTime();
    while (*time) {
        if (*key == 27)
            break;
        if (container[pos] == PRODUCT_SYMBOL)
            break;
        controller->prodLeft(*time);
        controller->producerState(WORKING);
        container[pos] = PRODUCT_SYMBOL;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        (*totalTme)++;
        controller->printTime(*totalTme);
        controller->produce(pos);
        pos = (pos + 1) % CONTAINER_SIZE;
        (*time)--;
    }
    *time = 0;
    controller->prodLeft(*time);
}

void Entity::exec()
{
    prod ? controller->printEntity() : controller->printEntity(false);
    if (prod)
        controller->producerState(ENTERING);
    else
        controller->consumerState(ENTERING);
    if (*key == 27) return;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    if (*key == 27) return;
    (*totalTme)++;
    controller->printTime(*totalTme);
    if (((prod && !isFull(container)) || (!prod && !isEmpty(container))) && !*time) {
        if (prod)
            produce();
        else
            consume();
    }
    if (prod)
        controller->producerState(LEAVING);
    else
        controller->consumerState(LEAVING);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    if (*key == 27) return;
    (*totalTme)++;
    controller->printTime(*totalTme);
    if (prod)
        controller->producerState(SLEEPING);
    else
        controller->consumerState(SLEEPING);

}
