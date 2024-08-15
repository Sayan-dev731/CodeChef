#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X;
        if(X >= 30)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0; 
}