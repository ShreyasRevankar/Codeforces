#include <stdio.h>

int main() {
    int t, n, k;
    int counter;

    scanf("%d", &t);
    for(int i = 0; i < t; i++) {
        scanf("%d", &n);
        scanf("%d", &k);
        int h[n];
        for(int j = 0; j < n; j++) {
            scanf("%d", &h[j]);
        }
        for(int w = 0; w < k; w++) {
            counter = 0;
            while(counter != n) {
                if(h[counter] >= h[counter + 1]) {
                    counter++;
                } else {
                    h[counter]++;
                    break;
                }
            }
            if(counter == n) {
                break;
            }
        }
        if(counter == n) {
            printf("-1");
        } else if(counter < n) {
            printf("%d", counter + 1);
        }
        printf("\n");
    }
}