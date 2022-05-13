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
    if (t % 2 == 0 && t != 2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}