#include "../headers/entityManager.h"

Producer::Producer() {}

Producer::~Producer(){}

Consumer::Consumer() {}

Consumer::~Consumer() {}

Entity::Entity()
{
    this->lastPos = 0;
    this->state = SLEEPING;
    this->kill = false;
}

Entity::~Entity() {}

void Entity::getAmount()
{
    amount = rand() % (MAX_AMOUNT_ENTITY - MIN_AMOUNT_ENTITY + 1)
           + MIN_AMOUNT_ENTITY;
}

void Producer::waitReady()
{
    while (!kill) {
        if (state == ENTERING) {
            getAmount();
        }        
    }
}

void Consumer::waitReady()
{
    while (!kill) {
        if (state == ENTERING) {
            getAmount();
        }        
    }
}

EntityManager::EntityManager()
{
    this->time = 0;
    for (int i = 0; i < CONTAINER_SIZE; ++i)
        this->container[i] = '-';
}

EntityManager::~EntityManager(){}
