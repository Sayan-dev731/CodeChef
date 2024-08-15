#include <iostream>
using namespace std;

int main()
{
    int num;
    int store = 1;
    cout << "enter the number : ";
    cin >> num;
    int duplicate = num;
    while(duplicate >= 0)
    {
        int rem = duplicate % 10;
        store = store * 10 + rem;
        duplicate = duplicate / 10; 
    }

    cout << store << " this is the number stored after getting the palundrome number.";

    if(store == num)
        cout << num << " this is a palindrome number." << endl;

    else
        cout << num << " this is not a palindrome number" << endl;

    return 0;
}