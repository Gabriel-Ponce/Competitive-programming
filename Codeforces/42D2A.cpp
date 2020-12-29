#include <bits/stdc++.h>
 
using namespace std;
 
 
typedef long long int ll;
typedef vector<int>vi;
typedef deque<int> di;
typedef deque<char>dc;
 
#define f(i, a, b) for(int i = a; i < b; i++)
#define f2(i, a, b) for(int i = a; i <= b; i++)
 
int main () {
ios::sync_with_stdio(0);
cin.tie(0);
 
int n;
cin >> n;
string s[n];
int a = 0;
int b = 0;
bool c = false;
 
f(i, 0, n) {
 
cin >> s[i];
 
}
sort(s, s+n);
if (n > 1) {
f(i, 0, n) {
if (i > 0 && s[i] == s[i-1] && c == false) {
a++;
 
}
else if (i > 0 && s[i] != s[i-1]) {
 
   a++;
   b++;
   c = true;
}
else if (i > 0 && s[i] == s[i-1] && c == true){
    b++;
 
}
}
}
 
else {
    a = 1;
}
if (a > b) {
    cout << s[0];
}
else if (a < b) {
    cout << s[n-1];
}
return 0;
}