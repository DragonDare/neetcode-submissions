class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map<string,vector<string>> c;
        for (string i: strs) {
            vector<int> alphabet(26);
            for (char j: i) {
                alphabet[j - 'a']++;
            }
            string s = to_string(alphabet[0]);
            for (int j=1; j<26; j++) {
                s.append("," + to_string(alphabet[j]));
            }
            c[s].push_back(i);
        }
        for (auto v: c) {
            output.push_back(v.second);
        }
        return output;
    }
};
