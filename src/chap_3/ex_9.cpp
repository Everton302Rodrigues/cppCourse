// Suppose you give a dinner party for six guests,  but your table seats only four. In how many ways can four of the six guests
// arrange themselves at the table? Any of the six guests can sit in the first chair. Any of the remaining five can sit in the second chair.
// any of the remaining four can sit in the third chair. Any of the remaining three can sit in the fourth chair.(The last two will have to stand.) Don't let this get too
// complicated. A simple for loop should do it.

#include <iostream>

int main()
{
    const int total_guests = 6;
    const int total_chairs = 4;
    int ways = 1;

    for (int i = 0; i < total_chairs; ++i)
    {
        ways *= (total_guests - i);
    }

    std::cout << "Numero de maneiras que 4 dos 6 convidados podem se sentar: " << ways << std::endl;

    return 0;
}
