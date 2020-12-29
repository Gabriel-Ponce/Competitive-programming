    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    int y;
    cin >> y;
    int w;
    cin >> w;
    int x = 0;
    int z = 6;
     
    if (y >= w) {
     
    x = 6 - (float)y + 1;
     
    if (z % x == 0) {
     
        z = z/x;
        x = x/x;
     
    }
     
    else if (z%2 == 0 && x%2 ==0) {
     
        z = z/2;
        x = x/2;
     
    }
     
    cout << x << "/" << z;
     
     
     
     
    }
     
    if (y  < w) {
     
    x = 6 - (float)w + 1;
     
    if (z % x == 0) {
     
        z = z/x;
        x = x/x;
     
    }
    else if (z%2 == 0 && x%2 ==0) {
     
        z = z/2;
        x = x/2;
     
    }
     
     
    cout << x << "/" << z;
     
     
     
     
    }
     
        return 0;
    }