#include <bits/stdc++.h>
 
using namespace std;
 
int palindrome(string s)
{
 int left = 0;
 int right = s.length()-1;
 int diff = 0;
 while(left < right)
 {
  if(s[left] != s[right]) diff++;
 
 
  left++;
  right--;
 }
 //cout << diff << endl;
 return diff;
 
 
}
int main()
{
 string s;
 cin >> s;
 if(palindrome(s) == 1 || (palindrome(s) == 0 && s.length() % 2 == 1)) cout << "YES\n";
 else cout << "NO\n";
 
 
 
 return 0;
}