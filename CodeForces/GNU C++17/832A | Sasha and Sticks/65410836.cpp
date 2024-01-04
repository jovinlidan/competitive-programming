#include <bits/stdc++.h>
using namespace std;
int main() {
 
 long long int nSticks, perMove, hasil=0;
 cin >> nSticks >> perMove;
 hasil = nSticks / perMove;
 
 if (hasil % 2 != 0) {
  cout << "YES\n";
 }
 else {
  cout << "NO\n";
 }
 
 
 
}