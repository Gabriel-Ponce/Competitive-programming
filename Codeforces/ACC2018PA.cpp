    #include <iostream>
    #include <bits/stdc++.h>
    #include <string>
     
    using namespace std;
     
     
    typedef long long int ll;
    typedef unsigned long long  ull;
    typedef vector<int> vi;
    typedef vector<char> vc;
    typedef deque <int> di;
    typedef deque <char> dc;
     
    #define f(i, a, b) for (int i = a; i < b; i++)
    #define f2(i, a, b) for (int i = a; i <=b; i++)
    #define pb push_back
    #define pf push_front
    #define ppb pop_back
    #define ppf pop_front;
    int main() {
     
    string s;
    cin >> s;
    int sum = 0;
    int suma = 0;
    vc x;
    vc y;
    if (s.length() != 1) {
    f(i, 0, s.length()) {
    if (i != s.length()-1 && s[i] == s[i+1]) {
        sum++;
    }
    }
    f(i, 0, s.length()/2) {
    x.pb(s[i]);
     
    }
    for (int i = s.length()-1; i >= s.length()/2; i--) {
     
    y.pb(s[i]);
     
    }
    if (sum != s.length()-1) {
        f(i, 0, x.size()) {
     
        if (x[i] == y[i]) {
            suma++;
        }
     
        }
        if (suma == s.length()/2) {
     
            cout << s.length()-1;
        }
        else {
            cout << s.length();
        }
    }
    else {
        cout << 0;
    }
    }
    else {
     
    cout << 0;
    }
     
    return 0;
    }