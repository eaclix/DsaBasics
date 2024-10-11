class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftsum = 0;
        int totalsum = 0;
        
        for(int i=0; i<n; i++){
            totalsum += nums[i];
        }
       
        
        for(int i=0; i<n; i++){
            if(leftsum == (totalsum - leftsum - nums[i])){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};
