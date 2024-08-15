#include <iostream>
using namespace std;

int main()
{
    int T, N, M, X;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> N >> M >> X;
        int cost = 2 * N + 2 * M;
        cout << X * cost << endl;
    }

    return 0;
}
