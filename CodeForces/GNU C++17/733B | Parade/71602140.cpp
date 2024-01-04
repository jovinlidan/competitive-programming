#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, l[100005] = {}, r[100005] = {}, tL = 0, tR = 0, mxDiff;
 cin >> n;
 for(int i = 0; i < n; i++)
 {
  cin >> l[i] >> r[i];
  tL += l[i];
  tR += r[i];
 }
 mxDiff = abs(tL-tR);
 int idx = -1;
 int tempL , tempR;
 for(int i = 0; i < n; i++)
 {
  tempL = tL;
  tempR = tR;
  tempL -= l[i];
  tempL += r[i];
  tempR -= r[i];
  tempR += l[i];
  if(abs(tempL - tempR) > mxDiff)
  {
   mxDiff = abs(tempL-tempR);
   idx = i;
  }
 }
 if(idx == -1) cout << 0;
 else cout << idx+1;
 
 
 
 
 
 
 
 
 return 0;
}