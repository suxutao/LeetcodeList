#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string discountPrices(string sentence, int discount) {
        vector<string>v;
        stringstream ss(sentence);
        string temp,ans;
        regex e("^\\$\\d+$");
        while (getline(ss,temp,' ')){
            if (regex_match(temp,e)){
                double price= stod(temp.substr(1));
                price=price*(1-discount/100.);
                ostringstream oss;
                oss << fixed << setprecision(2) << price;
                v.push_back("$"+ oss.str());
            }else{
                v.push_back(temp);
            }
        }
        for (int i = 0; i < v.size() - 1; ++i) {
            ans.append(v[i]);
            ans.push_back(' ');
        }
        ans.append(v.back());
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}