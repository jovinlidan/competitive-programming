#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 vector<int> ans;
 
 int n;
 cin >> n;
 bool listPrime[n+5] = {};
 memset(listPrime, true, sizeof(listPrime));
 listPrime[1] = false;
 for(int i = 2; i <= n; i++)
 {
  if(!listPrime[i])continue;
 
  for(int j = i+i; j <= n; j+=i)
  {
   listPrime[j] = false;
  }
 }
 int temp = 1;
 for(int i = 2; i <= n; i++)
 {
  if(listPrime[i])
  {
   ans.push_back(i);
            temp = i;
            while(n/i >= temp)
   {
    temp *= i;
    ans.push_back(temp);
    if(n/i < temp)break;
   }
 
 
  }
 }
 cout << ans.size() << endl;
 for(int i = 0; i < ans.size(); i++)
 {
  if(i != 0) cout << " ";
  cout << ans[i];
 }
 cout << endl;
 
 
 
 
 return 0;
}