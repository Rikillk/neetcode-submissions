class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string, vector<string>> mpp;
        // for(string s: strs){
        //     string sorted= s;
        //     sort(sorted.begin(),sorted.end());
        //     mpp[sorted].push_back(s);
        // }
        // vector<vector<string>> result;
        // for(auto p: mpp){
        //     result.push_back(p.second);
        // }
        // return result;

        unordered_map<string, vector<string>> mpp;
        for(const string s: strs){
            int count[26]= {0};
            for(char c: s){
                count[c-'a']++;
            }
            string key= to_string(count[0]);
            for(int i=1;i<26;i++){
                key+= ','+ to_string(count[i]);
            }
            mpp[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto& p:mpp){
            ans.push_back(p.second);
        }
        return ans;
    }

};
