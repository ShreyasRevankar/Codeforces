#include <bits/stdc++.h>
/* ******* *
 * PENDING *
 * ******* */
using namespace std;

#define fo(i, n) for(int i = 0; i < n; i++)
#define ll long long
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef vector<ll> vl;

int main() {
    amazing;

    int n, k;
    cin >> n >> k;
    int ar[n];
    fo(i, n) {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int ins = ar[n - 1] - ar[0];

    int x;
    for(x = 0; x < k; x++) {
        if(ins > 0) {
            int max;
            for(max = n - 1; ar[max] == ar[n - 1]; max--) {
                continue;
            }
            int min;
            for(min = 0; ar[min] == ar[0]; min++) {
                continue;
            }
            ar[max + 1]--;
            ar[min - 1]++;
            ins = a[n - 1] - a[0];
        }
    }
}