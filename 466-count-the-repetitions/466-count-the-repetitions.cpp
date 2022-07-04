class Solution {
public:
    int getMaxRepetitions(string s1, int n1, string s2, int n2) {
        int l1 = s1.size();
        int l2 = s2.size();
        int p1 = 0; 
        int p2 = 0; 
        
        int o2p1[101][101]; 
        int o2p2[101][101]; 
        
        for (int i = 0; i <= 100; i++)
            for (int j = 0; j <= 100; j++){
                o2p1[i][j] = -1;
                o2p2[i][j] = -1;
            }
        
        while (p1 < l1 * n1){
            if (s1[p1 % l1] == s2[p2 % l2]){
                int off1 = p1 % l1; 
                int off2 = p2 % l2; 
                int prev1 = p1; 
                int prev2 = p2; 
                if (o2p1[off1][off2] != -1 && o2p2[off1][off2] != -1){ 
                    int times = (l1 * n1 - p1) / (p1 - o2p1[off1][off2]); 
                    p1 += times * (p1 - o2p1[off1][off2]);
                    p2 += times * (p2 - o2p2[off1][off2]); 
                }
                else { 
                    o2p1[off1][off2] = p1; 
                    o2p2[off1][off2] = p2; 
                }
                if (prev1 == p1 && prev2 == p2){ 
                    p1 ++;
                    p2 ++;
                }
            }
            else
                p1 ++;
        }
        return (p2 / l2) / n2;
    }
        
    
};