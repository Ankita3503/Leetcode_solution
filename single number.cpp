/*class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int n=nums.end()-nums.begin();
      for(int i=0;i<nums.size();i++)      //time complexity is more  o(n^2)
      {
          for(int j=0;i<nums.size();j++)
          {
          if(nums[i]==nums[j] &&i!=j)
          {
             break;
          }
          if(j==n)
              return nums[i];
          }
      }
        return 0;
    }
}; */
class Solution{
    public:
    int  singleNumber(vector<int>& nums)       // by using xor properties 0 ^ x = x  ,x ^ x = 0
    {
        int result=0;                          // time complexity is o(n)
        for(int i=0;i<nums.size();i++)
        {
            result=result^nums[i];
        }
        return result;
    }
};
