#include <iostream>
using namespace std;

int main()
{
    int range, c = 0;
    cin >> range;
    for(int x = 1; x <= range; x++)
    {
        if(x % 7 == 0 || x % 10 == 7)
        {
            cout << x << endl;
            c++;
        }
    }

    cout << "count: " << c << endl;

    return 0;
}