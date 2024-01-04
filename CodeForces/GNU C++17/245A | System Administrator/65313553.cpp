#include <bits/stdc++.h>
using namespace std;
int main() {
 map <int, int> packets = {};
 int i, n, server, x, y, countA=0, countB=0;
 
 cin >> n;
 for (i = 0; i < n; i++)
 {
  cin >> server >> x >> y;
  if (server == 1) countA++;
  else countB++;
  packets[server] += x;
 }
 
 if (packets[1] >= countA * 5) {
  cout << "LIVE\n";
 }
 else {
  cout << "DEAD\n";
 }
 
 if (packets[2] >= countB * 5) {
  cout << "LIVE\n";
 }
 else {
  cout << "DEAD\n";
 }
 
 
}