#include <iostream>
using namespace std;

int main()
{
    int T, X;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X;
        if(X > 50)
            cout << "RIGHT" << endl;

        else
            cout << "LEFT" << endl;
    }

    return 0;
}