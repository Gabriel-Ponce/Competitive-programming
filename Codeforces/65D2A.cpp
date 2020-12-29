    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main () {
     
    int x;
    int sum = 0;
    cin >> x;
    x+=1;
    string s[x];
    int s1 = 0;
    for (int k = 0; k < x; k++) {
     
        getline(cin, s[k]);
    }
     
     
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < s[i].length(); j++) {
     
        if (j !=0 && j != s[i].length()-1) {
     
            sum +=1;
     
        }
     
     
        }
     
        if (s[i].length() > 10) {
        cout << s[i][0] << sum << s[i][s[i].length()-1] << endl;
     
        }
        else {
            cout << s[i] << endl;
        }
        sum = 0;
    }
     
     
    return 0;
    }