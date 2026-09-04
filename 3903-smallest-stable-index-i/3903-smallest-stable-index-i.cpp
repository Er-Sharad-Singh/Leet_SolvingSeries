
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       int len = nums.size();
        int max = INT_MIN; 

        for (int i = 0; i < len; i++) {
           
            if (nums[i] > max) {
                max = nums[i];
            }

            
            int min = INT_MAX; 
            for (int j = i; j < len; j++) { 
                if (nums[j] < min) {
                    min = nums[j];
                }
            }

            if ((max - min) <= k) {
                return i;
            }
        }

        return -1;
    }
};