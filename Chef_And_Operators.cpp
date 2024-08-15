#include <iostream>
using namespace std;

int main()
{
    int T, A, B;
    cin >> T;
    for(int x = 0; x < T; x++)
    {
        cin >> A >> B;
        if(A > B)
            cout << ">" << endl;

        else if(A < B)
            cout << "<" << endl;

        else
            cout << "=" << endl;
    }
}