#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int n, m, i, li, ri, counts = 0, points[105] = {}, j;
 cin >> n >> m;
 
 for (i = 0; i < n; i++)
 {
  cin >> li >> ri;
  for (j = li; j <= ri; j++)
  {
   points[j]++;
  }
 
 }
 
 for (i = 1; i <= m; i++)
 {
  if (points[i] == 0) {
   counts++;
  
  }
 
 }
 cout << counts << endl;
 if (counts > 0) {
  for (i = 1; i <= m; i++)
  {
   if (points[i] == 0) {
    cout << i;
    if (i != m) {
     cout << " ";
    }
    
 
   }
 
  }
  cout << endl;
 }
 
 
 return 0;
}