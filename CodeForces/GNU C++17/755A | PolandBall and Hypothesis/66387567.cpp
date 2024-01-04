#include <bits/stdc++.h>
using namespace std;
 
 
bool isPrime(int x){
    if(x == 1) return false;
    else{
        for(int i =2; i <= trunc(sqrt(x)); i++ ){
            if(x % i == 0) return false;
        }
    }
    return true;
 
 
}
 
int main(){
 
    int n, counts=1, ans=0;
    cin >> n;
 
 
    while(true){
        ans = (n * counts) + 1  ;
        if(!isPrime(ans)){
            cout << counts << endl;
            break;
        }
 
        counts++;
 
    }
 
 
}