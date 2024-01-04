#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n, k1, k2, left, right, mxLeft=INT_MIN, mxRight = INT_MIN;
  cin >> n >> k1 >> k2;
  for(int i = 0;i < k1 ;i++)
  {
   cin >> left;
   mxLeft = max(mxLeft, left);
  }
 
  for(int i = 0;i < k2 ;i++)
  {
   cin >> right;
   mxRight = max(mxRight, right);
  }
  if(mxRight > mxLeft) cout << "NO\n";
  else cout << "YES\n";
 
 
 }
 
 
 
 
 
 
 return 0;
}