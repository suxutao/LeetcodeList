<p>给你一个整数 <code>n</code> 表示数轴上的房屋数量，编号从 <code>0</code> 到 <code>n - 1</code> 。</p>

<p>另给你一个二维整数数组 <code>offers</code> ，其中 <code>offers[i] = [start<sub>i</sub>, end<sub>i</sub>, gold<sub>i</sub>]</code> 表示第 <code>i</code> 个买家想要以 <code>gold<sub>i</sub></code> 枚金币的价格购买从 <code>start<sub>i</sub></code> 到 <code>end<sub>i</sub></code> 的所有房屋。</p>

<p>作为一名销售，你需要有策略地选择并销售房屋使自己的收入最大化。</p>

<p>返回你可以赚取的金币的最大数目。</p>

<p><strong>注意</strong> 同一所房屋不能卖给不同的买家，并且允许保留一些房屋不进行出售。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>n = 5, offers = [[0,0,1],[0,2,2],[1,3,2]]
<strong>输出：</strong>3
<strong>解释：</strong>
有 5 所房屋，编号从 0 到 4 ，共有 3 个购买要约。
将位于 [0,0] 范围内的房屋以 1 金币的价格出售给第 1 位买家，并将位于 [1,3] 范围内的房屋以 2 金币的价格出售给第 3 位买家。
可以证明我们最多只能获得 3 枚金币。</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>n = 5, offers = [[0,0,1],[0,2,10],[1,3,2]]
<strong>输出：</strong>10
<strong>解释：</strong>有 5 所房屋，编号从 0 到 4 ，共有 3 个购买要约。
将位于 [0,2] 范围内的房屋以 10 金币的价格出售给第 2 位买家。
可以证明我们最多只能获得 10 枚金币。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= offers.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>offers[i].length == 3</code></li> 
 <li><code>0 &lt;= start<sub>i</sub> &lt;= end<sub>i</sub> &lt;= n - 1</code></li> 
 <li><code>1 &lt;= gold<sub>i</sub> &lt;= 10<sup>3</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>二分查找</li><li>动态规划</li><li>排序</li></div></div><br><div><li>👍 51</li><li>👎 0</li></div>