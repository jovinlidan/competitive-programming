#include <bits/stdc++.h>
using namespace std;
int main() {
 int n, c, problems[55], time[55], i, p1Score=0, p2Score=0, totalTime=0;
 cin >> n >> c;
 
 for (i = 0; i < n; i++)
 {
  cin >> problems[i];
 }
 for (i = 0; i < n; i++)
 {
  cin >> time[i];
  totalTime += time[i];
  if ((problems[i] - (c * totalTime)) < 0) {
   p1Score += 0;
  }
  else {
   p1Score += (problems[i] - (c * totalTime));
  }
 
 }
 totalTime = 0;
 for (i = n-1; i >= 0; i--)
 {
  totalTime += time[i];
  if ((problems[i] - (c * totalTime)) < 0) {
   p2Score += 0;
  }
  else {
   p2Score += (problems[i] - (c * totalTime));
  }
 
 }
 
 if (p1Score > p2Score) {
  cout << "Limak\n";
 }
 else if (p2Score > p1Score) {
  cout << "Radewoosh\n";
 }
 else {
  cout << "Tie\n";
 }
 
 
 return 0;
}