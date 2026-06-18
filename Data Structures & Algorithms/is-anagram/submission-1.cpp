class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]={0};
        for(char c: s){
            arr[c-'a']++;
        }
        int arr2[26]= {0};
        for(char c: t){
            arr2[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=arr2[i]) return false;
        }
        return true;
    }
};
