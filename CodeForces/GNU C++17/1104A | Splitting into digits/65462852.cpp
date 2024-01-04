#include <bits/stdc++.h>
using namespace std;
int main() {
 
 int n, i, idx=1;
 cin >> n;
 for (i = 9; i >= 1; i--)
 {
  if (n == i)
   continue;
  if (n % i == 0) {
   idx = i;
   break;
  }/*
  else if (n % i == 1) {
   idx = i;
   break;*/
  //}
 }
 cout << n / idx << endl;
 for (i = 0; i < n / idx; i++)
 {
  cout << idx << " ";
 }
 cout << endl;
 
 return 0;
}