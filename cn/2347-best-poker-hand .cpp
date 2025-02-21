#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int,int>m;
        for (auto &item: ranks)
            ++m[item];
        int mx=0;
        for (auto &item: m)
            mx= max(mx,item.second);
        if (suits[0]==suits[1]&&suits[2]==suits[1]&&suits[2]==suits[3]&&suits[3]==suits[4])
            return "Flush";
        if (mx>=3)
            return "Three of a Kind";
        else if (mx==2)
            return "Pair";
        else
            return "High Card";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}