#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, day[8] = {};
 cin >> n;
 for(int i =1; i <= 7; i++) cin >> day[i];
 
 int idx = 1, total = 0;
    while( total < n)
 {
  total += day[idx];
  if(total >= n)break;
  idx = (idx % 7)+1;
 }
 cout << idx << endl;
 
 
 
 
 
 
 return 0;
}