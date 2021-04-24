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

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = sizeof(costs) / sizeof(costs[0]);
        sort(costs.begin(), costs.end());

        for (int i = 0 ; i < costs.size(); i++) {

            int sum = coins;

            sum -= costs[i];

            if (sum <= 0) {
                return i+1;
            } 
        }

    }
};
using namespace std;
int main() {
    
    return 0;
}