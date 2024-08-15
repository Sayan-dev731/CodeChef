#include <iostream>
using namespace std;

int main()
{
    int X, Y, H;
    cin >> X >> Y >> H;
    int extra = (H - 1) * Y;
    cout << (extra + X) << endl; 

    return 0;
}