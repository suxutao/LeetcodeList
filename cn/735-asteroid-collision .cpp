#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>st;
        for (auto &i: asteroids){
            if (st.empty())
                st.push_back(i);
            else{
                bool b=true;
                while (i<0&&!st.empty()&&st.back()>0){
                    if (-i==st.back()){
                        st.pop_back();
                        b= false;
                        break;
                    }else if (-i>st.back()){
                        st.pop_back();
                    }else{
                        b= false;
                        break;
                    }
                }
                if (b) st.push_back(i);
            }
        }
        return st;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{5,10,-5};
    Solution().asteroidCollision(v);
    return 0;
}