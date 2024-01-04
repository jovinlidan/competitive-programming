#include <bits/stdc++.h>
 
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, x0, y0, xT,yT, ans = 0;
 unordered_map<double, int> diag;
 unordered_map<double, int> lurus;
 
 vector<pair<int, int>> titik;
 cin >> n >> x0 >> y0;
 
 for(int i =0; i < n ; i++)
 {
  cin >> xT >> yT;
  titik.push_back({xT, yT});
  if(xT- x0 == 0)
  {
   lurus[1]++;
   if(lurus[1] == 1)ans++;
  }
  else if(yT - y0 == 0)
  {
   lurus[-1]++;
   if(lurus[-1] == 1) ans++;
  }
  else
  {
   int newX = xT-x0;
   int newY = yT-y0;
   double temp = newY * 1.0/newX;
   diag[temp]++;
   if(diag[temp] == 1)ans++;
  }
 
 }
 cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
 return 0;
}