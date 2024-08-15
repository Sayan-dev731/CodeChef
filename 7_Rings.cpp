#include <iostream>
using namespace std;

int main()
{
    int N, X, T, last_digit;
    cin  >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> N >> X;
        int temp = N * X;
        int count = 0;
        while(temp > 0)
        {
            int rem =  temp % 10;
            count++;
            last_digit = rem;
            temp = temp / 10;
        }

        if(count == 5 && last_digit != 0)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return  0;
}