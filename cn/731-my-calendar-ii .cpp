#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MyCalendarTwo {
public:
    map<int,int>m;
    MyCalendarTwo() {

    }
    
    bool book(int start, int end) {
        int sum=0;
        ++m[start];--m[end];
        for (auto &[a,b]: m){
            sum+=b;
            if (sum>2){
                --m[start];
                ++m[end];
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}