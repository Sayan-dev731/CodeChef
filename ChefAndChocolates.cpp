#include <iostream>
using namespace std;

int main()
{
    int T, X, Y, Z;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X >> Y >> Z;
        int total = X * 5 + Y * 10;
        cout << int(total / Z) << endl;
    }

    return 0;
}