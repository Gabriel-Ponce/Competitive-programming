    #include <iostream>
    #include <bits/stdc++.h>
     
    using namespace std;
     
     
    typedef long long int ll;
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
    int a;
    int b;
    cin >> a >> b;
    char x[a*b];
    bool ax = false;
     
    f(i,0,a*b) {
    cin >> x[i];
    if (x[i] != 'B' && x[i]!= 'W' && x[i]!= 'G') {
        ax = true;
    }
     
    }
    if (ax == true) {
     
        cout << "#Color";
    }
    else {
        cout << "#Black&White";
    }
     
    return 0;
    }