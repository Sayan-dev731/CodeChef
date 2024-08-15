#include <iostream>
using namespace std;

int main()
{
    int T, X, N;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> X >> N;
        cout << (X / 10) * N << endl;
    }

    return 0;
}