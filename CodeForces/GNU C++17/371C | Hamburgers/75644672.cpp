#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string x;
    cin >> x;
    unordered_map<char, int> needed;
    ll b, s ,c , pB, pS, pC, uang, ans = 0;
    cin >> b >> s >> c >> pB >> pS >> pC >> uang;
 
    for(int i = 0; i < (int)x.length(); i++)needed[x[i]]++;
 
    ll l = 1;
    ll r = 1e14;
    while(l <= r)
    {
        ll mid = (r+l)/2;
        ll totalPrice = 0;
        if(needed['B'] * mid - b > 0)
        {
            totalPrice += pB * (needed['B'] * mid - b);
        }
        if(needed['C'] * mid - c > 0)
        {
            totalPrice += pC * (needed['C'] * mid - c);
        }
        if(needed['S'] * mid - s > 0)
        {
            totalPrice += pS * (needed['S'] * mid - s);
        }
        if(totalPrice <= uang)
        {
            l = mid+1;
            ans = mid;
        }
        else
        {
            r = mid-1;
        }
 
 
    }
 
 
 
    cout << ans << endl;
 
 
 
 
 
    return 0;
}