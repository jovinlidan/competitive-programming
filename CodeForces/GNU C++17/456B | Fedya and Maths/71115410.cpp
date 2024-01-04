#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int solve(string x)
{
 int ans = 0;
 for(int i = 0; i < x.length(); i++)
 {
  ans = (ans*10 + (x[i] - '0')) % 4;
 }
 return ans;
 
}
int main()
{
 
 string s;
 cin >> s;
 
 
 if(solve(s) == 0) cout << 4;
 else cout << 0;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}