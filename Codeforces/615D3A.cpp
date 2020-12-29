     #include <iostream>
    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
     
    int n;
    cin >> n;
    deque <int> xs;
    int x[n][4];
    int x3 = 0;
     
    for (int i = 0; i < n; i++) {
     
            for (int j = 0; j < 4; j++) {
     
                cin >> x[i][j];
     
     
            }
     
    }
     
    for (int ii = 0; ii < n; ii++) {
     
            for (int jj = 0; jj < 4; jj++){
     
            if (jj != 3) {
            xs.push_back(x[ii][jj]);
            }
            else {
                x3 = x[ii][jj];
     
            }
     
        }
     
            sort(xs.begin(), xs.end());
            xs.clear();
     
            if (((x3 -(xs[2] - xs[0])) - (xs[2] - xs[1]))%3 == 0 &&((x3 -(xs[2] - xs[0])) - (xs[2] - xs[1])) >= 0 ) {
     
                cout << "YES\n";
            }
     
            else {
                cout << "NO\n";
            }
    }
    }