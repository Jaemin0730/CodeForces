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
        int n, m;
        cin >> n >> m;
        string s[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        int mi = 1e9;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int save = 0;
                for (int l = 0; l < m; l++) {
                    if (s[i][l] - s[j][l] >= 0) {
                        save += s[i][l] - s[j][l];
                    }
                    else {
                        save += s[j][l] - s[i][l];
                    }
                }
                mi = min(save, mi);
            }
        }
        cout << mi << "\n";
    }
}