#include <bits/stdc++.h>
using namespace std;
 
string s1, s2;
int finalPos = 0, chance = 0, allChance = 0;
 
 
void solve(int i, string s2, int cnt, char temp)
{
 if(i == s2.length())
 {
  if(cnt == finalPos) chance++;
  allChance++;
  return;
 }
 if(s2[i] == '+' || temp == '+')
 {
  cnt++;
  return solve(i+1, s2, cnt, '.');
 }
 else if(s2[i] == '-'|| temp == '-')
 {
  cnt--;
  return solve(i+1, s2, cnt, '.');
 }
 else if(s2[i] == '?')
 {
  solve(i, s2, cnt, '+');
  solve(i, s2, cnt, '-');
 
 }
 
 
}
 
 
int main()
{
 cin>> s1 >> s2;
 
 for(int i = 0; i < s1.length(); i++)
 {
  if(s1[i] == '+') finalPos++;
  else finalPos--;
 }
 
 solve(0, s2, 0, '.');
 
 cout << fixed << setprecision(12) << chance*1.0 / allChance << endl;
 
 
 
 
 
 
 
 
 
 return 0;
}