#include <iostream>

using namespace std;

/**
 * Overflows de Fibonacci para los siguientes tipos de datos en cpp:
 * - int: overflow en 47
 * - short: overflow en 24
 * - long: overflow en 47
 * - long long: overflow en 93
 */

int main()
{
    long long x1 = 1, x2 = 2, n = 3, temp = 0;
    while(x2 > x1){
        temp = x2;
        x2 += x1;
        x1 = temp;
        n++;
    }
    cout << "Overflow: " << n << endl;
    return 0;
}
