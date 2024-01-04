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
        int a[n+2]= {}, b[n+2] = {};
 
        for(int i = 0; i < n; i++)cin>> a[i];
        for(int i = 0; i < n; i++)cin>> b[i];
 
        bool valid = true, pos = false, neg = false;
        for(int i = 0; i < n; i++)
        {
            if(a[i] < b[i])
            {
                if(!pos)
                {
                    valid = false;
                    break;
                }
            }
            else if(a[i] > b[i])
            {
                if(!neg)
                {
                    valid = false;
                    break;
                }
            }
            if(a[i] > 0)pos = true;
            else if(a[i] < 0)neg = true;
 
        }
        if(valid)cout << "YES\n";
        else cout << "NO\n";
 
 
    }
 
 
 
 
 
 
}