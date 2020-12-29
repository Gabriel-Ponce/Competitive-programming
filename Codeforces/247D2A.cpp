        #include <iostream>
    #include <bits/stdc++.h>
    #include <string>
     
     
     
    using namespace std;
     
    int main()
    {
     
    int x[4];
    string s;
    int sum = 0;
     
     
    for (int i = 0; i < 4; i++ ) {
        cin >> x[i];
    }
    cin >> s;
    int n = s.length();
    char c[n+1];
    strcpy(c ,s.c_str());
     
    for (int i = 0; i < n; i++) {
     
     
        if (c[i] == '1') {
     
           sum += x[0];
        }
     
        else if (c[i] == '2') {
     
            sum += x[1];
        }
     
        else if (c[i] == '3') {
     
            sum += x[2];
        }
     
        else if (c[i] == '4') {
     
            sum += x[3];
        }
     
        else if (c[i] == ' ') {
            break;
        }
     
    }
     
    cout << sum;
     
     
        return 0;
     
    }