#include <bits/stdc++.h>
using namespace std;
 
int a=0, b=0, c=0, DP[4005]={};
 
int solve(int n){
    if(n == 0) return 0;
    if(n < 0) return INT_MAX;
    if(DP[n] != 0) return DP[n];
    return DP[n] = max(1+solve(n-a), max(1+solve(n-b), 1+solve(n-c)));
}
 
int main()
{
 long long int n, mx= -1e8;
 cin >> n >> a  >> b >> c;
 
 cout << solve(n) ;
 
 
 
 
 
 
    return 0;
}