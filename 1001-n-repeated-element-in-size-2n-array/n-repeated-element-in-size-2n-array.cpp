class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int n = nums.size() / 2;

        int currentValue = 0;
        int count;
        for(int i=0; i<nums.size(); i++) {
            count = 0;
            currentValue = nums[i];
            for(int j=0; j<nums.size(); j++) {
                if(nums[j] == currentValue) {
                    count++;
                }        
            }
            if(count == n) {
                return currentValue;
            }
        }

        return 0;

    }
};