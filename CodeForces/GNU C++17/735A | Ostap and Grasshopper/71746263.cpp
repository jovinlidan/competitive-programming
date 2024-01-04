#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, k;
 int gPos = -1, tPos = -1;
 cin >> n>> k;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++)
 {
  if(s[i] == 'G')gPos = i+1;
  if(s[i] == 'T')tPos = i+1;
 }
 bool valid = false;
 if(gPos <= tPos)
 {
   while(gPos <= tPos)
   {
    if(s[gPos-1] == '#')break;
    if(gPos == tPos) valid = true;
    gPos+=k;
   }
 }
 else
 {
  while(gPos >= tPos)
  {
   if(s[gPos-1] == '#')break;
 
   if(gPos == tPos) valid = true;
   gPos -= k;
  }
 }
 if(valid) cout << "YES\n";
 else cout << "NO\n";
 
 
 
 
 
 return 0;
}