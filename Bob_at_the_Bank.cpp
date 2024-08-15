#include <iostream>
using namespace std;

int main()
{
    int T, W, X, Y, Z;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> W >> X >> Y >> Z;
        cout << W + (X - Y) * Z << endl;
    }

    return 0;
}