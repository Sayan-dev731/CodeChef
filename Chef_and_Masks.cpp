#include <iostream>

using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    for(int x = 1 ; x <= T; x ++)
    {
        cin >> X >> Y;
        if((X * 100) < (Y * 10))
            cout << "Disposable" << endl;

        else
            cout << "Cloth" << endl;
    }

    return 0;
}