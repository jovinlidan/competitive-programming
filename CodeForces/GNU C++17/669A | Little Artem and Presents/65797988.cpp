#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
 
 
 
    if(n % 3 == 2){
         cout << n - (n/3) - 1<<endl;
    }else{
         cout << n - (n/3)<<endl;
    }
 
 
 
 
 
return 0;
}