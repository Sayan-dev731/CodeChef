#include <iostream>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int submissions = N - A;
    cout << submissions << " ";
    cout << submissions - B << endl;

    return 0;
}