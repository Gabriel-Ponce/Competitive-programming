    #include <bits/stdc++.h>
     
    using namespace std;
     
     
    typedef long long int ll;
    typedef vector<int>vi;
    typedef deque<int> di;
    typedef deque<char>dc;
     
    #define f(i, a, b) for(int i = a; i < b; i++)
    #define f2(i, a, b) for(int i = a; i <= b; i++)
     
    int main () {
    int a;
    int b;
    cin >> a >> b;
    cout << ((a*b)-((a*b)%2))/2;
    return 0;
    }