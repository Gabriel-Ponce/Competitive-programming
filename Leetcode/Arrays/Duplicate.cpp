#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                int sum = 0;
                int a = 0;
                for(int j = i+1; j < arr.size(); j++) {
                    a = arr[j];
                    arr[j] = sum;
                    sum = a;
                }
                i++;
            }
        }
    }
};

int main() {


    return 0;
}