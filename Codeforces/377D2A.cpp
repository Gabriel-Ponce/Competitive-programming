     #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
     
    bool a = true;
    int k;
    cin >> k;
    int r;
    int c = 0;
    cin >> r;
    int sum = 0;
    int subs = 0;
     
     
    while (a == true) {
      c += k;
     
     
      subs = c - r;
     
     
     
      sum++;
      if (subs % 10 == 0 || c % 10 == 0) {
     
        a = false;
     
      }
     
    }
     
     
     
     
        cout << sum;
     
    return 0;
    }