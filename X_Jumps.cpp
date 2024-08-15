#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        int counter = 0;
        cin >> X >> Y;
        int outcomes = X / Y;
        cout << outcomes;
        if((outcomes * Y) == X)
            cout << outcomes << endl;

        else if(X < Y)
            cout << X << endl;

        else if(X > Y)
        {
            int temp = outcomes * Y;
            while(temp < X)
            {
                temp++;
                counter++;
            }

            cout << outcomes + counter << endl;
        }
    }

    return 0;
}