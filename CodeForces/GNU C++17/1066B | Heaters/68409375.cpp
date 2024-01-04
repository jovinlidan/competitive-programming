#include <bits/stdc++.h>
using namespace std;
 
void solve(int n,int r,int arr[],int dp[], int i)
{
    int left = max(1, i-r+1);
    int right = min(n, i+r-1);
 
    for(int j = left; j <= right; j++)
    {
        dp[j]++;
    }
 
}
 
int main()
{
    int n, r;
    cin >> n >> r;
    int arr[n+5]={};
    int dp[n+5] = {}, total = 0;
 
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
 
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] == 1)
        {
            total++;
            solve(n, r, arr, dp, i);
        }
    }
 
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] == 1)
        {
            bool semua = true;
            int left = max(1, i-r+1);
            int right = min(n, i+r-1);
 
            for(int j = left; j <= right; j++)
            {
                if(dp[j] <= 1)semua = false;
            }
            if(semua)
            {
                for(int j = left; j <= right; j++)
                {
                    dp[j]--;
                }
                total--;
            }
        }
    }
 
    for(int i = 1; i <= n; i++)
    {
        if(dp[i] == 0)
        {
            cout << -1 << endl;
            return 0;
        }
 
    }
    cout << total << endl;
 
 
 
 
 
 
    return 0;
}