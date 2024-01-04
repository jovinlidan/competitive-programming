#include<bits/stdc++.h>
#define mxN 200005
using namespace std;
typedef long long int ll;
 
int parent[mxN] = {};
int finds( int i, int asal)
{
    if (parent[i] == asal)  return 1;
    //cout << parent[i] << " " << asal << '\n';
    return finds(parent[i], asal) + 1;
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
        int n;
        cin >> n;
        for(int i = 1; i <=n ;i++)cin >> parent[i];
 
 
        for(int i = 1; i <=n ;i++)
        {
            cout << finds(parent[i], parent[i]) << " ";
        }
        cout << '\n';
 
    }
 
 
   return 0;
}