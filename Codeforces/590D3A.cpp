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
    int n;
    cin >> n;
    int x[n];
    int sum = 0;
    f(i, 0, n) {
    cin >> x[i];
    sum += x[i];
    }
    ll m = ceil((long double)sum/(long double)n);
    cout << m << endl;
     
    }
    int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
    }