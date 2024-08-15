#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    for (int x = 1; x <= T; x++)
    {
        cin >> X;
        if (X < 3)
            cout << "LIGHT" << endl;

        else if (X >= 3 && X < 7)
            cout << "MODERATE" << endl;

        else
            cout << "HEAVY" << endl;
    }

    return 0;
}