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
     
     
    int main () {
    ll n;
    cin >> n;
    ll sum = 0;
    string s[n];
    f(i, 0, n) {
    cin >> s[i];
    if (s[i] == "Tetrahedron") {
        sum+= 4;
    }
    else if (s[i] == "Cube") {
        sum += 6;
    }
    else if (s[i] == "Octahedron") {
        sum+= 8;
    }
    else if (s[i] == "Dodecahedron") {
        sum += 12;
    }
    else {
        sum+= 20;
    }
     
     
    }
    cout << sum;
    return 0;
    }