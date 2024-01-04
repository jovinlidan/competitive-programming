#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n;
  string s;
  cin >> n >> s;
  int left = 0, right = n-1;
  bool isYes = true;
  while(left < right)
  {
   if(abs(s[left] - s[right]) > 2 || abs(s[left] - s[right]) == 1)
   {
    isYes = false;
    break;
   }
   left++;
   right--;
  }
 
  puts(isYes ? "YES" : "NO");
 
 }
 
 
 
 
 
 
 
 
 
 
 return 0;
}