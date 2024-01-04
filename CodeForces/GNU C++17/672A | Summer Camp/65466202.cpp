#include <bits/stdc++.h>
using namespace std;
int main() {
 int n, i, length;
 string word;
 cin >> n;
 
 for (i = 1; i <= n; i++)
 {
  word += to_string(i);
 }
 length = word.length();
 for (i = 0; i < length; i++)
 {
  if (i == n-1)
   cout << word[i]<< endl;
 }
 //cout << word << endl;
 
 
 return 0;
}