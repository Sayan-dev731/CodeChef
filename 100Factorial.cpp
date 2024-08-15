#include <iostream>
#include <gmpxx.h>

using namespace std;

int main()
{
    mpz_class fact = 1;

    for (int i = 1; i <= 100; i++) {
        fact *= i;
    }

    cout << fact << endl;

    return 0;
}
