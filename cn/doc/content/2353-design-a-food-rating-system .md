<p>设计一个支持下述操作的食物评分系统：</p>

<ul> 
 <li><strong>修改</strong> 系统中列出的某种食物的评分。</li> 
 <li>返回系统中某一类烹饪方式下评分最高的食物。</li> 
</ul>

<p>实现 <code>FoodRatings</code> 类：</p>

<ul> 
 <li><code>FoodRatings(String[] foods, String[] cuisines, int[] ratings)</code> 初始化系统。食物由 <code>foods</code>、<code>cuisines</code> 和 <code>ratings</code> 描述，长度均为 <code>n</code> 。 </li>
</ul>

    <ul>
    	<li><code>foods[i]</code> 是第 <code>i</code> 种食物的名字。</li>
    	<li><code>cuisines[i]</code> 是第 <code>i</code> 种食物的烹饪方式。</li>
    	<li><code>ratings[i]</code> 是第 <code>i</code> 种食物的最初评分。</li>
    </ul>
    </li>
    <li><code>void changeRating(String food, int newRating)</code> 修改名字为 <code>food</code> 的食物的评分。</li>
    <li><code>String highestRated(String cuisine)</code> 返回指定烹饪方式 <code>cuisine</code> 下评分最高的食物的名字。如果存在并列，返回 <strong>字典序较小</strong> 的名字。</li>


<p>注意，字符串 <code>x</code> 的字典序比字符串 <code>y</code> 更小的前提是：<code>x</code> 在字典中出现的位置在 <code>y</code> 之前，也就是说，要么 <code>x</code> 是 <code>y</code> 的前缀，或者在满足&nbsp;<code>x[i] != y[i]</code> 的第一个位置 <code>i</code> 处，<code>x[i]</code> 在字母表中出现的位置在 <code>y[i]</code> 之前。</p>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre><strong>输入</strong>
["FoodRatings", "highestRated", "highestRated", "changeRating", "highestRated", "changeRating", "highestRated"]
[[["kimchi", "miso", "sushi", "moussaka", "ramen", "bulgogi"], ["korean", "japanese", "japanese", "greek", "japanese", "korean"], [9, 12, 8, 15, 14, 7]], ["korean"], ["japanese"], ["sushi", 16], ["japanese"], ["ramen", 16], ["japanese"]]
<strong>输出</strong>
[null, "kimchi", "ramen", null, "sushi", null, "ramen"]

<strong>解释</strong>
FoodRatings foodRatings = new FoodRatings(["kimchi", "miso", "sushi", "moussaka", "ramen", "bulgogi"], ["korean", "japanese", "japanese", "greek", "japanese", "korean"], [9, 12, 8, 15, 14, 7]);
foodRatings.highestRated("korean"); // 返回 "kimchi"
                                    // "kimchi" 是分数最高的韩式料理，评分为 9 。
foodRatings.highestRated("japanese"); // 返回 "ramen"
                                      // "ramen" 是分数最高的日式料理，评分为 14 。
foodRatings.changeRating("sushi", 16); // "sushi" 现在评分变更为 16 。
foodRatings.highestRated("japanese"); // 返回 "sushi"
                                      // "sushi" 是分数最高的日式料理，评分为 16 。
foodRatings.changeRating("ramen", 16); // "ramen" 现在评分变更为 16 。
foodRatings.highestRated("japanese"); // 返回 "ramen"
                                      // "sushi" 和 "ramen" 的评分都是 16 。
                                      // 但是，"ramen" 的字典序比 "sushi" 更小。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 2 * 10<sup>4</sup></code></li> 
 <li><code>n == foods.length == cuisines.length == ratings.length</code></li> 
 <li><code>1 &lt;= foods[i].length, cuisines[i].length &lt;= 10</code></li> 
 <li><code>foods[i]</code>、<code>cuisines[i]</code> 由小写英文字母组成</li> 
 <li><code>1 &lt;= ratings[i] &lt;= 10<sup>8</sup></code></li> 
 <li><code>foods</code> 中的所有字符串 <strong>互不相同</strong></li> 
 <li>在对&nbsp;<code>changeRating</code> 的所有调用中，<code>food</code> 是系统中食物的名字。</li> 
 <li>在对&nbsp;<code>highestRated</code> 的所有调用中，<code>cuisine</code> 是系统中 <strong>至少一种</strong> 食物的烹饪方式。</li> 
 <li>最多调用 <code>changeRating</code> 和 <code>highestRated</code> <strong>总计</strong> <code>2 * 10<sup>4</sup></code> 次</li> 
</ul>

<div><div>Related Topics</div><div><li>设计</li><li>哈希表</li><li>有序集合</li><li>堆（优先队列）</li></div></div><br><div><li>👍 44</li><li>👎 0</li></div>