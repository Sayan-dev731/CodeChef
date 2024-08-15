#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C;
    cin >> T;
    for(int x = 0; x < T; x++)
    {
        cin >> A >> B >> C;
        if((A + B + C) == 180)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}