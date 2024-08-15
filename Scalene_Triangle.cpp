#include <iostream>
using namespace std;

int main() 
{
    int T, A, B, C;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> A >> B >> C;
        if(A!=B && B!=C && C!=A)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}