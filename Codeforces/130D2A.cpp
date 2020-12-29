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
     
    string s;
    cin >> s;
    dc c;
    bool ax = false;
    int sum = 0;
     
    f(i, 0, s.length()) {
     
    if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
     
        i +=2;
        if (ax == true) {
            c.pb(' ');
     
        }
    }
    else {
    c.pb(s[i]);
    ax = true;
    }
     
    }
     
    f(i, 0, c.size()) {
    cout << c[i];
     
     
    }
    return 0;
    }
     