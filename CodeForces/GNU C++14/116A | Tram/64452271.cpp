#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 
 int i, counts=0, max=0, out, in, n;
 cin >> n;
 for (i = 0; i < n; i++)
 {
  cin >> out >> in;
  counts -= out;
  counts += in;
 
  if (counts > max)
   max = counts;
 }
 
 cout << max << endl;
 
 
 
 return 0;
 
}