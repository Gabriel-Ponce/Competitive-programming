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
    int n;
    int x;
    cin >> n >> x;
     
    int xn[15] {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    int number = 0;
     
    f(i, 0, n) {
    if (xn[i] == n) {
        number = i;
        break;
    }
    }
    if (xn[number+1] == x) {
        cout << "YES";
     
     
    }
    else {
        cout << "NO";
    }
    return 0;
    }