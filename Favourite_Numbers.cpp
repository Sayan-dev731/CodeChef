#include <iostream>
using namespace std;

int main()
{
    int T, A;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> A;
        if(A % 2 == 0 && A % 7 == 0)
            cout << "Alice" << endl;

        else if(A % 2 != 0 && A % 9 == 0)
            cout << "Bob" << endl;

        else
            cout << "Charlie" << endl;
    }
}