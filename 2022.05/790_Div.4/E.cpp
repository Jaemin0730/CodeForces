#include <bits/stdc++.h>
using namespace std;
#define ll long long

void z()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}



// 정렬, 누적합, 이분탐색
int main(void)
{
    z();
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        int a[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        // 정렬 사용
        sort(a, a + n, greater<int>());
        vector<int> v;
        v[0] = a[0];
        // 누적합 사용
        for (int i = 1; i < n; i++) {
            v[i] = v[i - 1] + a[i];
        }
        // 이분탐색 사용
        for (int i = 0; i < m; i++) {
            int k;
            cin >> k;
            int sol = lower_bound(v.begin(), v.end(), k) - v.begin() + 1;
            if (k > v[n - 1]) {
                //cout << -1 << "--------------\n";
                cout << -1 << "\n";
                break;
            }
            else {
                cout << sol << "\n";
            }
        }
        
    }
}
