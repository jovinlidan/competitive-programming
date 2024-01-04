#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, temp, ans=0, saved = 0, akhir = -1;
    cin >> n >> k;
 
    for(int i = 1; i <= n; i++)
    {
        cin >> temp;
        saved += temp;
        int mn = min(saved, 8);
        ans += mn;
        saved -= mn;
        if(ans >= k && akhir == -1)
        {
            akhir = i;
 
        }
 
 
    }
    cout << akhir << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}