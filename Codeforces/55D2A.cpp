       #include <bits/stdc++.h>
     
     
    using namespace std;
     
    int main()
    {
        char s[100];
        cin >> s;
        int sumUpper = 0;
        int sumLower = 0;
     
     
     
        for (int i = 0; i < strlen(s); i++) {
     
            if (isupper(s[i])) {
     
     
                sumUpper += 1;
     
     
            }
            else {
                sumLower += 1;
            }
     
     
     
     
        }
        for (int i = 0; i < strlen(s); i++) {
     
          if (sumUpper > sumLower) {
     
     
            putchar(toupper(s[i]));
     
          }
     
          else {
     
                    putchar(tolower(s[i]));
     
     
     
          }
     
     
        }
     
     
    }
    return 0;
    }