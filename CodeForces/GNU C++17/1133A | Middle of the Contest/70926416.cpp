#include <bits/stdc++.h>
using namespace std;
 
int toInt(string s)
{
 stringstream hsl(s);
 int x = 0;
 hsl >> x;
 return x;
}
 
string toString(int x)
{
 stringstream ss;
 ss << x;
 return ss.str();
}
 
int main()
{
 string a, b, ans;
 int mn = 0;
 cin >> a >> b;
 
 int ll = (toInt(a.substr(0, 2)) * 60) + (toInt(a.substr(3, 2)));
 int rr = (toInt(b.substr(0, 2)) * 60) + (toInt(b.substr(3, 2)));
 int totalMin = rr - ll;
    //cout << totalMin << endl;
 totalMin /= 2;
 
 int bulat = totalMin / 60;
 
 string bulatStr = toString(bulat);
 
 bulat *= 60;
 totalMin -= bulat;
 string totalStr = toString(totalMin);
 
 
 int awalHour = toInt(a.substr(0,2));
 int awalMin = toInt(a.substr(3,2));
 int awalMinInt =awalMin;
 awalMinInt+= totalMin;
 
 int awalMinBagi = awalMinInt / 60;
 //cout << awalMinInt << endl;
 awalHour += awalMinBagi;
 awalMinBagi *= 60;
 awalMinInt -= awalMinBagi;
 
 string ans1 = toString(awalHour + toInt(bulatStr));
 string ans2 = toString(awalMinInt);
 if(ans1.length() == 1)
 {
  ans1.push_back('0');
  reverse(ans1.begin(), ans1.end());
 }
 if(ans2.length() == 1)
 {
  ans2.push_back('0');
  reverse(ans2.begin(), ans2.end());
 }
 cout<< ans1 << ":" << ans2 << endl;
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
}