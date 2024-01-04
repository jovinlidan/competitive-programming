#include <bits/stdc++.h>
using namespace std;
 
 
int arr[1005] = {};
void generate()
{
 int loop = 1;
 int num = 1;
 
 
 
 while(loop <= 1000)
 {
 stringstream s;
  s << num;
  string ss;
  s >> ss;
  if(num % 3 == 0 || ss[ss.length()-1] == '3')
  {
   num++;
   continue;
  }
  arr[loop] = num;
  num++;
  loop++;
 
 }
}
 
int main()
{
 int t;
 int n;
 
 generate();
 cin >> t;
 
 while(t--)
 {
  cin >> n;
  cout << arr[n] << '\n';
 
 }
 
 return 0;
}