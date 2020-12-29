    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main(){
     
    string s;
    char a;
    char b;
    int sum = 1;
    getline(cin, s);
    int x = ((((s.length()/3)-1)*2));
     
    int n = s.length();
     
    sort(s.begin(), s.end());
     
     
    for (int i = x; i < n-3; i++) {
        if (i != n-1) {
        a = s[i];
        b = s[i+1];
     
        if (a != b) {
     
            sum += 1;
        }
     
        }
    }
     
        if (s != "{}") {
            cout << sum;
        }
     
        else {
            cout << 0;
        }
        return 0;
    }