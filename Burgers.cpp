#include <iostream>
using namespace std;

int main()
{
    int T, A, B;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> A >> B;
        cout << min(A , B) << endl;
    }

    return 0;
}