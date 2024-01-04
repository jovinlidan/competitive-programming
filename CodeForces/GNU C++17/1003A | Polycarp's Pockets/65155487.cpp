#include <bits/stdc++.h>
using namespace std;
int main() {
 
 map <int, int> data;
 int N,i, coins[105], maxs=-1e9;
 cin >> N;
 for (i = 0; i < N; i++)
 {
  cin >> coins[i];
  data[coins[i]]++;
  maxs = max(maxs, data[coins[i]]);
 }
 cout << maxs << endl;
 
 
 
 
 return 0;
}