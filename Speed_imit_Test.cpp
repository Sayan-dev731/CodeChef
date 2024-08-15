#include <iostream>
using namespace std;

int main()
{
    int T;
    double A, X, B, Y;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> A >> X >> B >> Y;
        if((A / X) > (B / Y))
            cout << "Alice" << endl;

        else if((A / X) < (B / Y))
            cout << "Bob" << endl;

        else
            cout << "Equal" << endl;
    }

    return 0;
}