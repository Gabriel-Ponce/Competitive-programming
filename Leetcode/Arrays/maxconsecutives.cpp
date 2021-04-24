#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> consecutives;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                sum++;
                
            }
            if (nums[i] == 0) {
                consecutives.push_back(sum);
                sum = 0;
            }
            if(i == nums.size()-1) {
                consecutives.push_back(sum);
            }
        }

        sort(consecutives.begin(), consecutives.end());
        return consecutives[consecutives.size()-1];
    }
};

int main() {

    vector<int> nums = {1,0,1,1,0,1};
    Solution solution;
    cout << solution.findMaxConsecutiveOnes(nums);
    return 0;
}