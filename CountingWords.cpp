#include <iostream>
using namespace std;

int main()
{
    int T, N, M;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> N >> M;
        cout << N * M << endl;
    }

    return 0;
}