#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, d1, d2, ap;
    cin >> x >> d1 >> d2;

    ap = ((x * d1) / d2) - x;

    cout << ap << endl;

    return 0;
}
