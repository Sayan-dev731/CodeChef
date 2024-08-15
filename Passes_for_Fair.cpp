#include <iostream>
using namespace std;

int main()
{
    int T, N, K;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> N >> K;
        if(N < K)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}