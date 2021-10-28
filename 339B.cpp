#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for(int i = 0; i < n; i++)
#define ll long long
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define br cout << endl
typedef vector<ll> vl;

int main() {
    amazing;

    int n, m, a, b;
    ll int tot = 0;
    cin >> n >> m;
    cin >> a;
    tot = a - 1;
    fo(i, m - 1) {
        cin >> b;
        if(b < a) {
            tot += ((b + n) - a);
        } else {
            tot += (b - a);
        }
        a = b;
    }
    cout << tot << endl;
}