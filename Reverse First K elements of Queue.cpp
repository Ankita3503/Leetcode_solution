queue<int> modifyQueue(queue<int> q, int k) 
{
   queue<int> ans;
   stack<int> s;
   for(int i=0;i<k;i++)
   {
       int element=q.front();
       q.pop();
       s.push(element);
   }
   while(!s.empty())
   {
       int element=s.top();
       s.pop();
       ans.push(element);
   }
   while(!q.empty())
   {
       int element=q.front();
       q.pop();
       ans.push(element);
   }
   return ans;
}
