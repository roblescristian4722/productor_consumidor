#include "../headers/controller.h"

Controller::Controller()
{
    Cursor::clrscr();
    printContainer();
}

Controller::~Controller(){}

void Controller::printContainer()
{
    for (short i = 0; i < CONTAINER_SIZE; ++i) {
        Cursor::gotoxy(CONT_X_POS + i + 2, CONT_Y_POS);
        std::cout << EMPTY_SYMBOL << std::endl;
        Cursor::gotoxy(CONT_X_POS + i + 2, CONT_Y_POS + 1);
        std::cout << i + 1 << std::endl;
    }
}
