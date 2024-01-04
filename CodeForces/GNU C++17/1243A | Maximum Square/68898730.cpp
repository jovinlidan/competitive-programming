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
  int n, tmp, total=0, cnt[1005]={}, mx = INT_MIN;
  cin >> n;
  for(int i =0 ;i < n; i++)
  {
   cin >> tmp;
   mx = max(mx, tmp);
   for(int j = 1; j <= tmp; j++)
   {
    cnt[j]++;
   }
  }
  for(int i = mx ; i >= 1; i--)
  {
   if(cnt[i] >= i)
   {
    cout << i << endl;
    break;
   }
  }
 
 }
 
 
 
 
 return 0;
}