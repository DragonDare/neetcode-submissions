class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> u;
        vector<vector<string>> output;

        for (auto const &i: strs){
            vector<int> k(26,0);
            for (auto const &j: i) ++k[j-'a'];
            u[hashKey(k)].push_back(i);
        }

        for (auto const& i: u) output.push_back(i.second);

        return output;
    }

    string hashKey(vector<int> k){
        string s;
        for (auto const& i: k) s+=to_string(i)+'#';
        return s;
    }
};
