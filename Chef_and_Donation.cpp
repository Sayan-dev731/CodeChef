#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    while(T > 0)
    {
        cin >> X >> Y;
        cout << Y - X << endl;
        T--;
    } 

    return 0;
}