#include <bits/stdc++.h>
using namespace std;
 
int solve(int x){
 if(x == 1) return 4;
 else if(x == 2) return 4;
 else if (x == 3) return 4;
 else if (x == 4) return 4;
 else if (x == 5) return 4;
 else if (x == 6) return 4;
 else if (x == 7) return 4;
 else if (x == 8) return 4;
 else if (x == 9) return 4;
 else if (x == 10) return 15;
 else if (x == 11) return 4;
 else return 0;
 
 
 
}
 
int main()
{
 
 int n;
 cin >> n;
 cout << solve(n-10);
 
 
 
 
 
 
    return 0;
}