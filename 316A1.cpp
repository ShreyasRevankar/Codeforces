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


int nCr(int n, int r) {
    int c = 1;
    // cout << n << r;
    fo(i, r) {
        c *= (n - i);
        // cout << c;
    }
    // Fo(i, 1, r + 1) {
    //     c /= i;
    // }
    return c;
}

int main() {
    amazing;

    int numletters = 0, isfirstletter = 0, numqs = 0, isfirstq = 0;
    char firstletter;
    vi letters(10, 0);

    string str;
    cin >> str;

    if(str[0] >= 'A' && str[0] <= 'J') {
        isfirstletter = 1;
    } else if(str[0] == '?') {
        isfirstq = 1;
    }

    fo(i, str.length()) {
        if(str[i] >= 'A' && str[i] <= 'J') {
            if(letters[str[i] - 'A'] == 0) {
                numletters++;
                letters[str[i] - 'A'] = 1;
            }
        } else if(str[i] == '?') {
            numqs++;
        }
    }

    int ans;
    if(isfirstletter) {
        numletters--;
        ans = (9 * nCr(9, numletters));
    } else {
        ans = nCr(10, numletters);
    }
    // cout << ans;

    if(isfirstq) {
        numqs--;
        ans *= (9 * pow(10, numqs));
    } else {
        ans *= pow(10, numqs);
    }

    cout << ans;
    br;
}