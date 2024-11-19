#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class WordsFrequency {
public:
    unordered_map<string,int>m;
    WordsFrequency(vector<string>& book) {
        for (auto &item: book){
            m[item]++;
        }
    }
    
    int get(string word) {
        return m[word];
    }
};

/**
 * Your WordsFrequency object will be instantiated and called as such:
 * WordsFrequency* obj = new WordsFrequency(book);
 * int param_1 = obj->get(word);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}