#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C, D;
    cin >> T;
    for (int x = 1; x <= T; x++)
    {
        int c = 0;
        cin >> A >> B >> C >> D;
        for (int y = 1; y <= 8; y++)
        {
            if ((y >= A && y <= B) || (y >= C && y <= D))
                c++;
        }

        cout << c << endl;
    }

    return 0;
}
