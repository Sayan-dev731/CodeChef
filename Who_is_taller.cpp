#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X >> Y;
        if(X > Y)
            cout << "A" << endl;

        else if(Y > X)
            cout << "B" << endl;
    }

    return 0;
}