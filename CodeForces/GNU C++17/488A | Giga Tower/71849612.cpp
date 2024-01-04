#include <bits/stdc++.h>
using namespace std;
 
 
bool isLucky(int s)
{
 stringstream ss;
 ss << s;
 string abc = ss.str();
 
 for(int i = 0; i < abc.length(); i++)
 {
  if(abc[i] =='8')return true;
 }
 return false;
 
}
int main()
{
 long long int n, ans = 1;
 cin >> n;
 n++;
 
 
 while(!isLucky(n))
 {
  n++;
  ans++;
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}