#include <bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 cin >> s;
 int mx = -1e9;
 
 for(int i =0; i < s.length(); i++){
  mx = max(mx, int(s[i]));
 }
 for(int i =0; i < s.length(); i++){
  if(s[i] == mx) cout << s[i];
 }
 cout << endl;
 
 
 
 
 
 
    return 0;
}