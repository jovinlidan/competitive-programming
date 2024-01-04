#include <bits/stdc++.h>
using namespace std;
int DP[2005] ={};
bool DPcheck[2005] = {false};
 
int solve(int n , int m, int a, int b){
    if(DPcheck[n]) return DP[n];
    if(n <= 0) return 0;
 
    DPcheck[n] = true;
    return DP[n]= min(b+ solve(n-m,m, a, b), a+ solve(n-1,m, a, b));
 
 
 
 
 
}
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << solve(n, m , a, b);
 
 
 
 
    return 0;
}