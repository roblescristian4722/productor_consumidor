#include <iostream>
#include <thread>
#include "../headers/cursor.h"
#include "../headers/controller.h"
#include "../headers/entityManager.h"
#include "../headers/kbhitLinux.h"
#if defined(_WIN32) || defined(_WIN64)
    #include <conio.h>
    #define GETCH(X) X = getch()
#else
    #include "../headers/kbhitLinux.h"
    #define GETCH(X) set_echo();\
                     X = getchar();\
                     unset_echo()
#endif

void keyListener(char &key)
{
    while (key != 27)
        if (kbhit()) {
            GETCH(key);
            if (key == 27)
                return;
        }
}

int main(int argc, char* argv[])
{
    srand(time(0));
    char key = 0;
    char container[CONTAINER_SIZE];
    short tme = 0;
    short totalTme = 0;
    Entity p(tme, container, totalTme, true, key);
    Entity c(tme, container, totalTme, false, key);
    Controller controller;

    for (short i = 0; i < CONTAINER_SIZE; ++i)
        container[i] = EMPTY_SYMBOL;

    std::thread td(keyListener, std::ref(key));
    while (key != 27) {
        if (key == 27)
            break;
        if (getTurn())
            p.exec();
        else
            c.exec();
    }
    td.join();
    Cursor::clrscr();
    return 0;
}
