#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int makeArrayIncreasing(vector<int> &a, vector<int> &b) {
        a.push_back(INT_MAX); // 简化代码逻辑
        sort(b.begin(), b.end());
        b.erase(unique(b.begin(), b.end()), b.end()); // 原地去重
        int n = a.size(), memo[n];
        memset(memo, 0, sizeof(memo)); // 0 表示还没有计算过
        function<int(int)> dfs = [&](int i) -> int {
            int &res = memo[i]; // 注意这里是引用，下面会直接修改 memo[i]
            if (res) return res; // 之前计算过了
            int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
            res = k < i ? INT_MIN : 0; // 小于 a[i] 的数全部替换
            if (i && a[i - 1] < a[i]) // 无替换
                res = max(res, dfs(i - 1));
            for (int j = i - 2; j >= i - k - 1 && j >= 0; --j)
                if (b[k - (i - j - 1)] > a[j])
                    // a[j+1] 到 a[i-1] 替换成 b[k-(i-j-1)] 到 b[k-1]
                    res = max(res, dfs(j));
            return ++res; // 把 +1 移到这里，表示 a[i] 不替换
        };
        int ans = dfs(n - 1); // 注意 a 已经添加了一个元素
        return ans < 0 ? -1 : n - ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}