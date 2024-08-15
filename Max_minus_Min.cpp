#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T, A, B, C;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> A >> B >> C;
        int maximum = max(A, (B, C));
        int minimum = min(A, (B, C));
        cout << maximum - minimum << endl;
    }

    return 0;
}