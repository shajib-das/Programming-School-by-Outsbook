#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, m, y, fd;

    cin >> x >> m >> y;

    double tmp = (x + y) / (double)m;
    fd = x / tmp;

    cout << fd << endl;

    return 0;
}
