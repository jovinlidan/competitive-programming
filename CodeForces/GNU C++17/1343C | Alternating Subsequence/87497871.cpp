#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n, temp, last;
  vector<int> ans;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
   cin >> temp;
   if(i != 0)
   {
    if(temp < 0 && last < 0)
    {
     last = max(last, temp);
    }
    else if(temp > 0 && last < 0)
    {
     ans.push_back(last);
     last = temp;
    }
    else if(temp < 0 && last > 0)
    {
     ans.push_back(last);
     last = temp;
    }
    else if(temp > 0 && last >0)
    {
     last = max(last, temp);
    }
   }
   else
   {
    last = temp;
 
   }
  }
  ans.push_back(last);
  long long int sum = 0;
  for(int i = 0; i < ans.size(); i++)
  {
   //cout << ans[i] << "==";
   sum += ans[i]*1LL;
  }
  //cout << '\n';
  cout << sum << '\n';
 
 }
 
}