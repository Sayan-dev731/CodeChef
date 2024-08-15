#include <iostream>
using namespace std;

int main()
{
    int num;
    string binary = "";
    cout << "enter the decimal number : ";
    cin >> num;
    while(num > 0)
    {
        int rem = num % 2;
        binary = to_string(rem) + binary;
        num  = num / 2;
    }

    cout << "the binary digit is : " << binary << endl;

    return 0; 
}