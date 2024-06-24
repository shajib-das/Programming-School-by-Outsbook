#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, r_taka, m_taka;

    cin >> x >> y;

    r_taka = (x - y) / 2;
    m_taka = r_taka + y;

    cout << m_taka << " " << r_taka << endl;

    return 0;
}
