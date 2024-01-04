#include <bits/stdc++.h>
using namespace std;
int main() {
 int s, v1, v2, t1, t2, hasil1, hasil2;
 cin >> s >> v1 >> v2 >> t1 >> t2;
 
 hasil1 = (s * v1) + (t1 * 2);
 hasil2 = (s * v2) + (t2 * 2);
 
 if (hasil1 > hasil2) {
  cout << "Second";
 }
 else if (hasil2 > hasil1) {
  cout << "First";
 }
 else {
  cout << "Friendship";
 }
 cout << endl;
 
 
 return 0;
}