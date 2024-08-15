#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, A;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X >> Y >> A;
        if(A >= X && A < Y)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}