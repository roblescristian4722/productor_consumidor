#include "../headers/controller.h"

Controller::Controller()
{
    Cursor::clrscr();
    printContainer();
}

Controller::~Controller(){}

void Controller::printContainer()
{
    for (short i = 0; i < CONTAINER_SIZE; ++i)
        removeProduct(i);
}

void Controller::addProduct(const short &index, char symbol)
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
    if (symbol == PRODUCT_SYMBOL) {
        if (index < 9)
            std::cout << Cursor::colorText(VERDE, std::string(1, symbol));
        else
            std::cout << Cursor::colorText(VERDE, std::string(1, symbol)) << " ";
        Cursor::gotoxy(pos, CONT_Y_POS + 1);
        std::cout << Cursor::colorText(VERDE, std::to_string(index + 1));
    }
    else {
        std::cout << Cursor::colorText(AMARILLO, std::string(1, symbol));
        Cursor::gotoxy(pos, CONT_Y_POS + 1);
        std::cout << Cursor::colorText(AMARILLO, std::to_string(index + 1));
    }
}

void Controller::removeProduct(const short &index)
{
    addProduct(index, EMPTY_SYMBOL);
}
