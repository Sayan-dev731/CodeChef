#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X;
        if(X <= 100)
            cout << X << endl;

        else
            cout << X - 10 << endl;
    }

    return 0;
}