#include <bits/stdc++.h>
using namespace std;
bool DP[200005] = {false};
int DPValue[200005] = {};
long long  solve(long long a, long long b){
    if(a == b){
        return 0;
    }
 
    if(DPValue[a] != 0) return DPValue[a];
    if(a > 2*b) return 1+solve(a-1, b);
    if(a > 10000|| a < 0) return 1e5;
    if(DP[a]) return 1e5;
 
    DP[a] = true;
    return DPValue[a] = (min(1+solve(a*2, b), 1+solve(a-1, b)));
 
 
}
 
int main()
{
 
    int a, b, c1=1e9, c2=1e9, ta, tb;
    cin >> a >> b;
    if(a > b){
        cout << a-b << endl;
    }else if(a == b){
    cout << 0 << endl;
    }
    else{
        cout << solve(a, b)<< endl;
 
    }
 
//    ta = a;
//    tb = b;
//    if(a > b){
//        cout << a-b << endl;
//        return 0;
//    }
//    else if (a == b){
//        cout << 0 << endl;
//    }
//    else{
//
//        while(a != b){
//            if(c1 == 1e9) c1 = 0;
//            if(a < b) a *=2;
//            if(a > b){
//                c1+= abs(a-b);
//                a -=(a-b);
//            }
//        }
//
//        while(ta != tb){
//            if(c2 == 1e9) c2 = 0;
//            while(tb > ta && tb % 2 == 0){
//                tb /=2;
//                c2++;
//            }
//            c2 += abs(ta - tb);
//            break;
//        }
//        cout << min(c1, c2) << endl;
//
//    }
 
 
 
    return 0;
}