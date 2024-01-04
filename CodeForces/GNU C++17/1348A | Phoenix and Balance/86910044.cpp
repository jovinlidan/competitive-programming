#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
   int tc;
   cin >> tc;
   vector<int> arr;
   while(tc--)
   {
  arr.clear();
  int n, sum = 2;
  cin >> n;
  int a = 0, b = 0;
  for(int i = 0; i < n; i++)
  {
   arr.push_back(sum);
   //cout << sum << '\n';
   a+= sum;
   sum*=2;
  }
//  for(int i = 0; i < arr.size(); i++)
//  {
//   cout << arr[i] << "----\n";
//  }
 
  int stengh = n/ 2-1;
  b += arr[n-1];
  //cout << "b skrang " << arr[n-1]<< '\n';
 
  for(int i = 0; i < stengh; i++)
  {
   b += arr[i];
  //cout << "b skrang " << b << '\n';
  }
  //cout << "a = " << a << ",b = " << b << '\n';
  cout << abs(b-abs(a -b )) << '\n';
 
 
 
   }
 
}