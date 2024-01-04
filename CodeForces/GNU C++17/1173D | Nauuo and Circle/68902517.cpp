#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main()
{
    lli n;
 const int mod=998244353;
 cin>>n;
 lli d[2000005]= {};
 lli ans=n;
 for(int i = 1 ; i < n ; i++)
 {
  int u,v;
  cin>>u>>v;
  d[u]++;
  d[v]++;
  ans=ans*d[u]%mod*d[v]%mod;
 }
 cout<<ans<<endl;
 
}