#ifndef ENTITY_MANAGER_H
#define ENTITY_MANAGER_H
#include <iostream>
#include <thread>
#include "controller.h"
#include "kbhitLinux.h"
#define CONTAINER_SIZE 20
#define MAX_AMOUNT_ENTITY 6
#define MIN_AMOUNT_ENTITY 3

bool getTurn();
short getTime();
bool isFull();
bool isEmpty(char *container);


struct Entity
{
    short pos;
    short state;
    short *time;
    char *container;
    short *totalTme;
    bool prod;
    Controller *controller;
    Entity(short &tme, char *container, short &totalTme, bool prod);
    void exec();
    void produce();
    void consume();
};

#endif // ENTITY_MANAGER_H
