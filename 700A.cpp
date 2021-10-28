#include <bits/stdc++.h>   
using namespace std;

#define fo(i, n) for(int i = 0; i < n; i++)
#define ll long long
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define br cout << endl
typedef vector<ll> vl;

int main() {
    int t;
    string str;

    cin >> t;

    fo(i, t) {
        cin >> str;
        fo(j, str.size()) {
            if(j % 2 == 0) {
                if(str[j] == 'a') {
                    str[j] = 'b';
                } else {
                    str[j] = 'a';
                }
            } else {
                if(str[j] == 'z') {
                    str[j] = 'y';
                } else {
                    str[j] = 'z';
                }
            }
        }

        cout << str;
        br;
    }
}