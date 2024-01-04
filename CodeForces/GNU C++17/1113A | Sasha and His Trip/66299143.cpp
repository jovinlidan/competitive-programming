#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, v, fuelNeed, ans=0, counts=1;
    cin >> n >> v;
 
    fuelNeed = n-1;
    if(n > v)
    {
        for( int i = 2; i <= n-v; i++)
        {
            ans += i;
        }
        ans += v;
    }else if ( n <= v){
        ans += n-1;
 
 
    }
 
 
    cout << ans << endl;
 
 
 
 
 
 
 
 
 
    return 0;
}