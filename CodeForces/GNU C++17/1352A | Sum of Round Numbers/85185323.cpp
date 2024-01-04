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
 
int getLength(int n)
{
 int ans=0;
 while(n != 0)
 {
  n/=10;
  ans++;
 }
 return ans;
 
}
 
long long  pangkat(int a, int b)
{
 long long  ans = 1;
 for(int i = 0;i < b; i++)
 {
  ans *= a;
 }
 return ans;
 
}
vector<int> answer;
void solvee(string n)
{
 for(int i =0 ;i < n.length();i++)
 {
  if(n[i] != '0')
  {
   int temp = n[i]-48;
   int cal = pangkat(10, (n.length() - (i+1)));
   if(cal < 1)cal = 1;
   //cout << temp << " INI " << cal << " " << temp * cal << '\n';
   answer.push_back(temp * cal);
  }
 }
 
}
int main()
{
 int tc;
 cin >> tc;
 while(tc--)
 {
  answer.clear();
  string n;
  cin >> n;
  solvee(n);
  cout << answer.size() << '\n';
  for(int i = 0; i < answer.size(); i++)
  {
   cout << answer[i];
   if(i!= answer.size()-1) cout << " ";
  }
  cout << '\n';
 }
 
 
 
 
}