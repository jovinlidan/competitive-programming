#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    int n, counts=0, a[105]= {}, mn=1e9, clr=0;
 
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
 
    while (counts < n)
    {
        mn = 1e9;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != -1)
            {
                mn = min(mn, a[i]);
            }
        }
 
        for(int i = 0; i < n; i++)
        {
            if( a[i] != -1)
            {
                if((a[i] % mn) == 0)
                {
                    a[i] = -1;
                    counts++;
                }
            }
 
        }
 
        clr++;
 
    }
    cout << clr << endl;
 
 
 
}