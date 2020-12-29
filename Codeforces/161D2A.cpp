    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
     
    int mov = 0;
    int n[5][5];
    int x = 2;
    int y = 2;
     
    for (int i = 0; i < 5; i++) {
     
        for (int j = 0; j < 5; j++) {
     
            cin >> n[i][j];
          if ((n[i][j] == 1) & (n[2][2] != 1)) {
     
            mov = abs((i-x))+abs((j-y));
     
          }
     
     
        }
     
     
    }
    cout << mov << endl;
    return 0;
    }