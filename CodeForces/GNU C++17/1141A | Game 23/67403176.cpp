#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
 int n ,m, cnt = 0;
 cin >> n >> m;
 
 if(m % n == 0){
  int ans = m / n;
  while(ans > 1){
   if(ans % 3==0) ans /=3;
   else if(ans % 2 == 0) ans /=2;
   else{
    cout << -1;
    return 0;
   }
 
   cnt++;
  }
  cout << cnt;
 
 }else{
 cout << -1;}
 
 
    return 0;
}