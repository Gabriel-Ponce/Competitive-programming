       #include <bits/stdc++.h>
     
    using namespace std;
     
     
    typedef long long int ll;
    typedef vector<int>vi;
    typedef deque<int> di;
    typedef deque<char>dc;
     
    #define f(i, a, b) for(int i = a; i < b; i++)
    #define f2(i, a, b) for(int i = a; i <= b; i++)
     
    int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
     
    int n;
    cin >> n;
    int x[2*n];
    bool isr = false;
    int sum = 0;
    f(i, 0, 2*n) {
    cin >> x[i];
     
     
    }
    f(j, 0, 2*n) {
    if (j%2 == 0 && x[j] != x[j+1]) {
        isr = true;
     
     
    }
        if (j%2 == 0 && x[j] >= x[j+2] && j!= (2*n)-2) {
            sum+=1;
     
        }
     
     
    }
     
    if (isr == true) {
     
        cout << "rated" << endl;
    }
    else if (sum == n-1) {
     
        cout << "maybe" << endl;
     
    }
    else {
        cout << "unrated" << endl;
     
    }
     
    return 0;
    }