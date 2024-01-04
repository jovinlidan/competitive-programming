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
        int n, mn = 1e9;
        cin >> n;
        int arr[n+5] = {}, b[n+5] = {};
        for(int i =0; i < n; i++)
        {
            cin >> arr[i];
            mn = min(mn, arr[i]);
            b[i] = arr[i];
        }
        sort(b, b+n);
        bool valid = 1;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] != b[i])
            {
                if(arr[i] % mn != 0 || b[i] % mn != 0)valid = 0;
            }
        }
        if(valid)cout << "YES\n";
        else cout << "NO\n";
 
 
    }
 
 
 
 
 
 
}