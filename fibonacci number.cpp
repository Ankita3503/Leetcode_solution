class Solution {
public:
    int fib(int n)
    {
        int f[n+2],sum=0;
        f[0]=0;
        f[1]=1;
        if(n<2)
            return n;
        for(int i=2;i<=n;i++)
        {
            f[i]=f[i-1]+f[i-2];
        }
        return f[n];
    }
};
