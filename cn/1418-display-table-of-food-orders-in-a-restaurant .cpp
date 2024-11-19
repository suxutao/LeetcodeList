#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    map<int,map<string,int>>m;
    vector<vector<string>>v;
    set<string>s;
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        for (auto &i: orders){
            m[stoi(i[1])][i[2]]++;
            s.insert(i[2]);
        }
        vector<string>vs(s.begin(),s.end()),temp(1+s.size());
        vs.insert(vs.begin(),"Table");
        v.push_back(vs);
        for (auto &item: m){
            temp[0]=to_string(item.first);
            for (int i = 1; i < vs.size(); ++i) {
                temp[i]=to_string(item.second[vs[i]]);
            }
            v.push_back(temp);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}