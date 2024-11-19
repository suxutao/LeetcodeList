#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int>d;
        sort(deck.begin(), deck.end(),greater<>());
        for (int i = 0; ; ++i) {
            d.push_back(deck[i]);
            if (i==deck.size()-1)
                break;
            d.push_back(d.front());
            d.pop_front();
        }
        return vector<int>(d.rbegin(),d.rend());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}