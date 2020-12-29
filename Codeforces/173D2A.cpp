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
    //freopen("gift1.in", "r", stdin);
    //freopen("gift1.out", "w", stdout);
    int n;
    cin >> n;
    string s;
    int sum = 0;
    f(i, 0, n) {
    cin >> s;
    sort(s.begin(), s.end());
     
    if (s[0] == '+') {
        sum++;
    }
    else {
        sum--;
    }
     
     
    }
    cout << sum;
    return 0;
    }