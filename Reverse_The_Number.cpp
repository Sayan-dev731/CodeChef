#include <iostream>
using namespace std;

int main()
{
    int N, T;
    cin >> T;
    for(int x = 0; x < T; x++)
    {
        int reverse = 0;
        cin >> N;
        while(N > 0)
        { 
            int rem = N % 10;
            reverse = reverse + rem * 10;
            N = N / 10;
        }

        cout << reverse << endl;
    }
}