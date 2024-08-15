#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X >> Y;
        cout << X - Y << endl;
    }

    return 0;
}