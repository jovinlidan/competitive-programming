#include <bits/stdc++.h>
using namespace std;
#define lli long long int
map<int , vector<int>> adj;
void solve(int start, int last)
{
    for(auto i : adj[start])
    {
        if(i != last)
        {
            solve(i, start);
        }
    }
    cout << start << " ";
}
 
lli findNum(lli n)
{
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)return i;
    }
    return n;
}
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
    {
        int n, ge = 0, ga = 0;
        cin >> n;
        int arr[n+5] = {};
        for(int i = 0;i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]%2 == 0)ge++;
            else ga++;
        }
        if(n % 2 == 1)
        {
            if(ga > 0)cout << "YES\n";
            else cout << "NO\n";
        }
        else
        {
            if(ga > 0 && ge > 0)cout << "YES\n";
            else cout << "NO\n";
        }
 
    }
 
 
 
 
 
 
 
 
 
}
 