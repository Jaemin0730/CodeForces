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
        if (s.length() > 10) {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << "\n";
        }
        else {
            cout << s << "\n";
        }
    }
}