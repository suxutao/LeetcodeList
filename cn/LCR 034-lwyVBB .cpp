#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int arr['z'+1]{};
        for (int i = 0; i < 26; ++i) {
            arr[order[i]]=i+'a';
        }
        for (auto &item: words){
            for (auto &i: item){
                i=arr[i];
            }
        }
        for (int i = 1; i < words.size(); ++i) {
            if (words[i]<words[i-1])
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}