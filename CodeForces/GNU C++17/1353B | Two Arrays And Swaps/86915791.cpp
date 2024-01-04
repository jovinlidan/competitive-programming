#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
   int tc;
   cin >> tc;
   vector<int> a, b;
   while(tc--)
   {
  a.clear();
  b.clear();
  int n, k, temp;
  cin >> n >> k;
  for(int i = 0; i < n; i++)
  {
   cin >> temp;
   a.push_back(temp);
  }
  for(int i = 0; i < n; i++)
  {
   cin >> temp;
   b.push_back(temp);
  }
 
  sort(a.begin(), a.end(), greater<int>());
  sort(b.begin(), b.end(), greater<int>());
  int sum = 0, idx = 0, idx2 = 0;
  for(int i = 0; i < n ; i++)
  {
   if(b[idx2] >= a[idx])
   {
    if(k > 0)
    {
     sum += b[idx2];
     k--;
     idx2++;
    }
    else
    {
     sum += a[idx];
     idx++;
    }
   }
   else
   {
    sum += a[idx];
    idx++;
   }
 
  }
  cout << sum << '\n';
 
 
 
   }
 
}