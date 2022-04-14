class Solution 
{
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n=digits.size();
       for(int i=n-1;i>=0;i--)
       {
           if(digits[i]!=9)
           {
               digits[i]++;
               break;
           }
           else
           {
               digits[i]=0;
           }
       }
        if(digits[0]==0)
        {
           /*int[] res= new int[n+1];  // new array is created from the old array in java
            res[0]=1;
            return res;*/
            digits.insert(digits.begin(),1);    // new array is created from the old array in cpp
        }
        return digits;
    }
};
