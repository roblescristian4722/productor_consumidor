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

void Producer::waitReady()
{
    while (!kill) {
        if (state == ENTERING) {
            genAmount();
        }        
    }
}

EntityManager::EntityManager()
{
    this->time = 0;
    for (int i = 0; i < CONTAINER_SIZE; ++i)
        this->container[i] = '-';
}

EntityManager::~EntityManager() {}
