#include <bits/stdc++.h>
using namespace std;
int main() {
 int nFriends, eachBook, total=0;
 cin >> nFriends >> eachBook;
 
 int red = 2 * nFriends, green = 5 * nFriends, blue = 8 * nFriends;
 
 if (red % eachBook != 0) {
  total += (red / eachBook) + 1;
 }
 else {
  total += red / eachBook;
 }
 
 if (green % eachBook != 0) {
  total += (green / eachBook) + 1;
 }
 else {
  total += green / eachBook;
 }
 
 if (blue % eachBook != 0) {
  total += (blue / eachBook) + 1;
 }
 else {
  total += blue / eachBook;
 }
 
 cout << total << endl;
 
 
 
 
 return 0;
}