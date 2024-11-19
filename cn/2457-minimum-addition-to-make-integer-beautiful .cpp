#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sub(long long n)//位数求和
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    long long makeIntegerBeautiful(long long n, int target)
    {
        if (sub(n) <= target)
            return 0;
        long long i = 10;
        long long t=n;//保存原值

        while (sub(n) > target)
        {
            n=n/i;//去掉当前末位(即末位变为0) 第一轮123-> 12       第二轮130->1
            n++;//进位                      第一轮12+1->13        第二轮1+1->2
            n*=i;//末尾变为0                第一轮13*10->130       第二轮2*100->200
            i*=10;//每一次进位
        }
        return n-t;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    cout<<Solution().makeIntegerBeautiful(590,1);
    return 0;
}