#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, X1, X2, Y1, Y2;
    cin >> T;
    for (int x = 1; x <= T; x++)
    {
        cin >> X1 >> Y1 >> X2 >> Y2;
        double dist1 = sqrt((X1 * X1) + (Y1 * Y1));
        double dist2 = sqrt((X2 * X2) + (Y2 * Y2));
        if (dist1 == dist2)
            cout << "EQUAL" << endl;

        else if (dist1 > dist2)
            cout << "ALEX" << endl;

        else
            cout << "BOB" << endl;
    }

    return 0;
}