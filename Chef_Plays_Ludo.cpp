#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    while(T > 0)
    {
        cin >> X;
        if(X == 6)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;

        T--;
    }

    return 0;
}