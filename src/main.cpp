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
            c.produce(i);
    c.consume(1);
    c.produce(18);
    std::cin.get();
    c.printLog("ñlkasjdfg", 10);
    Cursor::gotoxy(10, 14);
    return 0;
}
