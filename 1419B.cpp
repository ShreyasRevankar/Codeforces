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

    fo(i, t) {
        int n, u, v;

        cin >> n >> u >> v;
        bool onecolumnhfh = true;
        bool supeasy = false;
        int a;
        cin >> a;
        fo(j, n - 1) {
            int b;
            cin >> b;
            if(a != b) {
                onecolumnhfh = false;
            }
            if(abs(b - a) >= 2) {
                supeasy = true;
            }
            a = b;
        }
        if(supeasy) {
            cout << 0;
        } else if(onecolumnhfh) {
            cout << min(2 * v, u + v);
        } else {
            cout << min(u, v);
        }
        br;
    }
}