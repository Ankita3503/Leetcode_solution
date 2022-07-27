class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int index=0;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[index])
            {
                    index=i;
            }
        }
        return index;
    }
};
