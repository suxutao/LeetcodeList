#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> s(wordList.begin(), wordList.end());
        if (s.find(endWord) == s.end())
            return {};
        unordered_map<string, int>m;
        queue<string> q;
        vector<vector<string>>vv;
        q.push(beginWord);
        m.insert(pair<string, int>(beginWord, 1));
        while(!q.empty()) {
            string word = q.front();
            q.pop();
            int path = m[word];
            for (int i = 0; i < word.size(); i++) {
                string newWord = word;
                for (int j = 0 ; j < 26; j++) {
                    newWord[i] = j + 'a';
                    if (newWord == endWord)
                        return vv;
                    if (s.find(newWord) != s.end()&& m.find(newWord) == m.end()) {
                        m.insert(pair<string, int>(newWord, path + 1));
                        q.push(newWord);
                    }
                }
            }
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}