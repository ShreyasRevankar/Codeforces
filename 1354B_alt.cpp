#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define ll long long
#define PI 3.14159265
#define br cout << endl
#define sp cout << " "
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define amazing ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
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

int main(void) {
    amazing;

    int t;
    cin >> t;
    // cout << t;
    char en;
    // cin >> en;
    while(t--) {
        vi v1, v2, v3;
        int b1 = 0, b2 = 0, b3 = 0;
        int ans = 3e5;
        char ch;
        // cin >> ch;
        string str;
        cin >> str;
        // cout << str[str.length() - 1];
        // cout << ch << t;
        // br;
        int i = 0;
        ch = str[i];
        while(ch >= '1' && ch <= '3') {
            // cout << ch;
            if(ch == '1') {
                int v2s = v2.size();
                if(v2s >= 2 && v2[v2s - 1] == 3) {
                    if(ans > v2s + 1) {
                        ans = v2s + 1;
                        // cout << 0;
                    }
                    v2.clear();
                } else if(v2s >= 1) {
                    v2.pb(1);
                }
                int v3s = v3.size();
                if(v3s >= 2 && v3[v3s - 1] == 2) {
                    if(ans > v3s + 1) {
                        ans = v3s + 1;
                        // cout << 9;
                    }
                    v3.clear();
                } else if(v3s >= 1) {
                    v3.pb(1);
                }
                v1.clear();
                v1.pb(1);
            } else if(ch == '2') {
                int v1s = v1.size();
                if(v1s >= 2 && v1[v1s - 1] == 3) {
                    if(ans > v1s + 1) {
                        ans = v1s + 1;
                        // cout << 8;
                    }
                    v1.clear();
                } else if(v1s >= 1) {
                    v1.pb(2);
                }
                int v3s = v3.size();
                if(v3s >= 2 && v3[v3s - 1] == 1) {
                    if(ans > v3s + 1) {
                        ans = v3s + 1;
                        // cout << 7;
                    }
                    v3.clear();
                } else if(v3s >= 1) {
                    v3.pb(2);
                }
                v2.clear();
                v2.pb(2);
            } else if(ch == '3') {
                int v2s = v2.size();
                if(v2s >= 2 && v2[v2s - 1] == 1) {
                    if(ans > v2s + 1) {
                        ans = v2s + 1;
                        // cout << 6;
                    }
                    v2.clear();
                } else if(v2s >= 1) {
                    v2.pb(3);
                }
                int v1s = v1.size();
                // cout << v1s;
                if(v1s >= 2 && v1[v1s - 1] == 2) {
                    if(ans > v1s + 1) {
                        ans = v1s + 1;
                        // cout << 5;
                    }
                    v1.clear();
                } else if(v1s >= 1) {
                    v1.pb(3);
                }
                v3.clear();
                v3.pb(3);
            }
            else {
                cout << "some";
                br;
            }
            // scanf("%c", &ch);
            i++;
            ch = str[i];
        }
        if(ans == 3e5) {
            cout << 0;
        } else {
            cout << ans;
        }
        br;
    }
}