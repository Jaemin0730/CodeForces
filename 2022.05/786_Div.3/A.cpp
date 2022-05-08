#include <bits/stdc++.h>
using namespace std;
#define ll long long

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    z();
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y % x == 0) {
            cout << 1 << " " << x / y << "\n";
        }
        else {
            cout << 0 << " " << 0 << "\n";
        }
    }
}