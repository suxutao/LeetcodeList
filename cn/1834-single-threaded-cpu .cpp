#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class com{
public:
    bool operator()(vector<int>&a,vector<int>&b){
        if (a[1]==b[1])
            return a[2]>b[2];
        return a[1]>b[1];
    }
};
class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        for (int i = 0; i < tasks.size(); ++i) {
            tasks[i].push_back(i);
        }
        priority_queue<vector<int>,vector<vector<int>>,com>q;
        vector<int>v;
        sort(tasks.begin(), tasks.end());
        long long time=tasks[0][0],pos=0,n=tasks.size();
        while (v.size()<n){
            while (pos<n&&tasks[pos][0]<=time){
                q.push(tasks[pos++]);
            }
            if (q.empty()){
                time=tasks[pos][0];
                continue;
            }
            v.push_back(q.top()[2]);
            time+=q.top()[1];
            q.pop();
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v={{19,13}, {16,9}, {21,10}, {32,25}, {37,4}, {49,24}, {2,15}, {38,41}, {37,34}, {33,6}, {45,4}, {18,18}, {46,39}, {12,24}};
    Solution().getOrder(v);
    return 0;
}