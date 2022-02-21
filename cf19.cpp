/*Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.

Input
The only line contains an integer n (1 ≤ n ≤ 1018).

Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.

Output
Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).

Examples
inputCopy
40047
outputCopy
NO
inputCopy
7747774
outputCopy
YES
inputCopy
1000000000000000000
outputCopy
NO*/

#include <iostream>
using namespace std;

int main()
{
    long long int n, rem, ctr = 0;
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        if (rem == 4 || rem == 7)
        {
            ctr++;
        }
    }
    if (ctr == 4 || ctr == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}