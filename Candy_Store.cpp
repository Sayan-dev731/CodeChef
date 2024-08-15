#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X >> Y;
        if(X >= Y)
            cout << Y << endl;

        else
            cout << X + (Y - X) * 2 << endl;
    }

    return 0;
}