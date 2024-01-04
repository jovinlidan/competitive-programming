#include <bits/stdc++.h>
#define lli long long int
#define mxN 105
#define INF 9999
 
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
typedef set<int> si;
typedef pair<si, pii>psii;
typedef pair<string, string> pss;
 
 
 
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
        bool valid =true;
        cin >> n;
        int arr[n+5] = {};
        for(int i= 0; i < n; i++)cin >> arr[i];
        sort(arr, arr+n);
        for(int i = 0; i < n -1 ; i++)
        {
            if(abs(arr[i] - arr[i+1])>1 )valid = false;
        }
        if(valid)cout << "YES\n";
        else cout << "NO\n";
    }
 
 
    return 0;
}