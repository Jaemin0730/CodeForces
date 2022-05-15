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
    int cnt = 0;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int k = a + b + c;
        if (k >= 2) {
            cnt++;
        }
    }
    cout << cnt;
}