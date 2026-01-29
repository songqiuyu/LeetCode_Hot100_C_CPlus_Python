class Solution {

    unordered_map<char, string> phoneMap{
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"},
    };


public:
    vector<string> letterCombinations(string digits) {
        vector<string> combinations;
        if (digits.empty()) {
            return combinations;
        }

        string combination;
        backtrack(combinations, digits, 0, combination);
        return combinations;


    }

    // 深度优先遍历，访问到最底，保存一下，然后回弹，下一个，使用引用，递归

    void backtrack(vector<string> &combinations, const string& digits, int index, string& combination){
        if(index == digits.length()) {
            combinations.push_back(combination);
        } else {
            char digit = digits[index];
            const string &letters = phoneMap.at(digit);
            for (const char& letter: letters) {
                combination.push_back(letter);
                backtrack(combinations, digits, index + 1, combination);
                combination.pop_back();
            }
        }
    }

};