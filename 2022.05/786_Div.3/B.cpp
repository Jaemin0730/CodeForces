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
        string s;
        cin >> s;
        int sol;
        sol = (s[0] - 'a') * 25;
        if (s[1] < s[0]) {
            sol += s[1] - 'a' + 1;
        }
        else {
            sol += s[1] - 'a';
        }
        cout << sol << "\n";
    }
}