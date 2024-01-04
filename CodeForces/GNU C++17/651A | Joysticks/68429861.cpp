#include <bits/stdc++.h>
 
using namespace std;
int dp[1005][1005] = {};
int solve(int a, int b)
{
 
 if(a == 0 || b == 0) return 0;
 else if(a < 0 || b < 0) return INT_MIN;
 if(dp[a][b]  != 0)return dp[a][b];
 
 return dp[a][b] = max(1+solve(a-2, b+1), 1+solve(a+1, b-2));
 
}
 
 
int main()
{
 int a, b;
 cin >> a >> b;
 cout << max(0, solve(a, b));
 
 return 0;
}