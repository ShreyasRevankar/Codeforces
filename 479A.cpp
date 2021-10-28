#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for(int i = 0; i < n; i++)
#define ll long long
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define MOD 1e9 + 7;
typedef vector<ll> vl;

int main() {
    amazing;

    int a, b, c;
    int aa[6];

    cin >> a >> b >> c;

    aa[0] = a + b + c;
    aa[1] = (a + b) * c;
    aa[2] = a + b * c;
    aa[3] = a * b + c;
    aa[4] = a * (b + c);
    aa[5] = a * b * c;
    int max = 0;
    fo(i, 6) {
        if(aa[i] > max) {
            max = aa[i];
        }
    }
    cout << max << endl;
}