<p>数组 <code>prices</code> 记录了某芯片近期的交易价格，其中 <code>prices[i]</code> 表示的 <code>i</code> 天该芯片的价格。你只能选择 <strong>某一天</strong> 买入芯片，并选择在 <strong>未来的某一个不同的日子</strong> 卖出该芯片。请设计一个算法计算并返回你从这笔交易中能获取的最大利润。</p>

<p>如果你不能获取任何利润，返回 0。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>prices = [3, 6, 2, 9, 8, 5]
<strong>输出：</strong>7
<strong>解释：</strong>在第 3 天（芯片价格 = 2）买入，在第 4 天（芯片价格 = 9）卖出，最大利润 = 9 - 2 = 7。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>prices = [8, 12, 15, 7, 3, 10]
<strong>输出：</strong>7
<strong>解释：</strong>在第 5 天（芯片价格 = 3）买入，在第 6 天（芯片价格 = 10）卖出，最大利润 = 10 - 3 = 7。
</pre>

<p>&nbsp;</p>

<p><b>提示：</b></p>

<ul> 
 <li><code>0 &lt;= prices.length &lt;= 10^5</code></li> 
 <li><code>0 &lt;= prices[i] &lt;= 10^4</code></li> 
</ul>

<p>&nbsp;</p>

<p><strong>注意：</strong>本题与主站 121 题相同：<a href="https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock/">https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock/</a></p>

<p>&nbsp;</p>

<div><div>Related Topics</div><div><li>数组</li><li>动态规划</li></div></div><br><div><li>👍 382</li><li>👎 0</li></div>