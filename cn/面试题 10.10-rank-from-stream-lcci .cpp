#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class StreamRank {
public:
    vector<int>v;
    StreamRank() {
        
    }
    
    void track(int x) {
        v.insert(lower_bound(v.begin(), v.end(),x),x);
    }
    
    int getRankOfNumber(int x) {
        return upper_bound(v.begin(), v.end(),x)-v.begin();
    }
};

/**
 * Your StreamRank object will be instantiated and called as such:
 * StreamRank* obj = new StreamRank();
 * obj->track(x);
 * int param_2 = obj->getRankOfNumber(x);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}