#include <bits/stdc++.h>
using namespace std;
 
long double kecil(long double x, long double y )
{
 if(x < y) return x;
 else return y;
 
}
long double pythagoras(long double x, long double y)
{
 return sqrt((x*x)+(y*y));
}
 
int main()
{
    int a, b;
    long double ans = 1e9;
    cin >> a >> b;
    int n;
    cin >> n;
    int x, y, v;
    for(int i = 0; i < n; i++)
 {
  cin >> x >> y >> v;
  int xT, yT;
  xT = abs(x-a);
  yT = abs(y-b);
  long double temp;
  temp = pythagoras(xT, yT);
  ans = kecil(ans, temp*1.0/v );
 
 }
 cout << fixed << setprecision(12) << ans << endl;
 
 
 
 
 
 
 
 
 return 0;
}