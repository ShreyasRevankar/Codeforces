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
int MOD = 1e9 + 7;

int main() {
    amazing;
    int n;
    double p;
    cin >> n >> p;
    vector<double> facts(n+1, 0);
    int nc3 = n*(n-1)*(n-2)/6;
    fo(i, n+1) {
        if(i == 1) {
            facts[i] = (n-1)*(n-2)/4;
        } else if(i == 2) {
            facts[i] = (n-2) + (n-2)*(n-3)/2;
        } else if(i >= 3) {
            facts[i] = i*(i-1)*(i-2)/6 + i*(i-1)*(n-i)/2 + i*(n-i)*(n-i-1)/4;
        }
        facts[i] /= nc3;
        // cout << facts[i];
        // br;
        if(facts[i] >= p) {
            cout << i;
            br;
            return 0;
        }
    }

}