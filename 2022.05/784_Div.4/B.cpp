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
        int a[200001] = {};
        int n;
        cin >> n;
        int sol = -1;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            a[k]++;
            if (a[k] >= 3) {
                sol = k;
            }
        }
        cout << sol << "\n";
    }
}