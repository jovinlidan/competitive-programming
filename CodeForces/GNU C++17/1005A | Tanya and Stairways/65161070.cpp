#include <bits/stdc++.h>
using namespace std;
 
int main() {
 int N, steps[1005], i, counts=0;
 vector <int> orders;
 cin >> N;
 
 for (i = 0; i < N; i++)
 {
  cin >> steps[i];
 }
 
 for (i = 0; i < N-1; i++)
 {
  for (int j = i+1; j < i+2; j++)
  {
   if (steps[i] != steps[i + 1] - 1) {
    orders.push_back(steps[i]);
    counts++;
   }
  }
  
 
  
 }
 
 orders.push_back(steps[N - 1]);
 counts++;
 
 
 cout << counts << endl;
 for (i = 0; i < orders.size(); i++)
 {
  cout << orders.at(i);
  if (i != orders.size() - 1) {
   cout << " ";
  }
 }
 cout << endl;
 
 
 
}