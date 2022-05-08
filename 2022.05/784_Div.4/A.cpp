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
        if (n <= 1399) {
            cout << "Division 4\n";
        }
        else if (1400 <= n && n <= 1599) {
            cout << "Division 3\n";
        }
        else if (1600 <= n && n <= 1899) {
            cout << "Division 2\n";
        }
        else if (n >= 1900) {
            cout << "Division 1\n";
        }
    }
}