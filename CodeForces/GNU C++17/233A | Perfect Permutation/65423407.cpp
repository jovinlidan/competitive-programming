#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
 int n, i, counts = 0, bil[105], j, temp=0;
 
 cin >> n;
 
 for (i = 1; i <= n; i++)
 {
  bil[i] = i;
 }
 for (i = 1; i <= n; i+=2)
 {
  for (j = i+1; j <= n; j++)
  {
   temp = bil[i];
   bil[i] = bil[j];
   bil[j] = temp;
   break;
  }
 }
 if (n % 2 != 1) {
  for (i = 1; i <= n; i++)
  {
   cout << bil[i];
   if (i != n) cout << " ";
  }
 }
 else {
  cout << -1;
 }
 cout << endl;
 return 0;
}