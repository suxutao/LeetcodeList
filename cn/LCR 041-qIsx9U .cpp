#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MovingAverage {
public:
    /** Initialize your data structure here. */
    vector<int>v;int sz,l=0,r=0;
    double sum=0;
    MovingAverage(int size) {
        sz=size;
    }
    
    double next(int val) {
        v.push_back(val);
        sum+=v[r++];
        if (r-l>sz)
            sum-=v[l++];
        return sum/(r-l);
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}