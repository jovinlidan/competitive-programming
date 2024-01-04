#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a[7], ans = 0;
    cin >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6];
 
    int sAtas = a[3]*2-1;
 
    int sBawah = a[6]*2-1;
 
    // a[2] a[3] a[4] 5 4 8
    // a[1] a[6] a[5] 7 5 4
    bool must = false;
    for(int i = 1; i <= max(a[2], a[4]); i++)
    {
        if(i <= a[4])sAtas++;
        else
        {
            if(must)sAtas--;
            else must = true;
        }
        if(i <= a[2])sAtas++;
        else
        {
            if(must)sAtas--;
            else must = true;
        }
        ans += sAtas;
        //cout << sAtas << endl;
    }
 
    if(a[2] >= a[4])
    {
        a[5] = a[1];
    }
    else a[1] = a[5];
    for(int i = 1; i <= max(a[5], a[1]); i++)
    {
        if(i <= a[5])sBawah++;
        else sBawah--;
        if(i <=  a[1])sBawah++;
        else sBawah--;
        ans += sBawah;
    }
    cout << ans << endl;
 
 
 
 
 
 
    return 0;
}