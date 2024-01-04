#include <bits/stdc++.h>
using namespace std;
 
string getMax(int digit, int sum){
 if(digit == 1 && sum == 0) return "0";
 if(sum == 0) return "-1";
 
 string ans;
 for(int i = 0; i < digit; i++){
  ans += min(9, sum) + '0';
  sum -= min(9, sum);
 }
 if(sum > 0) return "-1";
 
 return ans;
}
 
string getMin(int digit, int sum){
 if(digit == 1 && sum == 0) return "0";
 if(sum == 0) return "-1";
 
 string ans;
 for(int i = 0 ; i < digit; i++){
  if(i == digit -1){
   ans.insert(ans.begin(), min(9, sum)+'0');
   sum -= min(9, sum);
  }else{
   ans.insert(ans.begin(), min(9, sum-1)+'0');
   sum -= min(9, sum-1);
  }
 }
 if(sum > 0) return "-1";
 
 return ans;
 
}
 
 
int main()
{
 int N, sum;
 cin >> N>>sum;
 cout <<getMin(N, sum) << " "<< getMax(N, sum) << endl;
 
 
 
 
    return 0;
}