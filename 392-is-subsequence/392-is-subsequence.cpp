class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="")return true;
        
        int i=0;
        int j=0;
        while(j<s.size() &&  i<t.size())
        {
            if(s[j]==t[i])
            {
                i++;
                j++;
                if(j==s.size())
                {
                    return true;
                }
            }
            
            else
            {
                i++;
            }
        }
        
        return false;
        
        
    }
};



// bool a=false;
//     void sub(int i, int n, vector<char>v,string t,string s)
//     {
//         if(i>=n)
//         {
            
//             string q="";
//             int i=0;
//             while(i<v.size())
//             {
//                 q=q+v[i];
//                 i++;
//             }
//             cout<<q<<"   ";
//             if(q==s)
//             {
//                 a=true;
//                 cout<<"yes"<<"  ";
//             }
//             return ;
            
//         }
        
//         v.push_back(t[i]);
//         sub(i+1,n,v,t,s);
//         v.pop_back();
//         sub(i+1,n,v,t,s);
        
//     }
    
    
    
    
//     bool isSubsequence(string s, string t) {
        
        
//         vector<char>v;
//         int n=t.size();
        
//         sub(0,n,v,t,s);
        
       
        
//         return a;