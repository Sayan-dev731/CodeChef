#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X >> Y;
        if((X + Y) > 6)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    } 

    return 0;
}