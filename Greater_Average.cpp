#include <iostream>
using namespace std;

int main()
{
    int T;
    double A, B, C;
    cin >> T;
    for(int x = 0; x < T; x++)
    {
        cin >> A >> B >> C;
        double avg = (A + B) / 2;
        if(avg > C)
            cout << "YES" << endl;
 
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}