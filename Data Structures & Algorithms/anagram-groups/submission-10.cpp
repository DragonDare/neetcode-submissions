class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map<string, vector<string>> u;

        for (int i=0; i<strs.size(); ++i){
            vector<int> a(26,0);
            for (int j=0; j<strs[i].size(); ++j) ++a[strs[i][j] - 'a'];
            u[vector2string(a)].push_back(strs[i]);
        }

        for (const auto& i: u) output.push_back(i.second);

        return output;
    }

    string vector2string(vector<int> a){
        string s;
        for (int i=0; i<26; ++i) s+=to_string(a[i]) + '#';

        return s;
    }
};
