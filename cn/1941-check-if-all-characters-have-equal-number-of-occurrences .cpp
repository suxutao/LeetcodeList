#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<char,int>m;
    bool areOccurrencesEqual(string s) {
        int temp;
        for (auto &item: s){
            m[item]++;
            temp=m[item];
        }
        for (auto &item: m){
            if (item.second!=temp)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}