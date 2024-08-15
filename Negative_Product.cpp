#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C;
    cin >> T;
    for (int x = 1; x <= T; x++)
    {
        cin >> A >> B >> C;
        if ((A * B < 0) || (B * C < 0) || (C * A < 0))
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}