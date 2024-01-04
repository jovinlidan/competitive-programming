#include <bits/stdc++.h>
#define lli long long int
#define ii pair<int, int>
using namespace std;
 
 
 
int main()
{
 lli n, a, b, mxA = INT_MIN, i;
 cin >> n;
 vector<ii> arr;
 for(i = 0; i < n; i++)
 {
  cin >> a >> b;
  arr.push_back({a, b});
 
 }
 sort(arr.begin(), arr.end());
 //cout << "---" << endl;
 for(auto i : arr)
 {
  if(i.second >= mxA)
  {
   mxA = i.second;
 
  }else mxA = i.first;
 
  //cout << i.first << " " << i.second << endl;
 }
 cout << mxA;
 
 
 
 return 0;
}