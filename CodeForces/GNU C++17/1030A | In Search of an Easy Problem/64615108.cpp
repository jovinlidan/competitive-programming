#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
 int n, i, answer;
 bool isHard = false;
 cin >> n;
 
 for (i = 0; i < n; i++)
 {
  cin >> answer;
  if (answer == 1) {
   isHard = true;
  }
 }
 
 if (isHard)
  cout << "HARD\n";
 else
  cout << "EASY\n";
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}