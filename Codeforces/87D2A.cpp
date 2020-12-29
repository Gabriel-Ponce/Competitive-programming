    #include <bits/stdc++.h>
    #include <string>
    #include <math.h>
     
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
    #define stringstream st;
    int main()
    {
     
    int n;
    cin >> n;
    ll x[n];
    ll a = 0;
    long double b = 0;
    long double c = 0;
    long double d = 0;
    f(i, 0, n) {
     
     
    f(j, 0, 4) {
     
     
    cin >> x[j];
    }
    b = x[0] - x[1];
    c = x[2] - x[3];
    d = ceil(b/c);
    a = (x[1]+d*x[2]);
    if (x[1] >= x[0]) {
     
        cout << x[1] << endl;
    }
    else if (x[2] <= x[3]) {
     
    cout << -1 << endl;
     
    }
    else if (x[1] < x[0]) {
    cout << a << endl;
    }
    }
    return 0;
    }