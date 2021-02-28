class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s1 = 0,s2=0; // two pointers
        string ans = "";   // extra string ans
        
        while(s1 < s.size() && s2< t.size()){
            if(s[s1] == t[s2]){
                ans.push_back(t[s2]); // if it is equal just append it in ans string
                s1++;
                s2++;
            }
            if(s[s1] != t[s2]){
                s2++; // if s[i] != t[i] just increament t[i]
            }
        }
        
        if(ans == s){
            return true;
        }else{
            return false;
        }
    }