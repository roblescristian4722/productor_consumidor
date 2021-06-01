#include "../headers/controller.h"

Controller::Controller()
{
    Cursor::clrscr();
    Cursor::hideCursor();
    producerState(SLEEPING);
    consumerState(SLEEPING);
    prodLeft(0);
    consLeft(0);
    printTime(0);
    printContainer();
}

Controller::~Controller()
{ Cursor::showCursor(); }

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
    std::cout.flush();
}

void Controller::consume(const short &index)
{ produce(index, false); }

void Controller::printState(const short &x, const short &y, short state,
                            const std::string &entity)
{
    Cursor::gotoxy(x, y);
    std::cout << entity;
    switch (state) {
        case WORKING:
            std::cout << Cursor::colorText(VERDE, "Trabajando   ");
            break;
        case SLEEPING:
            std::cout << Cursor::colorText(ROJO, "Durmiendo     ");
            break;
        case ENTERING:
            std::cout << Cursor::colorText(MORADO, "Entrando    ");
            break;
        case LEAVING:
            std::cout << Cursor::colorText(MORADO, "Saliendo    ");
            break;
        default:
            break;
    }
    std::cout.flush();
}

void Controller::consumerState(short state)
{
    printState(CONS_X_POS, PROD_CONS_Y_POS, state, "Consumidor: ");
    std::cout.flush();
}

void Controller::producerState(short state)
{
    printState(PROD_X_POS, PROD_CONS_Y_POS, state, "Productor: ");
    std::cout.flush();
}

void Controller::printEntity(bool prod)
{
    Cursor::gotoxy(CONT_X_POS, ENT_Y_POS);
    std::cout << "Turno: " << (prod ? "Productor " : "Consumidor");
    std::cout.flush();
}

void Controller::printTime(const unsigned int &time)
{
    Cursor::gotoxy(CONT_X_POS, TIME_Y_POS);
    std::cout << "Tiempo transcurrido: " << time;
    std::cout.flush();
}

void Controller::prodLeft(const short &v)
{
    Cursor::gotoxy(PROD_X_POS, PROD_CONS_Y_POS + 1);
    std::cout << "Por producir: " << v << "      ";
    std::cout.flush();
}

void Controller::consLeft(const short &v)
{
    Cursor::gotoxy(CONS_X_POS, PROD_CONS_Y_POS + 1);
    std::cout << "Por consumir: " << v << "     ";
    std::cout.flush();
}
