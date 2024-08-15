#include <iostream>
using namespace std;

int main()
{
    int T, a, b, c, d;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> a >> b >> c >> d;

        if(a == 1 || b == 1 || c == 1 || d == 1)
            cout << "OUT" << endl;

        else
            cout << "IN" << endl;
    }

    return 0;
}