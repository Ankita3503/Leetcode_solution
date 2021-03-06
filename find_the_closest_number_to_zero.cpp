/*First compare each element with INT_MAX . If lesser then update the ans variable with the element in the nums .
For exapmle , in case of [-4,-2,1,4,8]
INT_MAX=2147483647   ,INT_MIN=-2147483648
abs(4) < abs(INT_MAX) --> so mark ans = 4
In next iteration abs(2) < abs(4) --> so mark ans = 2
iterating through the nums will finnaly give 1 as ans .
For another case when there are two possible answers --> e.g. --> -1 , 1

Check for max in this case so --> max(-1,1) --> gives 1 , which is our answer .
 */

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
//         setting the ans to maximum value of int
        int ans = INT_MAX ;
        for(int i=0;i<nums.size();i++){
        // checking if each value of nums is less than the max value
            if(abs(nums[i]) < abs(ans))
            {
                ans = nums[i]  ; //check for the lesser value
            }
            else if(abs(nums[i]) == abs(ans)){
                ans = max (ans,nums[i]) ; // return the maximum in cases there are multiple answers
            }
        }
        return ans ;
    }
};
