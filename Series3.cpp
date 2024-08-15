//Display the following series 0.5 0.55 0.555 0.5555 0.55555...... n terms. Also calculate and display sum of elements;

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float f = 0;
    float sum = 0;
    for(int x = 1; x <= n; x++)
    {
        f = (f / 10) + 0.5;
        sum += f;
        cout << f << " ";
    }

    cout << endl;
    cout << sum << endl;

    return 0;
} 