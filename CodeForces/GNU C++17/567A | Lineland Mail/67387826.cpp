#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, arr[200010]={}, mn = 1e9, mx = -1e9;
 
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
 
    for(int i = 1; i <= n; i++){
        mn = 1e10;
        mx = -1e10;
        if(abs(arr[i] - arr[i-1]) < mn){
            if(i != 1){
                mn = abs(arr[i] - arr[i-1]);
            }
        }
        if(abs(arr[i] - arr[i+1]) < mn){
            if(i != n){
                mn = abs(arr[i] - arr[i+1]);
 
            }
        }
 
        if(abs(arr[i] - arr[1]) > mx){
            mx = abs(arr[i] - arr[1]);
        }
        if(abs(arr[i] - arr[n]) > mx){
            mx = abs(arr[i] - arr[n]);
        }
        cout << mn << " " << mx << endl;
    }
 
 
 
 
 
 
 
    return 0;
}