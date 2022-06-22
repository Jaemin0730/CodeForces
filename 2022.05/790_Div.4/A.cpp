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
        string s;
        cin >> s;
        int a = 0, b = 0;
        for (int i = 0; i < 3; i++) {
            a += (s[i] - '0');
        }
        for (int i = 3; i < 6; i++) {
            b += (s[i] - '0');
        }
        //cout << a << "\n";
        //cout << b << "\n";
        if (a == b) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}