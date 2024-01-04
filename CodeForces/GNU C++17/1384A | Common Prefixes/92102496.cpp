#include <bits/stdc++.h>
#define lli long long int
using namespace std;
const int mod = 1000000007;
 
char solve(char x)
{
    if(x == 'a')return 'b';
    return 'a';
}
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int arr[n+5] = {};
        string str[n+5];
        for(int i = 1; i <= n; i++)cin >> arr[i];
 
        for(int i = 0; i < 200; i++)str[0] += 'a';
        for(int i = 1; i <= n; i++)
        {
            str[i] = str[i-1];
 
            str[i][arr[i]] = solve(str[i][arr[i]]);
 
        }
        for(int i = 0; i < n+1; i++)
        {
            //if(str[i] == "")cout << solve(i+1);
             cout << str[i];
            cout << '\n';
        }
 
 
 
    }
 
 
 
    return 0;
}