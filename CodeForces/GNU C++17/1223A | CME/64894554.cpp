#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 int n, i, num;
 cin >> n;
 for (i = 0; i < n; i++)
 {
  cin >> num;
  if(num >= 0 && num <= 2){
   cout << 4 - num << endl;
  }
  else if (num % 2 == 0) {
   cout << 0 << endl;
  }
  else if (num % 2 == 1) {
   cout << 1 << endl;
  }
 }
 
 cout << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}