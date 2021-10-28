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

    int n;

    cin >> n;

    int a[n], b[n - 1], c[n - 2];

    fo(i, n) {
        cin >> a[i];
    }
    fo(i, n - 1) {
        cin >> b[i];
    }
    fo(i, n - 2) {
        cin >> c[i];
    }

    sort(a, a + n);
    sort(b, b + n - 1);
    sort(c, c + n - 2);

    bool a1 = false, a2 = false;

    fo(i, n - 1) {
        if(a[i] != b[i]) {
            cout << a[i];
            a1 = true;
            break;
        }
    }

    if(!a1) {
        cout << a[n - 1];
    }
    br;

    fo(i, n - 2) {
        if(b[i] != c[i]) {
            cout << b[i];
            a2 = true;
            break;
        }
    }

    if(!a2) {
        cout << b[n - 2];
    }
    br;
}