    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main () {
     
    int a;
    cin >> a;
     
    int b;
    cin >> b;
     
    int sum = 0;
     
    do {
     
       sum += 1;
       a = 3*a;
       b = 2*b;
     
    } while (b >= a);
    cout << sum;
    return 0;
    }