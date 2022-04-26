class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int majorityelement=nums[0] ,count=1;
        for(int i=1;i<nums.size();i++)
        {
             if(count==0)
                {
                    majorityelement=nums[i];
                    count=1;
                }
            else if(nums[i]==majorityelement)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return majorityelement;
    }
};
