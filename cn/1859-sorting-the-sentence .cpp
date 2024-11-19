#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        vector<string>v;
        string temp,ans;
        while (getline(ss,temp,' ')){
            v.push_back(temp);
        }
        std::sort(v.begin(), v.end(),[](string&a,string&b){
            return a.back()<b.back();
        });
        for (int i =0;i<v.size();++i){
            temp=v[i];
            temp.pop_back();
            ans+=temp;
            if (i!=v.size()-1)
                ans+=" ";
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}