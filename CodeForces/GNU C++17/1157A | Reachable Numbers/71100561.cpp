#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli n;
 set<lli> ans;
 cin >> n;
 //while(n % 10 == 0)n /= 10;
 
 lli sz = ans.size();
 ans.insert(n);
 
 while(sz != ans.size())
 {
  n++;
  while(n % 10 == 0)n /= 10;
  sz = ans.size();
  ans.insert(n);
 }
 cout << ans.size() << endl;
 
 
 
 
 
 
 
 
 return 0;
}