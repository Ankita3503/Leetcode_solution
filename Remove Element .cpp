#include<iostream>
using namespace std;
int removeElement(int* nums, int numsSize, int val)
{
    int j=0;
   for(int i=0;i<numsSize;i++)
   {
       if(nums[i]!=val)
           nums[j++]=nums[i];
   }
    return j;
}
int main()
{
  int numsSize,val;
  cout<<"Enter the size of array elements : \n";
  cin>>numsSize;
  int nums[numsSize];
  cout<<"Enter the elements :  \n";
  for(int i=0;i<numsSize;i++)
  {
    cin>>nums[i];
  }
  cout<<"Enter the value  to be removed : \n";
  cin>>val;
  cout<< removeElement(nums , numsSize , val);
  return 0;
}
