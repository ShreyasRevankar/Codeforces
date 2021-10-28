#include <bits/stdc++.h>
using namespace std;

#define fo(i, n) for(int i = 0; i < n; i++)
#define ll long long
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef vector<ll> vl;

int main() {
    amazing;

    int s, n;
    cin >> s >> n;
    int x[n];
    int y[n];

    fo(i, n) {
        cin >> x[i] >> y[i];
    }
    int won = 2, remaining = n;
    while(won != 0) {
        won = 0;
        fo(j, n) {
            if(x[j] == 0) {
                continue;
            } else if(s > x[j]) {
                won++;
                s += y[j];
                x[j] = 0;
                remaining--;
                // cout << "he";
            }
        }
        // cout << won << "he";
    }
    if(remaining == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << endl;
}