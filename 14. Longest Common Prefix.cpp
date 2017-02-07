class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) { 
        if (strs.size() == 0) return string();
        int i;
        for (i = 0; i < strs[0].length(); i++) { // strs[0].length: 第[0]個string有多少字元
            for (int j = 1; j < strs.size(); j++) { // strs.size: 總共有多少個string要比較
                if (strs[j][i] != strs[0][i])
                    return strs[0].substr(0, i); // 如果比較到中途有不相同的地方就直接return目前為止相同的部分
            }
        }
        return strs[0].substr(0, i);
    }
};

/*
    #include <iostream>
    #include <vector> //  要include這個才能使用vector<string>
    using namespace std;

    string longestCommonPrefix(vector<string>& strs) {
            if (strs.size() == 0) return string();
            int i;
            for (i = 0; i < strs[0].length(); ++i) {
                for (int j = 1; j < strs.size(); ++j) {
                    if (strs[j][i] != strs[0][i])
                        return strs[0].substr(0, i);
                }
            }
            return strs[0].substr(0, i);
        }
    int main()
    {
        vector<string> s(3);
        s[0] = "abca";
        s[1] = "abcdd";
        s[2] = "abcsdsfd";
        cout << longestCommonPrefix(s) << endl;
        return 0;
    }

    vector<string> str(3);
    str[0] = "abca";
    str[1] = "abcdd";
    str[2] = "abcsdsfd";
    
    str.size() = 3 (因為總共有三個字串要比較: "abca", "abcdd", "abcsdsfd")
    str[0].length = 4 (因為abca總共4個字元)
    str[1].length = 5 (因為abcdd總共5個字元)
    str[2].length = 8 (因為abcsdsfd總共8個字元)
*/
