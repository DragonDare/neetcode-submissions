class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> number;
        unordered_map<char, int> numberTwo;
        for (char i: s) {
            if (number.count(i)) {
                number[i]++;
                cout<<i<<number[i]<<endl;
            }
            else {
                cout<<i<<endl;
                number[i] = 1;
            }
        }
        for (char i: t) {
            if (numberTwo.count(i)) {
                numberTwo[i]++;
            }
            else {
                numberTwo[i] = 1;
            }
        }
        if (number.size() > numberTwo.size()) {
            for (char i: s) {
                if (number[i] != numberTwo[i]) {
                    cout<<i<<number[i]<<numberTwo[i];
                    return false;
                }
            }
        } else {
            for (char i: t) {
                if (number[i] != numberTwo[i]) {
                    cout<<i<<number[i]<<numberTwo[i];
                    return false;
                }
            }
        }
        return true;
    }
};
