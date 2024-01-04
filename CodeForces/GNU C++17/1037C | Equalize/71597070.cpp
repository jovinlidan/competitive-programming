#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, cost = 0;
 string s, t;
 cin >> n >> s >> t;
 for(int i = 0; i < n-1; i++)
 {
  if(s[i] == t[i+1] && s[i+1] == t[i] && s[i] != s[i+1])
  {
   //cout << i << " " << i+1 << endl;
   swap(s[i], s[i+1]);
   cost+=1;
   i++;
  }
 
 }
 //cout << cost << endl;
 
 for(int i = 0; i < n; i++)
 {
  if(s[i] != t[i])
  {
   cost++;
  }
 }
 cout << cost << endl;
 
 
 
 
 
 
 
 
 
 
 return 0;
}