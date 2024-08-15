#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X >> Y;
        if(X < Y)
            cout << "REPAIR" << endl;

        else if(X > Y)
            cout << "NEW PHONE" << endl;

        else
            cout << "ANY" << endl;
    }

    return 0;
}