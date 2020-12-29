    #include <bits/stdc++.h>
     
    using namespace std;
     
     
    typedef long long int ll;
    typedef vector<int>vi;
    typedef deque<int> di;
    typedef deque<char>dc;
     
    #define f(i, a, b) for(int i = a; i < b; i++)
    #define f2(i, a, b) for(int i = a; i <= b; i++)
     
    int main () {
    ll a;
    cin >> a;
    char c[a];
    char s1;
    ll sum = 0;
    dc s3;
     
    f(i, 0, a) {
    cin >> c[i];
    s3.push_back(c[i]);
     
     
    }
    f(i, 0, a) {
     
    s1 = s3[i];
    if (s1 == s3[i+1]) {
        sum += 1;
    }
    }
    cout << sum;
    return 0;
     
    }
     