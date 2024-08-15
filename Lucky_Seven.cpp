#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    getline(cin, S);
    for(int x = 0; x <= S.length(); x++)
    {
        if(x == 6)
        {
            cout << S[x] << endl;
            break;
        }
    }

    return 0;
}
