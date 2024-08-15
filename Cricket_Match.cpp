#include <iostream>
using namespace std;

int main()
{
    int T, N, M;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> N >> M;
        int target = M * 6 *6;
        if(target >= N)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}