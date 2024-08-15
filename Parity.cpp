#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> N;
        if(N % 2 == 0)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}