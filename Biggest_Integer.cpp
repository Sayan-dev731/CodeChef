#include <iostream>
using namespace std;

int main()
{
    int a;
    int T;
    cout << "enter the how many numbers you want to enter : ";
    cin >> a;
    int list[a];
    for(int x = 0; x < a; x++)
    {
        cout << "enter the number: ";
        cin >> list[x];    
    }

    for(int x = 0; x < a; x++)
    {
        // cout << list[x];

        for(int y = 0; y < a - 1 - x; y++)
        {
            if(list[y] < list[y + 1])
            {
                T = list[y];
                list[y] = list[y + 1];
                list[y + 1] = T;
            } 
        }
    }

    cout << "the biggest number of all is: " << list[0];


}