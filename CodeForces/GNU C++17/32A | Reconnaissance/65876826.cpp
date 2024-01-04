#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, h, data[1005]={}, counts=0;
    cin >> n >> h;
 
    for (int i= 0; i < n; i++){
        cin >> data[i];
 
    }
    for (int i= 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j != i){
                if(abs(data[i] - data[j]) <= h){
                    counts++;
                }
            }
        }
    }
 
    cout << counts << endl;
 
 
 
 
 
 
 
}