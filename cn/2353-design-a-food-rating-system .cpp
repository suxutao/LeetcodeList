#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class FoodRatings {
public:
    struct com{
        bool operator()(pair<int,string>&a,pair<int,string>&b){
            if (a.first==b.first)
                return a.second>b.second;
            return a.first<b.first;
        }
    };
    unordered_map<string,pair<int,string>>m;
    unordered_map<string,priority_queue<pair<int,string>,vector<pair<int,string>>,com>>q;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (int i = 0; i < foods.size(); ++i) {
            m[foods[i]]={ratings[i],cuisines[i]};
            q[cuisines[i]].push({ratings[i],foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        m[food].first=newRating;
        q[m[food].second].push({newRating,food});
    }
    
    string highestRated(string cuisine) {
        while (m[q[cuisine].top().second].first!=q[cuisine].top().first){
            q[cuisine].pop();
        }
        return q[cuisine].top().second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}