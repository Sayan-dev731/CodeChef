#include <iostream>
using namespace std;

int main()
{
    int T, X, H;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X >> H;
        if(X >= H)
            cout << "YES" << endl;

        else    
            cout << "NO" << endl;
    }

    return 0;
}