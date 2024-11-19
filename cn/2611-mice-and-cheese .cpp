#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        int n=reward1.size(),a1=0,a2=0,score=0;
        priority_queue<pair<int,int>>q;
        for (int i = 0; i < n; ++i) {
            q.emplace(abs(reward1[i]-reward2[i]),i);
        }
        while (!q.empty()){
            auto [a,b]=q.top();
            q.pop();
            if (reward1[b]>reward2[b]){
                if (a1<k){
                    a1++;
                    score+=reward1[b];
                }else{
                    score+=reward2[b];
                }
            }else{
                if (a2<n-k){
                    a2++;
                    score+=reward2[b];
                }else{
                    score+=reward1[b];
                }
            }
        }
        return score;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>a={1,1,3,4},b={4,4,1,1};
    Solution().miceAndCheese(a,b,2);
    return 0;
}