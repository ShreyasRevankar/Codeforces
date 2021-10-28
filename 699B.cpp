#include <bits/stdc++.h>   
/* ******* *
 * PENDING *
 * ******* */
using namespace std;

#define fo(i, n) for(int i = 0; i < n; i++)
#define ll long long
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define br cout << endl
typedef vector<ll> vl;

int main() {
    int t, n, k;
    int counter;

    cin >> t;
    fo(i, t) {
        cin >> n >> k;
        int h[n];
        fo(j, n) {
            cin >> h[j];
        }
        fo(w, k) {
            counter = 0;
            while(counter != k) {
                if(h[counter] >= h[counter + 1]) {
                    counter++;
                } else {
                    h[counter]++;
                    break;
                }
            }
            if(counter == k) {
                break;
            }
        }
        if(counter == k) {
            cout << "-1";
        } else if(counter < k) {
            cout << counter + 1;
        }
        br;
    }
}