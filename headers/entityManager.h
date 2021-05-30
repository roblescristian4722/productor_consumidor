#ifndef ENTITY_MANAGER_H
#define ENTITY_MANAGER_H
#include <iostream>
#include <thread>
#include "controller.h"
#include "kbhitLinux.h"
#define CONTAINER_SIZE 20
#define MAX_AMOUNT_ENTITY 6
#define MIN_AMOUNT_ENTITY 3

class Entity;
class Producer;
class Consumer;
class EntityManager;

class Entity
{
protected:
    short lastPos;
    char state;
    bool kill;
    short amount;
    EntityManager* em;
    void getAmount();
    virtual void waitReady() = 0;
public:
    Entity();
    ~Entity();
};

class Producer : public Entity
{
    void waitReady();
    void produce();
public:
    Producer(EntityManager *em);
    ~Producer();
};

class Consumer : public Entity
{
    void waitReady();
    void consume();
public:
    Consumer(EntityManager *em);
    ~Consumer();
};

class EntityManager
{
    friend class Controller;
    friend class Consumer;
    friend class Producer;
    Controller controller;
    unsigned int time;
    char container[CONTAINER_SIZE];
    
public:
    EntityManager();
    ~EntityManager();
};

#endif // ENTITY_MANAGER_H
