<p>你的初始 <strong>能量</strong> 为 <code>power</code>，初始 <strong>分数</strong> 为&nbsp;<code>0</code>，只有一包令牌以整数数组&nbsp;<code>tokens</code>&nbsp;给出。其中 <code>tokens[i]</code> 是第 <code>i</code> 个令牌的值（下标从 0 开始）。</p>

<p>你的目标是通过有策略地使用这些令牌以&nbsp;<strong>最大化</strong>&nbsp;总 <strong>分数</strong>。在一次行动中，你可以用两种方式中的一种来使用一个&nbsp;<strong>未被使用的</strong> 令牌（但不是对同一个令牌使用两种方式）：</p>

<ul> 
 <li><strong>朝上</strong>：如果你当前&nbsp;<strong>至少</strong> 有&nbsp;<code>tokens[i]</code>&nbsp;点 <strong>能量</strong> ，可以使用令牌 <code>i</code> ，失去&nbsp;<code>tokens[i]</code>&nbsp;点 <strong>能量</strong> ，并得到&nbsp;<code>1</code>&nbsp;<strong>分</strong> 。</li> 
 <li><strong>朝下</strong>：如果你当前至少有&nbsp;<code>1</code>&nbsp;<strong>分 </strong>，可以使用令牌 <code>i</code> ，获得&nbsp;<code>tokens[i]</code> 点 <strong>能量</strong> ，并失去&nbsp;<code>1</code>&nbsp;<strong>分</strong> 。</li> 
</ul>

<p>在使用 <strong>任意</strong> 数量的令牌后，返回我们可以得到的最大 <strong>分数</strong> 。</p>

<p>&nbsp;</p>

<ol> 
</ol>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>tokens = [100], power = 50
<strong>输出：</strong>0
<strong>解释：</strong>因为你的初始分数为 <span><code>0，</code></span>无法使令牌朝下。你也不能使令牌朝上因为你的能量（<span><code>50</code></span>）比 <span><code>tokens[0]</code></span>&nbsp;少（<span><code>100</code></span>）。</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>tokens = [200,100], power = 150
<strong>输出：</strong>1
<strong>解释：</strong>使令牌 1 正面朝上，能量变为 50，分数变为 1 。
不必使用令牌 0，因为你无法使用它来提高分数。可得到的最大分数是 <span><code>1</code></span>。</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>tokens = [100,200,300,400], power = 200
<strong>输出：</strong>2
<strong>解释：</strong>按下面顺序使用令牌可以得到 2 分：
1. 令牌 0 (<span><code>100</code></span>)正面朝上，能量变为 <span><code>100</code></span> ，分数变为 <span><code>1</code></span>
2. 令牌 3 (<span><code>400</code></span>)正面朝下，能量变为 <span><code>500</code></span> ，分数变为 <span><code>0</code></span>
3. 令牌 1 (<span><code>200</code></span>)正面朝上，能量变为 <span><code>300</code></span> ，分数变为 <span><code>1</code></span>
4. 令牌 2 (<span><code>300</code></span>)正面朝上，能量变为 <span><code>0</code></span> ，分数变为 <span><code>2</code></span>

可得的最大分数是 2。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>0 &lt;= tokens.length &lt;= 1000</code></li> 
 <li><code>0 &lt;= tokens[i],&nbsp;power &lt; 10<sup>4</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数组</li><li>双指针</li><li>排序</li></div></div><br><div><li>👍 100</li><li>👎 0</li></div>