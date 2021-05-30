#ifndef ENTITY_MANAGER_H
#define ENTITY_MANAGER_H
#include <iostream>
#include <thread>
#include "controller.h"
#include "kbhitLinux.h"
#define CONTAINER_SIZE 20

class Entity
{
protected:
    short lastPos;
    char state;
    bool kill;
    short amount;
    virtual void waitReady() = 0;
    virtual void genAmount() = 0;
public:
    Entity();
    ~Entity();
};

class Producer : public Entity
{
    void waitReady();
    void genAmount();
    void produce();
public:
    Producer();
    ~Producer();
};

class Consumer : public Entity
{
    void waitReady();
    void genAmount();
    void consume();
public:
    ~Consumer();
    Consumer();
};

class EntityManager
{
private:
    friend class Controller;
    friend class Consumer;
    friend class Producer;
    Controller controller;
    unsigned int time;
    char container[CONTAINER_SIZE];
    Producer producer;
    Consumer consumer;
    
public:
    EntityManager();
    ~EntityManager();
};

#endif // ENTITY_MANAGER_H
