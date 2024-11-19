#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    deque<pii>q;
    int findWinningPlayer(vector<int>& skills, int k) {
        if (k>skills.size())
            return find(skills.begin(), skills.end(),*max_element(skills.begin(), skills.end()))-skills.begin();
        int cnt=0,hao=-1;
        for (int i = 0; i < skills.size(); ++i) {
            q.push_back({skills[i],i});
        }
        while (cnt<k){
            auto a=q.front();q.pop_front();
            auto b=q.front();q.pop_front();
            if (a<b)
                swap(a,b);
            q.push_back(b);
            q.push_front(a);
            if (a.second!=hao){
                cnt=1;
                hao=a.second;
            }else{
                ++cnt;
            }
        }
        return hao;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}