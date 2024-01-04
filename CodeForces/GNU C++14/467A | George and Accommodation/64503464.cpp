#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
 int rooms, i, j, counts = 0, people, capacity;
 
 cin >> rooms;
 
 for (i = 0; i < rooms; i++)
 {
  cin >> people >> capacity;
  if (capacity - people >= 2)
   counts++;
 }
 
 cout << counts << endl;
 
 
 
 return 0;
}