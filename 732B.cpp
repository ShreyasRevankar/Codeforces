#include <bits/stdc++.h>
#include <numeric>
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
int MOD = 1e9 + 7;

int main() {
    amazing;
    int n, k;
    cin >> n >> k;

    vi v;
    fo(i, n) {
        int a;
        cin >> a;
        v.pb(a);
    }
    int ans = 0;

    Fo(i, 1, n) {
        if(v[i - 1] + v[i] < k) {
            int w = (k - (v[i - 1] + v[i]));
            ans += w;
            v[i] += w;
        }
    }
    cout << ans;
    br;
    fo(i, n) {
        cout << v[i];
        sp;
    }
    br;
}