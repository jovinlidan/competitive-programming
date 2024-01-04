#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, nA, nB, data[105]={}, temp, i;
 
    cin >> n >> nA >> nB;
 
    for(i = 1; i <= nA; i++){
        cin >> temp;
        data[temp] = 1;
    }
    for(i = 1; i <= nB; i++){
        cin >> temp;
        data[temp] = 2;
    }
 
    for(i = 1; i <= n; i++){
        cout << data[i];
        if(i != n){
            cout << " ";
        }
    }
    cout << endl;
}
 