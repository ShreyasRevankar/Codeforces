#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int q = 1; q <= t; q++)
    {
        int check = 0;
        int n, m;
        scanf("%d%d", &n, &m);
        int fence[n + 1];
        int desired[n + 1];
        int c[m + 1];

        int reqcol[n + 1];
        int wanted[m + 1];
        int wtp[m + 1];

        for (int i = 1; i <= n; i++)
            reqcol[i] = 0;

        for (int i = 1; i <= m; i++)
            wanted[i] = 0;

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &fence[i]);
        }
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &desired[i]);
            if (desired[i] != fence[i])
            {
                reqcol[desired[i]]++;
            }
        }
        for (int i = 1; i <= m; i++)
        {
            scanf("%d", &c[i]);
        }
        //Input taken

        for (int i = m; i > 0; i--)
        {
            if (reqcol[c[i]] > 0)
            {
                wanted[i] = 1;
                reqcol[c[i]]--;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (reqcol[i] != 0)
            {
                check = 1;
            }
        }
        int lastwanted = 0, lastpainted = 0;
        for (int i = m; i > 0; i--)
        {
            if (wanted[i] == 1)
            {
                lastwanted = i;
                break;
            }
        }
        //printf("Last wanted = %d\n", lastwanted);
        lastpainted = lastwanted;
        int j;
        for (j = 1; j <= n; j++)
        {
            if (desired[j] == c[m])
            {
                lastpainted = j;
                break;
            }
        }
        if (j == n + 1)
        {
            check = 1;
        }



        for(int i=m; i>0; i--)
        {
            if(wanted[i]==0)
            {
                wtp[i]=lastpainted;
            }

            else
            {
                for(int j=0; j<n; j++)
                {
                    if(desired[j]==c[i] && desired[j]!=fence[j])
                    {
                        fence[j]=desired[j];
                        wtp[i]=j;
                        break;
                    }
                }
            }

        }

        for(int i=1; i<=m; i++)
        {
            if(wtp[i]==0)
                check=1;
        }
        if (check == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
            continue;
        }




        


        for(int i=1; i<=m; i++)
        {
            printf("%d ", wtp[i]);
        }
        printf("\n");
    }
    return 0;
}