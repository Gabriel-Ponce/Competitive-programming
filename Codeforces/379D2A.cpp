    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
     
    int n;
    cin >> n;
     
    char s[n];
     
    int sumA = 0;
    int sumB = 0;
     
    for (int i = 0; i < n; i++) {
       cin >> s[i];
       if (s[i] == 'A') {
     
        sumA += 1;
       }
     
       else {
     
        sumB += 1;
     
       }
     
    }
     
    if (sumA > sumB) {
     
       cout << "Anton" << endl;
    }
     
    else if (sumA < sumB) {
     
       cout << "Danik" << endl;
    }
     
    else {
     
        cout << "Friendship" << endl;
     
    }
     
    return 0;
    }