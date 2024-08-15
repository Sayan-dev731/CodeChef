#include <iostream>
using namespace std;

int main()
{
    int T, N, M;
    cin >> T;
    for(int a = 1; a <= T; a++)
    {
        cin >> N >> M;
        int x, y;
        x = N + (M % N);
        y = N - (M % N);    
        if((x < M) && (x >= N))
            cout << x << endl;

    else if(y < N)
            cout << y << endl; 
    }

    return 0;
}