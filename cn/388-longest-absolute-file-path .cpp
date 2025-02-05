#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lengthLongestPath(string input) {
        int cnt=0,sum=0,ans=0;
        vector<int>v;
        string temp;
        stringstream ss(input);
        while (getline(ss,temp,'\n')){
            int pos=0;
            bool wen=temp.find('.')!=string::npos;
            for (int i = 0; i < temp.size(); ++i) {
                if (temp[i]=='\t'){
                    pos++;
                }else{
                    break;
                }
            }
            if (pos==cnt){
                if (!v.empty()){
                    sum-=v.back();
                    v.pop_back();
                }
                v.push_back(temp.size()-pos);
                sum+=temp.size()-pos;
                if (wen)
                    ans= max<int>(ans,sum+v.size()-1);
            }else if (pos<cnt){
                for (int i = 0; i <= cnt - pos; ++i) {
                    sum-=v.back();
                    v.pop_back();
                }
                cnt=pos;
                v.push_back(temp.size()-pos);
                sum+=temp.size()-pos;
                if (wen)
                    ans= max<int>(ans,sum+v.size()-1);
            }else{
                cnt++;
                v.push_back(temp.size()-pos);
                sum+=temp.size()-pos;
                if (wen)
                    ans= max<int>(ans,sum+v.size()-1);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().lengthLongestPath("dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext");
    return 0;
}