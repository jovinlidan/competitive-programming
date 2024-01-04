#include <bits/stdc++.h>
using namespace std;
 
int convert(string s)
{
 int ans = 0;
 stringstream hasil(s);
 hasil >> ans;
 return ans;
 
}
int main()
{
 ios_base::sync_with_stdio(false);
 cout.tie(0);
 cin.tie(0);
 string num;
 bool swp = false;
 cin >> num;
 int length = num.length(), lastIdx = -1;
 for(int i = 0; i < length ; i++)
 {
  if((num[i] -'0') % 2 == 0)
  {
   if(num[i] - '0' < num[length-1]-'0')
   {
    swp = true;
    swap(num[i], num[length-1]);
    break;
   }
   lastIdx = i;
 
  }
 }
 if(swp) cout << num << endl;
 else
 {
  if(lastIdx != -1)
  {
   swap(num[lastIdx], num[length-1]);
   cout << num << endl;
  }
 
  else cout << -1 << endl;
 
 }
 
 
 
 
 
 
 return 0;
}