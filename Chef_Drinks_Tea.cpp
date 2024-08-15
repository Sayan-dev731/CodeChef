#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, Z;
    cin >> T;
    for (int x = 1; x <= T; x++)
    {
        cin >> X >> Y >> Z;
        if(X <= Y)
        {
            cout << Z << endl;
        }

        else 
        {
            int div = X / Y;
            int rem = X % Y;
            if(rem == 0)
            {
                cout << Z * div << endl;
            }
            else
            {
                cout << Z * (div + 1) << endl;
            }
        }
    }

    return 0;
}