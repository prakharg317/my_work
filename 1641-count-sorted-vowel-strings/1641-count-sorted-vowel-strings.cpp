class Solution {
public:
    
    vector<char> vowels{'a','e','i','o','u'};
    
    void cnt(int n, int ind,int &count)
    {
        if(n==0)
        {
            count++;
            return;
        }
        
        for(int i=0; i<5; i++)
        {
            
            if(i>=ind)
            {
                cnt(n-1,i,count);
            }
            
            
        }
    }
    
    
    
    int countVowelStrings(int n) {

        
        int count=0;
        cnt(n,0,count);
        
        
        return count;
        
        
    }
};