#include <iostream>
#include <thread>
#include "../headers/cursor.h"
#include "../headers/controller.h"

int main(int argc, char* argv[])
{
    Controller c;
    c.printContainer();
    for (int i = 0; i < 20; ++i)
        if ((i + 1) % 2 == 0)
            c.addProduct(i);
    Cursor::gotoxy(10, 10);
    return 0;
}
