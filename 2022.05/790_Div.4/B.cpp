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
    while (t--) {
        int n;
        cin >> n;
        int a[n + 1];
        int sm = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sm = min(a[i], sm);
        }
        ll sol = 0;
        for (int i = 0; i < n; i++) {
            sol += a[i] - sm;
        }
        cout << sol << "\n";
    }
}