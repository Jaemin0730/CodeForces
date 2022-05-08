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
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        int sx = a - x;
        int sy = b - y;
        if (sx >= 0) {
            if (sy >= 0) {
                if (c - sy >= 0)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else {
                if (c + sy >= 0)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
        else {
            c -= sx;
            if (sy >= 0) {
                if (c - sy >= 0)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else {
                if (c + sy >= 0)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }
    */
    while (t--) {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        int sx = a - x;
        int sy = b - y;
        if (sx >= 0 && sy >= 0) {
            cout << "YES\n";
        }
        else if (sx >= 0 && sy < 0) {
            if (c + sy >= 0) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else if (sx < 0 && sy >= 0) {
            if (c + sx >= 0) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else {
            if (c + sx >= 0) {
                c += sx;
                if (c + sy >= 0) {
                    cout << "YES\n";
                }
                else {
                    cout << "NO\n";
                }
            }
            else {
                cout << "NO\n";
            }
        }
    }
}