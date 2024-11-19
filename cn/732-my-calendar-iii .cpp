#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MyCalendarThree {
public:
    map<int,int>m;
    MyCalendarThree() {

    }
    
    int book(int startTime, int endTime) {
        ++m[startTime];
        --m[endTime];
        int ans=0,sum=0;
        for (auto&[_,a]:m) {
            sum+=a;
            ans= max(ans,sum);
        }
        return ans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}