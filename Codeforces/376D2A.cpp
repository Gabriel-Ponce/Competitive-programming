     #include <iostream>
    #include <bits/stdc++.h>
    #include <string>
     
     
     
    using namespace std;
     
    int main()
    {
    char s, f ='a';
    int sum = 0;
     
    while (cin >> s) {
    sum += min(abs(f-s), 26-abs(f-s));
    f = s;
    }
     
    cout << sum;
     
    }