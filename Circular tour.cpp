class Solution{
  public:
    int tour(petrolPump p[],int n)
    {
       int balance=0;
       int start=0;
       int previous_petrol=0;
       
       for(int i=0;i<n;i++)
       {
           balance += p[i].petrol -p[i].distance;
           if(balance < 0)
           {
               previous_petrol+=balance;
               start=i+1;
               balance=0;
                
           }
          
       }
       if(previous_petrol+balance >= 0)
       {
           return start;
       }
       else
       {
           return -1;
       }
    }
};
