#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),[](vector<int>&a,vector<int>&b){
            if (a[0]==b[0])
                return a[1]<b[1];
            return a[0]>b[0];
        });
        vector<vector<int>>l;
        for (int i = 0; i < people.size(); ++i) {
            if (1){
                l.insert(l.begin()+people[i][1],people[i]);
            }
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}