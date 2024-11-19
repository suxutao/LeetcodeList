#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>>v;
        int pf=0,ps=0;
        while (pf<firstList.size()&&ps<secondList.size()){
            int start= max(firstList[pf][0],secondList[ps][0]);
            int end= min(firstList[pf][1],secondList[ps][1]);
            if (start<=end)
                v.push_back({start,end});
            if (firstList[pf][1]<secondList[ps][1])
                pf++;
            else
                ps++;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}