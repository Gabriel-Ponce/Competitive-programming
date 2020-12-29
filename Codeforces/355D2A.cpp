    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        int n;
        cin >> n;
     
        int h;
        cin >> h;
     
        int sum = 0;
        int x[n];
     
        for (int i = 0; i < n; i++) {
     
         cin >> x[i];
         if (x[i] > h) {
     
           sum = sum + 2;
     
         }
         else  {
     
           sum = sum + 1;
              }
     
     
        }
     
            cout << sum << endl;
        return 0;
    }