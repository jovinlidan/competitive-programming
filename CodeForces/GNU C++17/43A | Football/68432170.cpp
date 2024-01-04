#include <bits/stdc++.h>
 
using namespace std;
int main()
{
 unordered_map <string, int> score;
 string name;
 int n, mx=INT_MIN;
 cin >> n;
 while(n--)
 {
  string temp;
  cin >> temp;
  score[temp]++;
  if(score[temp] > mx)
  {
   mx = score[temp];
   name = temp;
  }
 }
 cout << name << endl;
 
 
 
 
 
 return 0;
}