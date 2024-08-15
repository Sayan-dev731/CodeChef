#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    while(T > 0)
    {
        cin >> X >> Y;
        if(X == Y && X > 0 && Y > 0)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;

        T--;
    }

    return 0;
}