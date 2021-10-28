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
    vi a(10, 0);
    fo(i, n) {
        char ch;
        cin >> ch;
        if(ch == 'L') {
            fo(j, 10) {
                if(a[j] == 0) {
                    a[j] = 1;
                    break;
                }
            }
        } else if(ch == 'R') {
            for(int j = 9; j >= 0; j--) {
                if(a[j] == 0) {
                    a[j] = 1;
                    break;
                }
            }
        } else {
            int j = ch - '0';
            a[j] = 0;
        }
    }
    fo(i, 10) {
        cout << a[i];
    }
    br;
}