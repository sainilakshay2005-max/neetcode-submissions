class Solution {
public:
    bool isAnagram(string s, string t) {
               int freq[26]={0};
        for(int i=0;i<s.length();i++){
            freq[s.at(i)-'a']++;
        }
        
        for(int i=0;i<t.length();i++){
            freq[t.at(i)-'a']--;
        }
        for(int k=0;k<26;k++){
            if(freq[k]!=0){
                return false;
            }
            
        }
        
                return true;
    }
      
    
};
