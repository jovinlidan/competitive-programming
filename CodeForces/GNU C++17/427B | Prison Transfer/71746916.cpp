#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 
 int n, t, c, arr= 0, ans = 0, cTemp=0;
 bool goes = false;
    cin >> n >> t >> c;
    for(int i = 0; i < n; i++)
 {
  cin >> arr;
  if(arr > t)
  {
   goes = false;
   cTemp = 0;
   continue;
  }
  if(goes)ans++;
  else if(!goes)cTemp++;
 
  if(cTemp == c && !goes)
  {
   goes = true;
   ans++;
  }
 
 
 
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 return 0;
}