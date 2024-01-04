#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int n, orange[100], i;
 long double hasil = 0;
 cin >> n;
 for (i = 0; i < n; i++)
 {
  cin >> orange[i];
  hasil += orange[i];
 }
 
 hasil /= n;
 
 cout << fixed << setprecision(12) << hasil << endl;
 
 
 
 
 
 
 
 
 return 0;
}