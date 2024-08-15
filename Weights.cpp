#include <iostream>
using namespace std;

int main()
{
    int T, W, X, Y, Z;
    cin >> T;
    for(int x = 0; x < T; x++)
    {
        cin >> W >> X >> Y >> Z;
        if(W == X || W == Y || W == Z)
            cout << "YES" << endl;

        else if(W == (X + Y))
            cout << "YES" << endl;

        else if(W == (X + Z))
            cout << "YES" << endl;

        else if(W == (Y + Z))
            cout << "YES" << endl;

        else if(W == (X + Y + Z))
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}