#include <iostream>
using namespace std;
int main()
{
    int T, num;
    cin >> T;
    for(int x = 0; x < T; x++)
    {
        int counter = 0;
        cin >> num;
        while(num > 0)
        {
            int rem = num % 10;
            if(rem == 4)
                counter++;

            num = num / 10;
        }
        
        cout << counter << endl;
    }

    return 0;
}