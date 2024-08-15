#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, Z;
    cin >> T;
    for (int x = 1; x <= T; x++)
    {
        cin >> X >> Y >> Z;
        if (X < Y && X < Z)
            cout << "ALICE" << endl;

        else if (Y < X && Y < Z)
            cout << "BOB" << endl;

        else
            cout << "CHARLIE" << endl;
    }

    return 0;
}