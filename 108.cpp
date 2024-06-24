#include <bits/stdc++.h>

using namespace std;

int main()
{
    int d, q, r; /// d = divisor, q = quotient, r = remainder

    cin >> d >> q;

    int dividend = d * q + (d / 3);

    cout << dividend << endl;



    return 0;
}
