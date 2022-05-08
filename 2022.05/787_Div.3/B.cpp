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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = (n - 1); i > 0; i--) {
            //cout << a[i] << "^^\n";
            if (a[i] == 0 && a[i - 1] > a[i])
            {
                cnt = -1;
                break;
            }
            if (a[i] == 0 && a[i-1] == 0) {
                cnt = -1;
                break;
            }
            while (a[i] <= a[i - 1]) {
                a[i - 1] /= 2;
                //cout << a[i - 1] << "??\n";
                cnt++;
            }
            //cout << a[i - 1] << "!!!!\n";
        }
        //cout << cnt << "---------\n";
        cout << cnt << "\n";
    }
}