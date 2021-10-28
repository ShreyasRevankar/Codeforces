#include <bits/stdc++.h>   
using namespace std;

#define fo(i, n) for(int i = 0; i < n; i++)
#define ll long long
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define br cout << endl
typedef vector<ll> vl;

int main() {
    int t, px, py;
    string inst;
    char c;
    int dir[4] = {0}; // 0 is right, 1 is up, 2 is left, 3 is down
    bool isx, isy;
    
    cin >> t;
    fo(i, t) {
        cin >> px >> py;
        cin >> inst;
        fo(w, 4) { // initialize all dirrections to 0
            dir[w] = 0;
        }
        fo(j, inst.size()) {
            c = inst[j];
            if(c == 'R') {
                dir[0]++;
                // x++;
            } else if(c == 'U') {
                dir[1]++;
                // y++;
            } else if(c == 'L') {
                dir[2]--;
                // x--;
            } else if(c == 'D') {
                dir[3]--;
                // y--;
            }
        }

        // fo(w, 4) {
        //     cout << dir[w] << ' ';
        // }
        // br;

        isx = isy = false;
        if(px >= 0) {
            if(dir[0] >= px) {
                isx = true;
                // cout << "hoes";
            }
        } else if(px < 0){
            if(dir[2] <= px) {
                isx = true;
            }
        }

        if(py >= 0) {
            if(dir[1] >= py) {
                isy = true;
            }
        } else if(py < 0){
            if(dir[3] <= py) {
                isy = true;
            }
        }
        if(isx && isy) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        br;
    }
}