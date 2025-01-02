#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MyCalendar {
public:
    set<pair<int,int>>s;
    MyCalendar() {

    }
    
    bool book(int start, int end) {
        auto a=s.lower_bound({end,0});
        if (a==s.begin()||prev(a)->second<=start){
            s.insert({start,end});
            return true;
        }
        return false;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}