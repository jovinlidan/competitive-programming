#include <bits/stdc++.h>
using namespace std;
 
 
bool solve(string x, string y, string z){
 if(x == "rock" && y == "scissors" && z == "scissors") return true;
 else if(x == "scissors" && y == "paper" && z == "paper") return true;
 else if(x == "paper" && y == "rock" && z == "rock") return true;
 return false;
 
}
 
int main()
{
 string x, y, z;
 cin >> x>> y>> z;
 if(solve(x, y, z)) cout << "F\n";
 else if (solve(y, x, z)) cout << "M\n";
 else if (solve(z, x, y)) cout << "S\n";
 else cout << "?\n";
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    return 0;
}