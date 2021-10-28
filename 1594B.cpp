#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265
#define br cout << endl
#define sp cout << " "
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define file_read                     \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<pll> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
ll MOD = 1e9 + 7;

ll pows(int n, int i, vl &pon) {
    if(pon[i] == 0) {
        pon[i] = (pows(n, i / 2, pon) * pows(n, i / 2, pon)) % MOD;
        if(i % 2) pon[i] = (pon[i] * n) % MOD;
    }
    return pon[i];
}

int main() {
    amazing;
    int t;
    cin>> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        bitset<32> kth(k);
        vl pon(32, 0);
        pon[0] = 1;
        ll ans = 0;
        fo(i, kth.size()) {
            if(kth[i]) {
                ans = (ans + pows(n, i, pon)) % MOD;
            }
        }
        cout << ans;
        br;
    }
}