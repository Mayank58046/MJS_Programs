class Solution {
public:
    string getSmallestString(string s) {
        int n = s.length();
        for(int i=0; i<n-1; i++){
            if(s[i]%2==s[i+1]%2 and s[i]>s[i+1]){
                    swap(s[i], s[i+1]);
                break;
            }
        }
        
        string res="";
        
//         for(auto c:temp)
//             res += c;
        
        return s;
    }
};