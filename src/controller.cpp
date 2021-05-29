#include "../headers/controller.h"

Controller::Controller()
{
    Cursor::clrscr();
    printContainer();
    consumerState(true);
    producerState(false);
    printEntity();
    printTime(0);
    printLog("sample log", -1);
}

Controller::~Controller(){}

void Controller::printContainer()
{
    for (short i = 0; i < CONTAINER_SIZE; ++i)
        consume(i);
}

void Controller::produce(const short &index, bool add)
{
    short pos, aux;
    if (index < 9)
        pos = CONT_X_POS + (index * 2);
    else {
        aux = index - 9;
        pos = CONT_X_POS + 18;
        pos += aux * 3;
    }
    Cursor::gotoxy(pos, CONT_Y_POS);
    // Si add es positivo se produce un producto en la posición index
    if (add) {
        if (index < 9)
            std::cout << Cursor::colorText(CYAN, std::string(1, PRODUCT_SYMBOL));
        else
            std::cout << Cursor::colorText(CYAN, std::string(1, PRODUCT_SYMBOL)) << " ";
        Cursor::gotoxy(pos, CONT_Y_POS + 1);
        std::cout << Cursor::colorText(CYAN, std::to_string(index + 1));
    }
    // Si add es positivo se consume un producto en la posición index
    else {
        std::cout << Cursor::colorText(AMARILLO, std::string(1, EMPTY_SYMBOL));
        Cursor::gotoxy(pos, CONT_Y_POS + 1);
        std::cout << Cursor::colorText(AMARILLO, std::to_string(index + 1));
    }
}

void Controller::consume(const short &index)
{ produce(index, false); }

void Controller::printState(const short &x, const short &y, char state,
                            const std::string &entity)
{
    Cursor::gotoxy(x, y);
    std::cout << entity;
    switch (state) {
        case WORKING:
            std::cout << Cursor::colorText(VERDE, "Trabajando");
            break;
        case SLEEPING:
            std::cout << Cursor::colorText(ROJO, "Durmiendo");
            break;
        case ENTERING:
            std::cout << Cursor::colorText(MORADO, "Entrando");
            break;
        case LEAVING:
            std::cout << Cursor::colorText(MORADO, "Saliendo");
            break;
    }
}

void Controller::consumerState(char state)
{ printState(CONS_X_POS, PROD_CONS_Y_POS, state, "Consumidor: "); }

void Controller::producerState(char state)
{ printState(PROD_X_POS, PROD_CONS_Y_POS, state, "Productor: "); }

void Controller::printEntity(bool prod)
{
    Cursor::gotoxy(CONT_X_POS, ENT_Y_POS);
    std::cout << "Turno: " << (prod ? "Productor" : "Consumidor");
}


void Controller::printTime(const unsigned int &time)
{
    Cursor::gotoxy(CONT_X_POS, TIME_Y_POS);
    std::cout << "Tiempo transcurrido: " << time;
}

void Controller::printLog(const std::string &log, const unsigned int &time)
{
    Cursor::gotoxy(CONT_X_POS, LOG_Y_POS);
    if (time != -1)
        std::cout << "Log[" << time << "]: " << log;
    else
        std::cout << "";
}
