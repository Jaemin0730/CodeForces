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
    /*
    while (t--) {
        int n;
        cin >> n;
        int a[51];
        int p = 0, q = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 1) {
                p++;
                // 홀수의 개수
            }
            else {
                q++;
                // 짝수의 개수
            }
        }
        if (n % 2 == 0) {
            if (p % 2 == 0 && q % 2 == 0) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else {
            if (n / 2 == p || n / 2 == q) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
    }
    */
    while (t--) {
        int n;
        cin >> n;
        int a[51];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int p = 0, q = 0;
        for (int i = 1; i <= n; i += 2)
        {
            if (a[i] % 2 == 1) {
                p++;
                // 홀수의 개수
            }
            else {
                q++;
                // 짝수의 개수
            }
        }
        int x = 0, y = 0;
        for (int i = 2; i <= n; i += 2)
        {
            if (a[i] % 2 == 1) {
                x++;
                // 홀수의 개수
            }
            else {
                y++;
                // 짝수의 개수
            }
        }
        if ((p == 0 || q == 0) && (x == 0 || y == 0)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}