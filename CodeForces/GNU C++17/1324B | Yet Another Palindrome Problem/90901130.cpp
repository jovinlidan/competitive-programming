#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int arr[5005] = {};
        memset(arr, -1, sizeof arr);
        bool valid = false;
        for(int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if(arr[temp] != -1)
            {
                if(i - arr[temp] >= 2) valid = true;
            }
            else
            {
                arr[temp] = i;
 
            }
        }
        if(valid)cout << "YES\n";
        else cout << "NO\n";
 
 
 
    }
 
 
    return 0;
}