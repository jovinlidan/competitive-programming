#include <bits/stdc++.h>
using namespace std;
int main() {
 int hp;
 cin >> hp;
 if (hp % 4 == 0) cout << 1 << " A";
 else if (hp % 4 == 2) cout << 1 << " B";
 else if (hp % 4 == 3) cout << 2 << " A";
 else if (hp % 4 == 1) cout << 0 << " A";
 cout << endl;
}