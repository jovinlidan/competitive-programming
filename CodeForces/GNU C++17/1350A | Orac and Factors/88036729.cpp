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
        lli n, k;
        cin >> n >> k;
 
        cout << n+findNum(n) + (2 * (k-1)) << '\n';
 
 
    }
 
 
 
 
 
 
 
 
 
}
 