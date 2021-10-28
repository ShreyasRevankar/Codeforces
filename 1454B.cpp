#include <bits/stdc++.h>
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


int main() {
    amazing;
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        // vi v;
        vi v2(n + 1, 0);

        fo(i, n) {
            int a;
            cin >> a;
            // v.pb(a);
            if(v2[a] == 0) {
                v2[a] = i + 1;
            } else {
                v2[a] = -1;
            }
        }
        int ans = -1;
        Fo(i, 1, n + 1) {
            if(v2[i] > 0) {
                ans = v2[i];
                break;
            }
        }
        cout << ans;
        br;
    }
}