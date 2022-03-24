#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;

    // inicializa el numero random
    srand(time(NULL));

    numero = rand() % 10 + 1;
    
    return 0;
}
