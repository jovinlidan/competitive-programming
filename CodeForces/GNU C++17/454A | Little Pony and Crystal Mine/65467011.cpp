#include <bits/stdc++.h>
using namespace std;
int main() {
 
 int n, i, j, counts = 0;
 cin >> n;
 
 for (i = 1; i <= n; i+=2)
 {
  for (j = 1; j <= n/2 - counts; j++)
  {
   cout << "*";
  }
  for (j = 1; j <= i; j++)
  {
   cout << "D";
  }
  for (j = 1; j <= n / 2 - counts; j++)
  {
   cout << "*";
  }
  cout << endl;
  counts++; 
 }
 counts-=2;
 for (i = n-2; i >= 1; i -= 2)
 {
  for (j = 1; j <= n / 2 - counts; j++)
  {
   cout << "*";
  }
  for (j = 1; j <= i; j++)
  {
   cout << "D";
  }
  for (j = 1; j <= n / 2 - counts; j++)
  {
   cout << "*";
  }
  cout << endl;
  counts--;
 }
 
 
 return 0;
}