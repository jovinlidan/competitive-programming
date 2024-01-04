#include <bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);
 cout.tie(0);
 int n, n1, n2;
 cin >> n;
 queue<int> k1,k2;
 
    int temp;
    cin >> n1;
    for(int i = 0; i < n1; i++)
 {
  cin >> temp;
  k1.push(temp);
 }
 
 cin >> n2;
    for(int i = 0; i < n2; i++)
 {
  cin >> temp;
  k2.push(temp);
 }
 int v1, v2, fight = 0;
 while(!k1.empty() && !k2.empty())
 {
  if(fight > n*n*n)
  {
   cout << -1 << endl;
   return 0;
  }
  v1 = k1.front();
  v2 = k2.front();
  //cout << v1 << "-" << v2 << endl;
 
  k1.pop();
  k2.pop();
  if(v1 > v2)
  {
   k1.push(v2);
   k1.push(v1);
  }
  else
  {
   k2.push(v1);
   k2.push(v2);
  }
  fight++;
 
 }
 cout << fight << " ";
 if(k1.empty())cout << 2;
 else cout << 1;
 cout << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}