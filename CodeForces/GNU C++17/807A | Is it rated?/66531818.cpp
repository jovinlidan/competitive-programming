#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, rt[1005][1005], i, j;
    bool isRated = false;
    bool asc = true;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 2; j++)
        {
            cin >> rt[i][j];
            if(j == 1)
            {
                if(rt[i][j] != rt[i][j-1])
                    isRated = true;
            }
        }
    }
    if(isRated)
        cout << "rated\n";
    else
    {
        for(i = 1; i < n; i++)
        {
            for(j = 0; j < 2; j++)
            {
                if(rt[i-1][j] < rt[i][j])
                {
                    asc = false;
                    goto here;
                }
            }
        }
        here:
        if(asc)
            cout << "maybe\n";
        else
            cout << "unrated\n";
 
 
    }
 
 
 
 
 
 
    return 0;
}