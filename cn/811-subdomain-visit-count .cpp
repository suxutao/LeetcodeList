#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string>ans;
    map<string,int>m;
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        for (auto &i: cpdomains){
            int pos=i.find(' ');
            int num= stoi(i.substr(0, pos));
            ++pos;
            while (find(i.begin()+pos,i.end(),'.')!=i.end()){
                m[i.substr(pos,i.length()-pos)]+=num;
                pos=find(i.begin()+pos,i.end(),'.')-i.begin()+1;
            }
            m[i.substr(pos,i.length()-pos)]+=num;
        }
        for (const auto &item: m){
            ans.push_back(to_string(item.second)+" "+item.first);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<string >v={"9001 discuss.leetcode.com"};
    Solution().subdomainVisits(v);
    return 0;
}