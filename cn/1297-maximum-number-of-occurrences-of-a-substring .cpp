#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool f(string&s,int num){
        return unordered_set<char>(s.begin(),s.end()).size()<=num;
    }
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string,int>m;
        for (int i = 0; i <= s.size() - minSize; ++i) {
            string temp=s.substr(i,minSize);
            if (f(temp,maxLetters)){
                ++m[temp];
            }
        }
        int ans=0;
        for (auto &[_,a]: m){
            ans= max(ans,a);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}