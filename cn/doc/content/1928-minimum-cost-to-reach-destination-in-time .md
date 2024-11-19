<p>一个国家有 <code>n</code>&nbsp;个城市，城市编号为&nbsp;<code>0</code>&nbsp;到&nbsp;<code>n - 1</code>&nbsp;，题目保证 <strong>所有城市</strong>&nbsp;都由双向道路 <b>连接在一起</b>&nbsp;。道路由二维整数数组&nbsp;<code>edges</code>&nbsp;表示，其中&nbsp;<code>edges[i] = [x<sub>i</sub>, y<sub>i</sub>, time<sub>i</sub>]</code>&nbsp;表示城市&nbsp;<code>x<sub>i</sub></code> 和&nbsp;<code>y<sub>i</sub></code>&nbsp;之间有一条双向道路，耗费时间为&nbsp;<code>time<sub>i</sub></code>&nbsp;分钟。两个城市之间可能会有多条耗费时间不同的道路，但是不会有道路两头连接着同一座城市。</p>

<p>每次经过一个城市时，你需要付通行费。通行费用一个长度为 <code>n</code>&nbsp;且下标从 <strong>0</strong>&nbsp;开始的整数数组&nbsp;<code>passingFees</code>&nbsp;表示，其中&nbsp;<code>passingFees[j]</code>&nbsp;是你经过城市 <code>j</code>&nbsp;需要支付的费用。</p>

<p>一开始，你在城市&nbsp;<code>0</code>&nbsp;，你想要在 <code>maxTime</code>&nbsp;<strong>分钟以内</strong>&nbsp;（包含 <code>maxTime</code>&nbsp;分钟）到达城市&nbsp;<code>n - 1</code>&nbsp;。旅行的 <strong>费用</strong> 为你经过的所有城市 <strong>通行费之和</strong>&nbsp;（<strong>包括</strong>&nbsp;起点和终点城市的通行费）。</p>

<p>给你&nbsp;<code>maxTime</code>，<code>edges</code>&nbsp;和&nbsp;<code>passingFees</code>&nbsp;，请你返回完成旅行的&nbsp;<strong>最小费用</strong>&nbsp;，如果无法在&nbsp;<code>maxTime</code>&nbsp;分钟以内完成旅行，请你返回&nbsp;<code>-1</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/06/04/leetgraph1-1.png" style="width: 371px; height: 171px;" /></p>

<pre>
<b>输入：</b>maxTime = 30, edges = [[0,1,10],[1,2,10],[2,5,10],[0,3,1],[3,4,10],[4,5,15]], passingFees = [5,1,2,20,20,3]
<b>输出：</b>11
<b>解释：</b>最优路径为 0 -&gt; 1 -&gt; 2 -&gt; 5 ，总共需要耗费 30 分钟，需要支付 11 的通行费。
</pre>

<p><strong>示例 2：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode.com/uploads/2021/06/04/copy-of-leetgraph1-1.png" style="width: 371px; height: 171px;" /></strong></p>

<pre>
<b>输入：</b>maxTime = 29, edges = [[0,1,10],[1,2,10],[2,5,10],[0,3,1],[3,4,10],[4,5,15]], passingFees = [5,1,2,20,20,3]
<b>输出：</b>48
<b>解释：</b>最优路径为 0 -&gt; 3 -&gt; 4 -&gt; 5 ，总共需要耗费 26 分钟，需要支付 48 的通行费。
你不能选择路径 0 -&gt; 1 -&gt; 2 -&gt; 5 ，因为这条路径耗费的时间太长。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<b>输入：</b>maxTime = 25, edges = [[0,1,10],[1,2,10],[2,5,10],[0,3,1],[3,4,10],[4,5,15]], passingFees = [5,1,2,20,20,3]
<b>输出：</b>-1
<b>解释：</b>无法在 25 分钟以内从城市 0 到达城市 5 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= maxTime &lt;= 1000</code></li> 
 <li><code>n == passingFees.length</code></li> 
 <li><code>2 &lt;= n &lt;= 1000</code></li> 
 <li><code>n - 1 &lt;= edges.length &lt;= 1000</code></li> 
 <li><code>0 &lt;= x<sub>i</sub>, y<sub>i</sub> &lt;= n - 1</code></li> 
 <li><code>1 &lt;= time<sub>i</sub> &lt;= 1000</code></li> 
 <li><code>1 &lt;= passingFees[j] &lt;= 1000</code>&nbsp;</li> 
 <li>图中两个节点之间可能有多条路径。</li> 
 <li>图中不含有自环。</li> 
</ul>

<div><div>Related Topics</div><div><li>图</li><li>数组</li><li>动态规划</li></div></div><br><div><li>👍 59</li><li>👎 0</li></div>