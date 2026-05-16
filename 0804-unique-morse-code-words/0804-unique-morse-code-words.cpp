class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char,string> s={{'a',".-"},{'b',"-..."},{'c',"-.-."},{'d',"-.."},{'e',"."},{'f',"..-."},{'g',"--."},{'h',"...."},{'i',".."},{'j',".---"},{'k',"-.-"},{'l',".-.."},{'m',"--"},{'n',"-."},{'o',"---"},{'p',".--."},{'q',"--.-"},{'r',".-."},{'s',"..."},{'t',"-"},{'u',"..-"},{'v',"...-"},{'w',".--"},{'x',"-..-"},{'y',"-.--"},{'z',"--.."}};
        unordered_set<string> ss;
        for(int i=0;i<words.size();i++)
        {
            string temp="";
            for(int j=0;j<words[i].size();j++)
            {
                temp+=s[words[i][j]];
            }
            ss.insert(temp);
        }
return ss.size();
    }
};