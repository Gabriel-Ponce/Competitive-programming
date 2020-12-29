     #include <iostream>
    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
     
    string s;
    cin >> s;
    vector <char> s2;
    for (int i = 0; i < s.length(); i++) {
        if (i %2 == 0) {
     
        s2.push_back(s[i]);
        }
    }
    sort(s2.begin(), s2.end());
     
    for (int k = 0; k < s.length()/2+1; k++) {
        if (k != (s.length()/2+1)-1) {
        cout << s2[k] << "+";
        }
     
    else if (s.length() == 1) {
        cout << s2[k];
    }
     
    else {
            cout << s2[k];
    }
    }
    return 0;
    }