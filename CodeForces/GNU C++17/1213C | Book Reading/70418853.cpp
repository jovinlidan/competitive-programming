#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli tc;
 cin >> tc;
 while(tc--)
 {
  lli angka[11] = {};
  lli n, m, cnt=1, ans = 0, total= 0;
  cin >> n >> m;
  lli lastDigitM = m % 10;
  lli banyak = (n - (n%m))/m;
  for(int i = 1; i <= 11 ; i++)
  {
   angka[cnt] = lastDigitM;
   total += angka[cnt];
   //cout << lastDigitM << "LAST" << endl;
   lastDigitM = (lastDigitM+ m %10) % 10;
   if(lastDigitM == m % 10)
   {
    break;
   }
   cnt++;
 
  }
  lli modulos = banyak % cnt;
  //cout << cnt <<endl;
  for(int i = 1; i <= modulos; i++)
  {
   ans += angka[i];
   //cout << angka[i] << "---" << i << endl;
  }
  banyak -= modulos;
  ans +=( (banyak/cnt) * total);
 
  cout << ans << endl;
 
 
 }
 
 
 
 
 
 
 
 
 return 0;
}