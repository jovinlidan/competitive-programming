#include <bits/stdc++.h>
 
using namespace std;
int main(){
    int n, i;
    string kata, kataBaru;
 
    cin >> n;
    cin >> kata;
    if(n % 2 == 0){
        for(i = n-2; i >= 0; i-= 2){
            kataBaru += kata[i];;
        }
        for(i = 1; i < n; i+= 2){
            kataBaru += kata[i];
        }
    }
    else
    {
        for(i = n-2; i >= 0; i-= 2){
            kataBaru += kata[i];;
        }
        for(i = 0; i < n; i+= 2){
            kataBaru += kata[i];
        }
 
 
 
    }
 
 
 
    cout << kataBaru;
 
 
 
 
return 0;
}