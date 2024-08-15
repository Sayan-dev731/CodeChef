//Display the series 1 11 111 1111 11111 111111 ........ n terms.

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
        s += "1";
        cout << s << " ";
    }

    return 0;
}