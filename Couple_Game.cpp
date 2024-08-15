#include <iostream>
using namespace std;

int main()
{
    int T, G, B;
    cin >> T;
    while(T > 0)
    {
        cin >> G >> B;
        cout << B - G << endl;

        T--;
    }

    return 0;
}