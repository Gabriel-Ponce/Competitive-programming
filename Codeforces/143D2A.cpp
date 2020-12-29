

    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
     
    int n;
    cin >> n;
    int x[n][3];
    int sum = 0;
     
    for (int i = 0; i < n; i++ ) {
     
        for (int j = 0; j < 3; j++) {
            cin >> x[i][j];
     
     
     
     
        }
            if (x[i][0] + x[i][1] + x[i][2] >= 2) {
                sum +=1;
     
            }
     
     
    }
     
    cout << sum << endl;
     
    return 0;
    }