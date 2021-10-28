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

int bin_search(int m, int x[], int l, int r) {
    int mid = (l + r + 1) / 2;
    // cout << "l = " << l << " r = " << r << " mid = " << mid;
    // br;
    if(m < x[l]) {
        return l;
    } else if(m >= x[l] && m < x[l + 1]) {
        return l + 1;
    } else if(m < x[mid]) {
        return bin_search(m, x, l, mid);
    } else {
        if(m >= x[r]) {
            return r + 1;
        } else {
            return bin_search(m, x, mid, r);
        }
    }
}

int main() {
    amazing;
    int n, q, m;
    
    cin >> n;

    int x[n];

    fo(i, n) {
        cin >> x[i];
    }

    sort(x, x + n);


    cin >> q;

    fo(i, q) {
        cin >> m;
        cout << bin_search(m, x, 0, n - 1);
        br;
    }
}