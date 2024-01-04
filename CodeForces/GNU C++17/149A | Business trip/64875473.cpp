#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int kCM, year[15], i, hasil = 0, counts=0;
 bool able = false;
 cin >> kCM;
 for (i = 0; i < 12; i++)
 {
  cin >> year[i];
 }
 sort(year, year + 12, greater<int>());
 
 for (i = 0; i < 12; i++)
 {
  hasil += year[i];
  counts++;
  if (hasil >= kCM) {
   able = true;
   break;
  }
 }
 if (kCM != 0) {
  if (able) {
   cout << counts << endl;
  }
  else
   cout << -1 << endl;
 }
 else
  cout << 0 << endl;
 
 
 
 
 
 
 
 
 
 return 0;
}