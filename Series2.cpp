//Display the series 1 10 101 1010 10101 101010 ........ n terms.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s = "";
    for(int x = 1; x <= n; x++)
    {
        if(x % 2 == 0)
            s += "0";

        else
            s += "1";

        cout << s << " ";
    }

    return 0;
}
