#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        ranges::sort(tasks);
        ranges::sort(workers);
        int m = workers.size();
        auto check = [&](int k) -> bool {
            int i = 0, p = pills;
            deque<int> valid_tasks;
            for (int j = m - k; j < m; j++) {
                int w = workers[j];
                while (i < k && tasks[i] <= w + strength) {
                    valid_tasks.push_back(tasks[i]);
                    i++;
                }
                if (valid_tasks.empty()) {
                    return false;
                }
                if (w >= valid_tasks.front()) {
                    valid_tasks.pop_front();
                    continue;
                }
                if (p == 0) {
                    return false;
                }
                p--;
                valid_tasks.pop_back();
            }
            return true;
        };
        int left = 0, right = min((int) tasks.size(), m) + 1;
        while (left + 1 < right) {
            int mid = left + (right - left) / 2;
            (check(mid) ? left : right) = mid;
        }
        return left;
    }
};;
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}