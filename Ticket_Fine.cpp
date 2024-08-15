#include <iostream>
using namespace std;

int main()
{
    int T, X, P, Q;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X >> P >> Q;
        cout << ((abs(P - Q)) * X) << endl;
    }

    return 0;
}