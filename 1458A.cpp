#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define ll long long
#define PI 3.14159265
#define br cout << endl
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
int MOD = 1e9 + 7;

ll gcd(ll a, ll b) {
    if(b == 0) return a;
    if(a == 0) return b;
    if(a == b) return a;
    if(a > b) return gcd(a - b, b);
    else return gcd(a, b - a);
}

int main() {
    amazing;
    int n, m;
    cin >> n >> m;

    vl a;
    fo(i, n) {
        ll x;
        cin >> x;
        a.pb(x);
    }
    vl b;
    fo(i, m) {
        ll x;
        cin >> x;
        b.pb(x);
    }
    if(n == 1) {
        fo(i, m) {
            cout << (a[0] + b[i]) << " ";
        }
        br;
    } else {
        int w = min_element(a.begin(), a.end()) - a.begin();
        // cout << w;
        fo(i, n) {
            if(i == w) continue;
            a[i] -= a[w];
        }
        ll ans = 0;
        fo(i, n) {
            if(i == w) continue;
            ans = __gcd(ans, a[i]);
        }
        fo(i, m) {
            cout << __gcd(a[w] + b[i], ans) << " ";
        }
        br;
    }
}