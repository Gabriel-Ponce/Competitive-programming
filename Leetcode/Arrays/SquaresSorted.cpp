#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares;
    for(int i = 0; i < nums.size(); i++) {
        int a = pow(nums[i], 2);
        squares.push_back(a);
    }
    sort(squares.begin(), squares.end());

    return squares;
        
    }
};

int main () {

    Solution solution;
    vector<int> nums = {-4,-1,0,3,10} ;
    vector<int> sum = solution.sortedSquares(nums);
    for(int i = 0; i < nums.size(); i++) {

        cout << nums[i];
    }

    
    return 0;

}