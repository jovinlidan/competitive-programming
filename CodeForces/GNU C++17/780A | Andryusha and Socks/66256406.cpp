#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n, socks, i, counts=0, tables[200005], mx=-1e9;
 
    cin >> n;
    memset(tables, 0, sizeof(tables));
    for(i = 0; i < 2*n; i++)
    {
        cin >> socks;
        tables[socks]++;
        if(tables[socks] >= 2)
        {
            tables[socks] = 0;
            counts--;
            mx = max(mx, counts);
        }
        else
        {
            counts++;
            mx = max(mx, counts);
        }
 
 
    }
    cout << mx << endl;
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}