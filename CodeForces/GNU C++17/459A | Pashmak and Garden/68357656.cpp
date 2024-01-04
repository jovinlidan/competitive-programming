#include <bits/stdc++.h>
 
using namespace std;
int main()
{
 
 int x1, x2, x3=-1e4, x4=-1e4, y1, y2, y3=-1e4, y4=-1e4;
 cin >> x1 >> y1 >> x2 >> y2;
 
 if(x1 != x2 && y1 != y2)
 {
  if(abs(x1 - x2) == abs(y1 - y2))
  {
   cout << x1 << " " << y2 <<" " <<  x2 << " " <<  y1 << endl;
  }
  else
  {
   cout << -1 << endl;
  }
 }
 else if (x1 == x2 && y1 != y2)
 {
  int gap = abs(y1 - y2);
  cout << x1+gap << " " << y2 <<" " <<  x2+gap << " " <<  y1 << endl;
 
 }
 else if(x1 != x2 && y1 == y2)
 {
  int gap = abs(x1 - x2);
  cout << x1 << " " << y2+gap <<" " <<  x2 << " " <<  y1+gap << endl;
 }
 else if(x1 == x2 && y1 == y2)
 {
  cout << -1 << endl;
 }
 
 
 
    return 0;
}