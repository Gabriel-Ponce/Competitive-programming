#include <bits/stdc++.h>
#include <iostream>

using namespace std;

typedef long long int ll;
typedef unsigned long long  ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef deque <int> di;
typedef deque <char> dc;

#define f(i, a, b) for (int i = a; i < b; i++)
#define f2(i, a, b) for (int i = a; i <=b; i++)
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front;
#define stringstream st;

int recursivesum(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        cout << n << endl;
        return n + recursivesum(n-1);
    }
}

int evensum(int n) {
    cout << n << endl;
    if (n == 0) {
        return n;
    }
    else if (n%2 == 0) {
        return n + evensum(n-1);
    }
    else {
        return evensum(n-1);
    }


}

int main() {

  int n;
  cin >> n;
  cout << evensum(n);

}