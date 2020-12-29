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
    string t;
    cin >> s;
    cin >> t;
    int suma = 1;
    int sumb = 1;
     
    if (operator==(s, t)) {
        cout << -1;
    }
    else if (s.length() >= t.length()){
        cout << s.length();
    }
    else if (s.length() < t.length()) {
        cout << t.length();
    }
    return 0;
    }