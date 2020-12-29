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
    #define ppf pop_front
     
    int main()
    {
    ll n;
    cin >> n;
    int x[4] = {8, 4, 2, 6};
     
    if (n == 0) {
     
        cout << 1;
    }
    else if (n % 4 == 0) {
     
        cout << x[3];
    }
    else if ((n+1)%4 == 0) {
        cout << x[2];
     
    }
    else if ((n+2)%4 == 0) {
        cout << x[1];
    }
    else if ((n+3)%4 == 0){
        cout << x[0];
    }
     
    return 0;
    }