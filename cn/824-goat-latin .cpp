#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string toGoatLatin(string sentence) {
        int i=1;
        string ans,temp;
        stringstream ss(sentence);
        bool arr['z'+1]{};
        arr['a']=1;
        arr['e']=1;
        arr['i']=1;
        arr['o']=1;
        arr['u']=1;
        arr['A']=1;
        arr['E']=1;
        arr['I']=1;
        arr['O']=1;
        arr['U']=1;
        while (getline(ss,temp,' ')){
            if (arr[temp[0]]){
                temp+="ma";
            }else{
                temp.push_back(temp[0]);
                temp=temp.substr(1)+"ma";
            }
            ans+=temp+string(i,'a')+" ";
            ++i;
        }
        ans.pop_back();
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}