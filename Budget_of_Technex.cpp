#include <iostream>
using namespace std;

int main()
{
    int T, R;
    cin >> T;
    while(T > 0)
    {
        cin >> R;
        cout << R * 100 << endl;

        T--;
    }

    return 0;
}