#include <iostream>
using namespace std;

int main()
{
    int T, D, L, R;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> D >> L >> R;
        for(int y = L ; y <= R; y++)
        {
            if(D == y)
                if((abs(D - L) < 30) && (abs(D - R) < 30))    
                    cout << "Take second dose now" << endl;

                else
                    cout << "Too early" << endl;

            else
                cout << "Too late" << endl;
        }
    }

}