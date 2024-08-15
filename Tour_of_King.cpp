#include <iostream>
using namespace std;

int main()
{
    int T, N, M;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> N >> M;
        cout << N * 5 + M * 7 << endl;
    }

    return 0;
}

