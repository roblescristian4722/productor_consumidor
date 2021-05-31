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

Entity::Entity(short &tme, char *container, short &totalTime, bool prod)
{
    this->time = &tme;
    this->container = container;
    this->totalTme = &totalTime;
    this->pos = 0;
    this->state = SLEEPING;
    this->prod = prod;
}

void Entity::consume()
{
    *time = getTime();
    state = WORKING;
    while (--(*time)) {
        if (container[pos] == EMPTY_SYMBOL)
            break;
        controller->consLeft(*time);
        container[pos] = EMPTY_SYMBOL;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        (*totalTme)++;
        controller->printTime(*totalTme);
        controller->consume(pos);
        pos = (pos + 1) % CONTAINER_SIZE;
    }
    *time = 0;
    controller->consLeft(*time);
}

void Entity::produce()
{
    *time = getTime();
    state = WORKING;
    while (--(*time)) {
        Cursor::gotoxy(1, 20);
        if (container[pos] == PRODUCT_SYMBOL)
            break;
        controller->prodLeft(*time);
        container[pos] = PRODUCT_SYMBOL;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        (*totalTme)++;
        controller->printTime(*totalTme);
        controller->produce(pos);
        pos = (pos + 1) % CONTAINER_SIZE;
    }
    *time = 0;
    controller->prodLeft(*time);
}

void Entity::exec()
{
    prod ? controller->printEntity() : controller->printEntity(false);
    state = ENTERING;
    controller->consumerState(state);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    (*totalTme)++;
    controller->printTime(*totalTme);
    if (((prod && !isFull(container)) || (!prod && !isEmpty(container))) && !*time) {
        if (prod)
            produce();
        else
            consume();
    }
    state = LEAVING;
    controller->consumerState(state);
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    (*totalTme)++;
    controller->printTime(*totalTme);
    state = SLEEPING;
    controller->consumerState(state);
}
