class Solution {
public:
    int minChanges(int n, int k) {
        if((n&k) != k)
            return -1;
        
        if(n==k)
            return 0;
        
        
        int cnt=0;
        while(n>0 || k>0){
            int bitN = n&1;
            int bitK = k&1;
            
            if(bitN==1 && bitK==0)
                cnt++;
            
            n >>= 1;
            k >>= 1;
        }
        
        return cnt;
    }
};