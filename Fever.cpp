#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X;
        if(X <= 98)
            cout << "NO" << endl;

        else
            cout << "YES" << endl;
    }

    return 0;
}