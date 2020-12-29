    #include <iostream>
    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
     
      int n;
      cin >> n;
      int x[n];
      int o = 0;
      int sum = 0;
     
     
        for (int i = 0; i < n; i++) {
     
            cin >> x[i];
     
            if (x[i] < 0 && o!= 0) {
     
                o = o + x[i];
     
            }
     
            else if (x[i] > 0) {
     
                o += x[i] ;
     
            }
            else if (x[i] == -1 & o == 0) {
     
                sum++;
            }
     
        }
        cout << sum << endl;
        return 0;
     
    }
     
     
          }
     
     
        }
     
     
    }
    return 0;
    }