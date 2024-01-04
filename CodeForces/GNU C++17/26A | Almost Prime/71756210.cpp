#include <bits/stdc++.h>
using namespace std;
 
bool isPrime (int n)
{
 if(n==1) return false;
 int i = 2;
 while(i * i <= n)
 {
  if(n % i == 0)return false;
  i+= 1;
 }
 return true;
}
 
int main()
{
 bool primeKe[3005] = {false};
 for(int i = 1; i <= 3000; i++)
 {
        primeKe[i] = isPrime(i);
 }
 int n;
 cin >> n;
 
 int ans = 0, cnt = 0;
 for(int i = 1; i <= n ; i++)
 {
  cnt = 0;
        for(int j = 1; j <= i; j++)
  {
   if(primeKe[j] && i % j == 0)cnt++;
   if(cnt > 2) break;
  }
  if(cnt == 2)ans++;
  //cout << cnt << "-" << i << endl;
 
 }
 cout << ans << endl;
 
 
 return 0;
}