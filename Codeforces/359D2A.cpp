    #include <iostream>
    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
     
    long long n;
    cin >> n;
    int xn;
    cin >> xn;
    string s[n];
    long long  x[n];
    long long  sum = 0;
    long long sum2 = 0;
     
    sum = xn;
     
    for (int i = 0; i < n; i++) {
     
        cin >> s[i];
        cin >> x[i];
     
    }
     
    for (int k = 0; k < n; k++) {
     
        if (s[k] == "+") {
     
            sum += x[k];
        }
        if (s[k] == "-" ) {
            sum -= x[k];
        }
     
        if (sum < 0) {
            sum2 += 1;
            sum += x[k];
        }
    }
     
    cout << sum << " " << sum2;
     
    }