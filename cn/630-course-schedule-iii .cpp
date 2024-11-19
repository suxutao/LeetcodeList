#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), [](const auto &a, const auto &b) {
            return a[1] < b[1]; // 按照 last_day 从小到大排序
        });
        priority_queue<int> pq; // 最大堆
        int day = 0; // 已消耗时间
        for (auto &c: courses) {
            int duration = c[0], last_day = c[1];
            if (day + duration <= last_day) { // 没有超过 last_day，直接学习
                day += duration;
                pq.push(duration);
            } else if (!pq.empty() && duration < pq.top()) { // 该课程的时间比之前的最长时间要短
                // 反悔，撤销之前 duration 最长的课程，改为学习该课程
                // 节省出来的时间，能在后面上完更多的课程
                day -= pq.top() - duration;
                pq.pop();
                pq.push(duration);
            }
        }
        return pq.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}