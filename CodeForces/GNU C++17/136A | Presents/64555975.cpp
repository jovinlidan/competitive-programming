#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int n, data[100], i, counts=1,j;
 cin >> n;
 
 for (i = 1; i <= n; i++)
 {
  cin >> data[i];
 }
 for (i = 1; i <= n; i++)
 { 
  for (j = 1; j <= n; j++)
  {
   if (data[j] == counts) {
    cout << j << " ";
    counts++;
   }
   
  }
 }
 cout << endl;
 
 
 
 
 
 
 
 
 
 
 return 0;
}