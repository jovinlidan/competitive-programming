#include <bits/stdc++.h>
using namespace std;
int main()
{
 long long int n;
 long long int ans1=0, i,ans2=0,x;
 cin>>n;
 for (i = 0 ; i < n;i++)
 {   cin>>x;
  if (x % 2 == 0) ans1++;
  else ans2++; }
 if (ans1 > ans2) cout<<ans2;
 else cout<<ans1;
}