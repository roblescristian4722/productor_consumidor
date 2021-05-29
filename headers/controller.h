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
    
    // Imprime los n espacios del contenedor con su índice debajo de cada uno.
    // Todos los espacios inician vacíos por defecto
    void printContainer();
    void addProduct(const short &index, char symbol = PRODUCT_SYMBOL);
    void removeProduct(const short &index);
};

#endif // CONTROLLER_H
