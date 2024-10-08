//Sarah Shao
//10/08/2024
//Lab 5

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int direct;
    direct = rand() % 4 + 1; 

    int i;
    int north;
    int south;
    int west;
    int east;

    for (i = 0; i <25; i++)
    {
        if (i = 1)
        north = north + 1;
        else if (i = 2)
        south = south + 1;
        else if (i = 3)
        east = east + 1;
        else if (i = 4)
        west = west + 1;
    }
    cout << north << " " << south << " " << east << " " << west;

}