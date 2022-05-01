class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
       
 
    int current=0;
    int max_till_now=INT_MIN; 
   
    for(int i=0;i<nums.size();i++)
    {
        current=current+nums[i];
         max_till_now = max(current,max_till_now) ;
        if(current<0)
        {
            current=0;
        }   
       
    }
   
   
   return max_till_now;
    }
};
