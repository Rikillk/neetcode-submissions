class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix= strs[0];
        int n= strs.size();
        for(int i=1;i<n;i++){
            string curr= strs[i];
            int j=0;
            while(prefix[j]== curr[j] && j<prefix.size() && j< curr.size() ){
                j++;
            }
            prefix= prefix.substr(0,j);
        }
        return prefix;
    }
};