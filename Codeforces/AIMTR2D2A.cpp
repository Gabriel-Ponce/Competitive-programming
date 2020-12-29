    #include <iostream>
    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
      int n;
      cin >> n;
      int x[n];
      int b;
      int d;
     
      int sumD = 0;
      int sum = 0;
      cin >> b;
      cin >> d;
     
      for (int i = 0; i < n; i++){
        cin  >> x[i];
     
     
      }
     
     
      for (int m = 0; m < n; m++) {
         if (x[m] <= b) {
            sum += x[m];
         }
         if (sum > d) {
            sumD +=1;
            sum = 0;
         }
      }
     
    cout << sumD;
    return 0;
    }