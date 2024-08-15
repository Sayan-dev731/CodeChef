#include <iostream>
using namespace std;

int main()
{
    int T, N, X, Y;
    cin >> T;
    for (int x = 1; x <= T; x++)
    {
        cin >> N >> X >> Y;
        if ((X * Y) >= N)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}