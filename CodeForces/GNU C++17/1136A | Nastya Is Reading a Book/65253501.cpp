#include <bits/stdc++.h>
using namespace std;
int main() {
 int chapters, li[105], i, ri[105], k, total=0;
 cin >> chapters;
 for (i = 1; i <= chapters; i++)
 {
  cin >> li[i] >> ri[i];
 }
 cin >> k;
 
 for (i = 1; i <= chapters; i++)
 {
  if ((k >= li[i]) && (k <= ri[i])) {
   total = chapters - (i - 1);
   break;
  }
 
 }
 
 cout << total << endl;
 
 
 
 
 return 0;
}