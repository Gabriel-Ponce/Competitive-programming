    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main () {
    int n;
    int k;
    cin >> n >> k;
    int x = 97;
    int sum = 0;
    for (int i = 0; i < n; i++) {
    cout << static_cast<char>(x + sum);
    sum++;
     
    if (sum == k) {
        sum = 0;
    }
     
    }
    return 0;
    }