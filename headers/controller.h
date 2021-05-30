#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include "cursor.h"
#define CONTAINER_SIZE 20
#define PRODUCT_SYMBOL '*'
#define EMPTY_SYMBOL '_'
#define CONT_X_POS 3
#define CONT_Y_POS 4
#define PROD_X_POS 3
#define PROD_CONS_Y_POS 7
#define CONS_X_POS 31
#define ENT_Y_POS 9
#define TIME_Y_POS 2
#define LOG_Y_POS 11

enum States
{
    WORKING,
    SLEEPING,
    ENTERING,
    LEAVING
};

class Controller
{
    friend class EntityManager;
    Controller();
    ~Controller();
    
    // Imprime los n espacios del contenedor con su índice debajo de cada uno.
    // Todos los espacios inician vacíos por defecto
    void printContainer();
    // Toma un índice que puede ir del 0 al 19 como la posición del producto
    // que será producido
    void produce(const short &index, bool add = true);
    // Toma un índice que puede ir del 0 al 19 como la posición del producto
    // que será consumido
    void consume(const short &index);
    void consumerState(char state);
    void producerState(char state);
    // Imprime el estado
    void printState(const short &x, const short &y, char state,
                    const std::string &entity);
    // Muestra la entidad a la que le toca ejecutarse, si prod = true entonces
    // se muestra "Productor", de lo contraio se muestra "Consumidor"
    void printEntity(bool prod = true);
    void printTime(const unsigned int &time);
    void printLog(const std::string &log, const unsigned int &time = -1);
};

#endif // CONTROLLER_H
