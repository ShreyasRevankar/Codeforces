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
        string s;
        queue<int> q1, q2;
        string inps;
        cin >> inps;
        // cout << inps;
        fo(i, inps.length()) {
            int a = inps[i] - '0';
            if(a&1) q1.push(a);
            else q2.push(a);
        }
        while(!q1.empty() || !q2.empty()) {
            if(q1.empty() || (!q2.empty() && q2.front() < q1.front())) {
                cout << q2.front();
                q2.pop();
            } else {
                cout << q1.front();
                q1.pop();
            }
        }
        cout << s;
        br;
    }
}