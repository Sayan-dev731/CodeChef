#include <iostream>
using namespace std;

int main()
{
    int T, D, L, R;
    cin >> T;
    while(T > 0)
    {
        cin >> D >> L >> R;
        if(D >= L && D <= R)
            cout << "Take second dose now" << endl;

        else if(R < D)
            cout << "Too Late" << endl;

        else if(L > D)
            cout << "Too Early" << endl;

        T--;
    }

    return 0;
}