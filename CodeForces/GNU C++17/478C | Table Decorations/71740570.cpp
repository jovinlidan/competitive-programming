#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
 lli arr[3] = {}, ans= 0;
 cin >> arr[0] >> arr[1] >> arr[2];
 sort(arr, arr+3, greater<int>());
 
 ans = (arr[0] + arr[1] + arr[2])/3;
 
 if(arr[1] + arr[2] < ans)
 {
  ans = arr[1] + arr[2];
 }
 
    cout<< ans << endl;
 
 
 
 
 
 
 return 0;
}