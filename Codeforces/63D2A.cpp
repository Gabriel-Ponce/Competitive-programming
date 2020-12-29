    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main () {
     
    int n;
    cin >> n;
     
    int x[3*n];
    vector <int> a;
    vector <int> b;
    vector <int> c;
    int sum = 0;
    int sumB = 0;
    int sumC = 0;
    for (int i = 0; i < 3*n; i++) {
        cin >> x[i];
        if (sum == 0) {
            a.push_back(x[i]);
     
     
        }
        else if (sum == 1) {
     
            b.push_back(x[i]);
     
        }
        else if (sum == 2){
            c.push_back(x[i]);
            sum = -1;
        }
        sum++;
     
     
    }
    sum = 0;
    for (int j = 0; j < n; j++) {
     
        sum += a[j];
        sumB += b[j];
        sumC += c[j];
     
    }
     
    if (sum == 0 && sumB == 0 && sumC == 0) {
     
        cout << "YES";
     
    }
    else {
        cout << "NO";
     
    }
     
    return 0;
    }