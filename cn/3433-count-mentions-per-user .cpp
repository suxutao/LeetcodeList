#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> countMentions(int n, vector<vector<string>>& events) {
        vector<int>ans(n);
        unordered_map<string,int>offline;
        ranges::sort(events,[&](auto&a,auto&b){
            if (stoi(a[1])==stoi(b[1])){
                return a>b;
            }
            return stoi(a[1])<stoi(b[1]);
        });
        for (auto &vs: events){
            int timestamp= stoi(vs[1]);
            if (vs[0]=="MESSAGE"){
                if (vs[2]=="HERE"){
                    for (int i = 0; i < n; ++i) {
                        if (offline["id"+to_string(i)]<=timestamp){
                            ans[i]++;
                        }
                    }
                }else if (vs[2]=="ALL"){
                    for (int i = 0; i < n; ++i) {
                        ans[i]++;
                    }
                }else{
                    string temp;
                    stringstream ss(vs[2]);
                    while (getline(ss,temp,' ')){
                        ++ans[stoi(temp.substr(2))];
                    }
                }
            }else{
                offline["id"+vs[2]]=timestamp+60;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}