#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class FrequencyTracker {
public:
    map<int,int>m,m2;
    FrequencyTracker() {

    }
    
    void add(int number) {
        m2[m[number]]--;
        m[number]++;
        m2[m[number]]++;
    }
    
    void deleteOne(int number) {
        if (m[number]) {
            m2[m[number]]--;
            m[number]--;
            m2[m[number]]++;
        }
    }
    
    bool hasFrequency(int frequency) {
        return m2[frequency];
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}