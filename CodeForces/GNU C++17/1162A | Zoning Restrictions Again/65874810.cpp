#include<bits/stdc++.h>
using namespace std;
int main(){
 
    long long int n, maxHeight, nRestrict,l1,r1, m, data[55]={}, ans =0;
    cin >> n >> maxHeight >> nRestrict;
    memset(data, -1, sizeof(data));
    for(int i = 1; i <= nRestrict ; i++){
        cin >> l1 >> r1 >> m;
        for(int j = l1; j <= r1; j++){
            if(data[j] != -1){
                data[j] = min(data[j], m);
            }else{
                data[j] = m;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(data[i] == -1){
            ans += maxHeight * maxHeight;
        }else{
            ans += data[i] * data[i];
        }
    }
 
    cout << ans << endl;
 
 
 
 
 
 
 
 
 
 
}
 
 