#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 int n, m, arr[105]={};
 cin >> n>> m;
 
 for(int i = 0 ; i < n ;i++){
  cin >> arr[i];
 }
 sort(arr, arr+n);
 int ans=0;
 for(int i = 0 ; i < m; i++){
  if(arr[i] >0)break;
  ans+=arr[i];
 }
 cout<< abs(ans);
 
 
 
    return 0;
}