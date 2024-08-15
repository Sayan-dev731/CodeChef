#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T, N, X;
    string A = "";
    cin >> T;
    for(int x = 1; x <= T; x++)
    {
        cin >> N >> X;
        cin >> A;
        string A1 = "";
        int c = 0;
        for(int y = 0; y < A.size(); y++)
        {
            if(A[y] == ' ')
            {
                if(stoi(A1) >= X)
                    c++;
                A1 = "";
            }
            else
            {
                A1 = A1 + A[y];
            }
        }

        if(stoi(A1) >= X)
            c++;

        cout << c << endl;
    }

    return 0;
}