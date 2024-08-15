#include <iostream>
using namespace std;

int main()
{
    int N, arr[3];
    cin >> N;
    string str, s, num = "";
    for (int x = 1; x <= N; x++)
    {
        cin >> str;
        for (int y = 0; y < str.size(); y++)
        {
            s = str[y];
            if (s != " ")
            {
                num = num + s;
                cout << num << endl;
            }

            else
                arr[y] = stoi(num);
        }

        for (int y = 0; y < 3; y++)
            cout << arr[y] << " ";
    }

    // cout << arr;
    return 0;
}