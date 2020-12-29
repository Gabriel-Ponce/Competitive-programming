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
    int n;
    bool a = false;
    cin >> n;
    int sum = 0;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if (s.length() != 1) {f(i, 0, n) {
    if (i != n-1 && s[i] == s[i+1]) {
        sum++;
     
     
    }
    if (sum == 1) {
        a = true;
        break;
     
    }
     
    }
    if (a == true) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    }
    else {
        cout << "Yes";
    }
    return 0;
    }