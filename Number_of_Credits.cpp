#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, Z;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X >> Y >> Z;
        cout << (4 * X + 2 * Y) << endl;
    }

    return 0;
}