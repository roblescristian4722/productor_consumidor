#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include "cursor.h"
#define CONTAINER_SIZE 20
#define PRODUCT_SYMBOL '*'
#define EMPTY_SYMBOL '_'
#define CONT_X_POS 3
#define CONT_Y_POS 4

struct Controller
{
    Controller();
    ~Controller();

    void printContainer();
};

#endif // CONTROLLER_H
