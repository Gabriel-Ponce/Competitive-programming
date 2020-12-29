

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
    typedef vector<long long int> vll;
     
    #define f(i, a, b) for (int i = a; i < b; i++)
    #define f2(i, a, b) for (int i = a; i <=b; i++)
    #define pb push_back
    #define pf push_front
    #define ppb pop_back
    #define ppf pop_front;
    bool solve() {
    string s;
    cin >> s;
    int sum0 = 0;
    int sum1 = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            sum1++;
        }
        else {
            sum0++;
        }
    }
    if (min(sum0, sum1)%2 != 0) {
        return true                           ;
    }
     
    else {
    return false;
    }
    }
     
    int main() {
    int n;
    cin >> n;
    while (n--) {
    if (solve()) {
        cout << "DA" << endl;
    }
    else {
        cout << "NET" << endl;
    }
    }
    return 0;
     
    }