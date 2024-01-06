#include <iostream>
#include <ctime>

int main()
{
    int dice1;
    int dice2;

    srand(time(NULL));

    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;

    std::cout
        << dice1 + dice2 << "\n";
}