    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main () {
    int n;
    cin >> n;
    int x[n];
    vector<int> ax;
    vector<int> bx;
    vector<int> cx;
    bool ab = false;
    int a = 0;
     
    for (int i = 0; i < n; i++) {
     
       cin >> x[i];
     
       if (x[i] == 1) {
     
        ax.push_back(i+1);
        ax.push_back(x[i]);
     
       }
       if (x[i] == 2) {
        bx.push_back(i+1);
        bx.push_back(x[i]);
       }
        else if (x[i] == 3){
        cx.push_back(i+1);
        cx.push_back(x[i]);
        }
    }
        if (ax.size() != 0 && bx.size() != 0 && cx.size() != 0) {
        if (ax.size() <= bx.size() && ax.size() <= cx.size()) {
         cout << ax.size()/2 << endl;
         a =  ax.size()/2;
        }
        else if (bx.size() < ax.size() && bx.size() < cx.size()) {
            cout << bx.size()/2 << endl;
            a = bx.size()/2;
        }
        else {
            cout << cx.size()/2 << endl;
            a = cx.size()/2;
        }
        }
        else {
           cout << 0;
           ab = true;
        }
      if   (ab == false) {
        for (int j = 0; j <  2*a; j++) {
            if (j%2 == 0) {
            cout << ax[j] << " "  << bx[j] << " " << cx[j] << endl;
            }
        }
      }
    return 0;
    }

