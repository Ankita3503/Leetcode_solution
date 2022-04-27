class Solution{
    
public:
void moveZeroes(vector<int>& nums)
{
        int count=0; //initially count is 0 so that first non zero element with be swapped to index 0
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i], nums[count]);
                count++; //increment count for every swap performed
            }
        }
}
};    
