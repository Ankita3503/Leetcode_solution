class Solution {
public:
    int lengthOfLastWord(string s)
    {
         int count=0;
        int lastindex= s.size()-1; //To store the last character's index
        while(s[lastindex]==' ')
        {
            lastindex--; //To avoid spaces at the end of the sentence
        }
        for(int i= lastindex; i>=0;i--)
        {
            if(s[i]!=' ') 
            count++; //count will store the length of the last word. 
            else 
            break; //If space is found, it means the last word is over, so break.
        }
        return count;
    }
};
