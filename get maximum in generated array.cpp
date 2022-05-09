class Solution {
public:
    int getMaximumGenerated(int n)
    {
        int maximum=0;
        int nums[n+2];
            nums[0]=0;
            nums[1]=1;
        for(int i=1;i<=n/2;i++)
        {
            nums[2*i]=nums[i];   
                nums[(2*i)+1] =nums[i]+nums[i+1];
            
        }
        for(int i=0;i<=n;i++)
        {
           maximum= max(maximum,nums[i]);
        }
        return maximum;
    }
};
