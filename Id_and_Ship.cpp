#include <iostream>
using namespace std;
int main()
{
    int T;
    string letter;
    cin >> T;
    for(int x = 0; x < T; x++)
    {
        cin >> letter;
        if(letter == "B" || letter == "b")
            cout << "BattleShip" << endl;

        else if(letter == "C" || letter == "c")
            cout << "Cruiser" << endl;

        else if(letter == "D" || letter == "d")
            cout << "Destroyer" << endl;

        else if(letter == "F" || letter == "f")
            cout << "Frigate" << endl;
    }

    return 0;
}