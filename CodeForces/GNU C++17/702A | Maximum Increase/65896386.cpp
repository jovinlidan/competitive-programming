#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n, temp, i, j, ans=0, mx = -1e9, counts=1, lastT= 0;
 
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> temp;
        if(temp > lastT && i > 0){
            counts++;
 
        }
        else{
            counts=1;
        }
        mx = max(mx, counts);
        lastT= temp;
    }
    cout << mx << endl;
 
 
 
return 0;
}