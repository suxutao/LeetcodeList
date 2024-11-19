#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class SmallestInfiniteSet {
public:
    vector<int>v;
    SmallestInfiniteSet() {
        v.resize(1001);
        for (int i = 0; i < 1001; ++i) {
            v[i]=i;
        }
    }
    
    int popSmallest() {
        for (int i = 1; i < 1001; ++i) {
            if (v[i]){
                v[i]=0;
                return i;
            }
        }
        return 0;
    }
    
    void addBack(int num) {
        v[num]=1;
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}