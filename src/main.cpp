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
int main(int argc, char* argv[])
{
    srand(time(0));
    EntityManager em;
    Producer p(&em);
    Consumer c(&em);
    char tmp = 0;
    int aux = 0;
    while (true) {
        if (kbhit()) {
            GETCH(tmp);
            if (tmp == 27)
                break;
        }
        std::cout << aux++ << std::endl;
    }
    return 0;
}
