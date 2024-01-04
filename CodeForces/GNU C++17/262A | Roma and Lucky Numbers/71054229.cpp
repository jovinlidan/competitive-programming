#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, k, ans=0;
 string temp;
 cin >> n >> k;
 for(int i = 0; i <n; i++)
 {
  cin >> temp;
  int cnt = 0;
  for(int i =0 ; i < temp.length(); i++)
  {
   if(temp[i] == '4' || temp[i] == '7')cnt++;
  }
  if(cnt <= k)ans++;
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}