class Solution {
public:
    string encode(vector<string>& strs) {
        string k;
        for (const string& i: strs) {
            k.append(to_string(i.size()) + "#" + i);
        }
        return k;
    }

    vector<string> decode(string s) {
        vector<string> o;
        int i=0;
        while (i<s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int n = stoi(s.substr(i,j-i));
            o.push_back(s.substr(j+1,n));
            i=j+1+n;
        }
        return o;
    }
};
