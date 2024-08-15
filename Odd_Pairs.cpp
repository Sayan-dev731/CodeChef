#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while(T--)
    {
        cin >> N;
        int c = 0;
        for(int x = 1; x <= N; x++)
        {
            for(int y = N; y >= 1; y--)
            {
                if((x + y) % 2 != 0)
                    c++;
            }
        }

        cout << c << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while(T--)
    {
        cin >> N;
        int c = 0;
        int y = N;
        for(int x = 1; x <= N; x++)
        {
            if((x + y) % 2 != 0)
                c++;
            
            y--;
        }

        cout << 2 * c << endl;
    }

    return 0;
}