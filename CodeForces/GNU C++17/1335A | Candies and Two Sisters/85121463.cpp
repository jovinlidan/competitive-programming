#include <bits/stdc++.h>
using namespace std;
 
 
bool isPalindrom(string s)
{
 string ss = s;
 reverse(ss.begin(), ss.end());
 if(s == ss)return true;
 return false;
}
int kmpAlg(string s) {
        string ss = s;
        std::reverse(ss.begin(), ss.end());
        string kmp = s + "#" + ss;
 
        vector<int> lps(kmp.size(), 0);
        for (int i = 1; i < lps.size(); ++i)
  {
            int prev_idx = lps[i - 1];
            while (prev_idx > 0 && kmp[i] != kmp[prev_idx])
            {
                prev_idx = lps[prev_idx - 1];
            }
            lps[i] = prev_idx + (kmp[i] == kmp[prev_idx] ? 1 : 0);
        }
        return lps[lps.size() - 1];
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
  int n;
  cin >> n;
  cout << int(ceil(n/2.0)-1) << '\n';
 
 }
 
 
 
 
}