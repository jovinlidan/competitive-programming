#include <bits/stdc++.h>
#define lli long long int
#define mxN 500005
#define INF 9999
 
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
typedef pair<pii, string> piis;
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        lli a[n+5] = {}, b[n+5] = {}, ans = 0, mn = 1e13, needed = 0;
        for(int i =1; i<= n;i++)
        {
            cin >> a[i] >> b[i];
 
        }
 
        for(int i = 1; i <= n; i++)
        {
            int nextIdx = (i+1) % (n+1) + !((i+1) % (n+1));
 
            mn = min(mn, min(a[nextIdx], b[i]));
            needed +=  a[nextIdx] - min(a[nextIdx], b[i]);
 
 
 
        }
        cout << mn+needed << '\n';
 
 
 
    }
 
 
 
 
 
 
}