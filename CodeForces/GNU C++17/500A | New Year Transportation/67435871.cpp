#include <bits/stdc++.h>
using namespace std;
int arr[1000005]={};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int a, b, temp, ans=1;
    cin >> a >> b;
 
    for(int i = 1; i < a; i++){
        cin >> arr[i];
    }
    while(ans < b){
        ans+=arr[ans];
    }
    if(ans == b) cout <<"YES";
    else cout << "NO";
 
 
 
 
}