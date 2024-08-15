#include <iostream>
using namespace std;

int main()
{
    int t = 1;
    for(int x = 4; x >= 1; x--)
    {
        for(int y = 1; y < x; y++)
            cout << " ";

        for(int y = 1; y <= t; y++)
            cout << "*";

        t += 2;

        cout << endl;
    }

    return 0;
}