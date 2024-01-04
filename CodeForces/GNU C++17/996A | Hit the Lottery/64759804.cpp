#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 int n, counts =0;
 cin >> n;
 while (n > 0) {
  if (n >= 1) {
   if (n >= 5) {
    if (n >= 10) {
     if (n >= 20) {
      if (n >= 100) {
       n -= 100;
       counts++;
       continue;
      }
      n -= 20;
      counts++;
      continue;
     }
     n -= 10;
     counts++;
     continue;
    }
    n -= 5;
    counts++;
    continue;
   }
   n -= 1;
   counts++;
   continue;
  }
  
 }
 
 cout << counts << endl;
 
 
 
 
 
 
 
 
 
 return 0;
}