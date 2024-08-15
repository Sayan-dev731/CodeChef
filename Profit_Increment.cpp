#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    for (int x = 1; x <= T; x++)
    {
        cin >> X >> Y;
        int SP = ((10 * X) / 100) + X;
        int sp = X - Y;
        cout << SP - sp << endl;
    }

    return 0;
}