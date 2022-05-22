class Solution {
public:
    int minimumLines(vector<vector<int>>& sp) {
        if(sp.size()==0)return 0;
        if(sp.size()==1)return 0;
        
        sort(sp.begin(),sp.end());
        
        int res=1;
        long double curr = (long double)(sp[1][1]-sp[0][1])/(long double)(sp[1][0]-sp[0][0]);
        
		
        for(int i = 1; i < sp.size()-1; i++){
            
            long double s = (long double)(sp[i+1][1]-sp[i][1])/(long double)(sp[i+1][0]-sp[i][0]);
            if(s!=curr){
                
                res++;
                curr = s;
            }
        }        
        
        return res;
    }
};