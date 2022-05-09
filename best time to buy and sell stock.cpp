class solution{
  public:
  int maxProfit(vector<int>&prices)
  {
    int max_profit=0;
    int min_price=INT_MAX;  // agar hum minimum value find kar rahe hai toh INT_MAX lenge 
    for(int i=0;i<prices.size();i++)
    {
      min_price=min(min_price,prices[i]);
      max_profit=max(max_profit,prices[i]-min_price);
    }
    return max_profit;
  };
  
        
