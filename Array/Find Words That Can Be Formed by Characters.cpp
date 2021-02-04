class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>m;
        
        for(auto x:chars){
            m[x]++;
        }
        
        int len=0;
        
        for(auto ch:words){
            int flag = true;
            unordered_map<char,int>mp = m;
            
            for(auto c:ch){
                if(mp[c] == 0)
                {
                    flag=false;
                    break;
                }
                cout<<c;
                mp[c]--;
            }
            
            if(flag)
            {
                len+= ch.length();
            }
        }
        return len;
    }
};
    
    
    
    
