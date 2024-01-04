#include <bits/stdc++.h>
using namespace std;
 
 
bool isPalindrom(string s)
{
 string ss = s;
 reverse(ss.begin(), ss.end());
 if(s == ss)return true;
 return false;
}
 
string solve(string s, int l, int n)
{
 int mx = -1e9;
 string ans = "", a, b;
 int starts = l, ends = n-l;
 
 for(int i = 0; i < s.length(); i++)
 {
        a = s.substr(0, i);
        b = s.substr(i, s.length()-i);
        if(isPalindrom(a))
  {
   if(i > mx)
   {
    mx = a.length();
    ans = a;
   }
  }
  if(isPalindrom(b))
  {
    //cout << "KENAK-" << b.length() << "-" << mx << '\n';
   if(s.length()-i > mx)
   {
    //cout << "SEE\n";
    mx = b.length();
    ans = b;
   }
  }
//        cout << "a = " << a << "| ans = " << ans << '\n';
//        cout << "b = " << b << "| ans = " << ans << '\n';
 }
 return ans;
 
 
 
}
 
int main()
{
 int tc;
 cin >> tc;
 while(tc--)
 {
  string s, ans="";
  cin >> s;
  int lengthF = 0, n = s.length();
        for(int i = 0, j = n-1; i < j; i++, j--)
  {
   if(s[i] == s[j])lengthF++;
   else break;
  }
  ans += s.substr(0, lengthF);
 
  string sisa = s.substr(lengthF, n-2*lengthF);
  if(sisa.length() > 0)
  {
            ans += solve(sisa, lengthF, n);
 
  }
 
 
  ans += s.substr(n-lengthF, lengthF);
 
  cout << ans << '\n';
 
 
 
 }
 
 
}