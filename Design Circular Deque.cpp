class MyCircularDeque {
    int *arr;
    int qfront;
    int qrear;
    int size;
public:
    MyCircularDeque(int k) 
    {
        size=k;
        qfront=-1;
        qrear=-1;
        arr=new int[size];
    }
    
    bool insertFront(int value) {
       
        if(isFull())
        {
            return false;
        }
    
       else if(qfront==-1)
       {
           qfront=qrear=0;
       }
        else if(qfront==0)
        {
            qfront=size-1;
        }
        else
        {
            qfront--;
        }
         arr[qfront]=value;
        return true;
          
    }
    
    bool insertLast(int value) {
       
        if(isFull())
        {
            return false;
        }
        
       
        else
        {
            if(qfront==-1)
            {
                qfront=qrear=0;
            }
            
          else  if(qrear==size-1 && qfront!=0) // iska matlab aage ki positon khali hai
            {
                qrear=0;
            }
            else
            {
                qrear++;
            }
           arr[qrear]=value;
            return true;
        }
        
    }
    
    bool deleteFront() {
        if(qfront==-1)
        {
            return false;
        }
       else if(qfront==qrear)
        {
            qfront=qrear=-1;
        }
        else if(qfront==size-1)
        {
            qfront=0;
        }
        else
        {
            qfront++;
        }
            
            return true;
        
    }
    
    bool deleteLast() {
         if(qrear==-1)
        {
            return false;
        }
        
         else if(qfront == qrear)
         {
          qfront = qrear = -1;
         }
        
        else if(qrear == 0)
        {
        qrear=size -1;
        }
   
        else
        {
        qrear--;
         }
        
    return true;
    }
    
    
    int getFront()
    {
         if(qfront==-1)
        {
            return -1;
        }
        else
        {
            int ans=arr[qfront];
            return ans;
        }
    }
    
    int getRear() {
        if(qfront==-1)
        {
            return -1;
        }
        else
        {
            int ans=arr[qrear];
            return ans;
        }
        
    }
    
    bool isEmpty() {
        
        if(qfront==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    bool isFull() {
        if(qfront==0 &&qrear==size-1) 
        {
            return true;
        }
           
         if(qfront==qrear+1)
        {
           return true;
        }
           
       return false;
    }
};
