#include <bits/stdc++.h>
using namespace std;
int main() {
 int n, counts[1005] = {}, i, data2[100];
 vector <int> data;
 
 cin >> n;
 for (i = 0; i < n; i++)
 {
  cin >> data2[i];
 }
 for (i = n-1; i >= 0; i--)
 {
  if (counts[data2[i]] == 0) {
   data.push_back(data2[i]);
  }
  counts[data2[i]]++;
 }
 cout << data.size() << endl;
 
 for (i = data.size() - 1 ; i >= 0; i--)
 {
  cout << data.at(i) << " ";
 }
 
 
 
 return 0;
}