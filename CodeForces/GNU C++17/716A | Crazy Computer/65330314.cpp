#include <bits/stdc++.h>
using namespace std;
int main() {
 
 int n, i, c, counts = 0, problems, lastproblems=0;
 cin >> n >> c;
 for (i = 0; i < n; i++)
 {
  cin >> problems;
  if (problems - lastproblems > c) {
   counts = 1;
  }
  else {
   counts++;
  }
  lastproblems = problems;
 }
 cout << counts << endl;
 
 return 0;
}