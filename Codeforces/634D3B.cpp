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
    void solve() {
    int a, b , c;
    char ch = 97;
    cin >> a >> b >> c;
    f(i, 0, a) {
    if (ch-96 <= c) {
        cout << ch;
        ch++;
    }
    else if (ch-96 > c) {
        ch = 97;
        cout << ch;
        ch++;
    }
    }
    cout << " \n";
    }
     
    int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
    }