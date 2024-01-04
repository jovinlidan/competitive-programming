#include <bits/stdc++.h>
using namespace std;
int main()
{
 int tc;
 cin >> tc;
 while(tc--)
 {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int test1=0, test2=0;
  int firstOne=-1, lastOne=-1, length = s.length();
  for(int i = 0; i < length; i++)
  {
   if(s[i] == '1')
   {
    firstOne = i;
    break;
   }
  }
  if(firstOne == -1)
  {
   cout << length << endl;
   continue;
  }
  for(int i = length-1; i >= 0; i--)
  {
   if(s[i] == '1')
   {
    lastOne = i;
    break;
   }
  }
 
  for(int i = 0; i < length; i++)
  {
   test1++;
   if(i == lastOne)
   {
    test1 += max(test1, length - test1);
    break;
   }
  }
  for(int i = length - 1; i >= 0; i--)
  {
   test2++;
   if(i == firstOne)
   {
    test2 += max(test2, length - test2);
    break;
   }
  }
  cout << max(test1, test2) << endl;
 
 
 }
 
 
 
 
 
 
 
 
 
 
 return 0;
}