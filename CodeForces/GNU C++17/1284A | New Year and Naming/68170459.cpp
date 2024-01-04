#include <bits/stdc++.h>
#define lli long long int
 
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 lli n, m, i, tc, x;
 string nArr[25], mArr[25];
 cin >> n >> m;
 
 for(i = 1; i <= n ; i++){
  cin >> nArr[i];
 }
 for(i = 1; i <= m ; i++){
  cin >> mArr[i];
 }
 cin >> tc;
 while(tc--){
  cin >> x;
  if(x % n == 0) cout << nArr[n];
  else{
   cout << nArr[x%n];
  }
  if(x % m == 0) cout << mArr[m];
  else{
   cout << mArr[x%m];
  }
  cout << endl;
 
 
 
 
 
 
 }
 
 
 
 
 
    return 0;
}