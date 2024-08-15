#include <iostream>
using namespace std;

int main()
{
    int T, C, X, Y;
    cin >> T;
    while(T > 0)
    {
        cin >> C >> X >> Y;
        int money = (C - X) * Y;
        cout << money << endl;

        T--;
    }

    return 0;
}