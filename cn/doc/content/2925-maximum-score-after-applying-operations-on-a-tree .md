<p>有一棵 <code>n</code>&nbsp;个节点的无向树，节点编号为 <code>0</code>&nbsp;到 <code>n - 1</code>&nbsp;，根节点编号为 <code>0</code>&nbsp;。给你一个长度为 <code>n - 1</code>&nbsp;的二维整数数组&nbsp;<code>edges</code>&nbsp;表示这棵树，其中&nbsp;<code>edges[i] = [a<sub>i</sub>, b<sub>i</sub>]</code>&nbsp;表示树中节点&nbsp;<code>a<sub>i</sub></code>&nbsp;和&nbsp;<code>b<sub>i</sub></code>&nbsp;有一条边。</p>

<p>同时给你一个长度为 <code>n</code>&nbsp;下标从 <strong>0</strong>&nbsp;开始的整数数组&nbsp;<code>values</code>&nbsp;，其中&nbsp;<code>values[i]</code>&nbsp;表示第 <code>i</code>&nbsp;个节点的值。</p>

<p>一开始你的分数为 <code>0</code>&nbsp;，每次操作中，你将执行：</p>

<ul> 
 <li>选择节点&nbsp;<code>i</code>&nbsp;。</li> 
 <li>将&nbsp;<code>values[i]</code>&nbsp;加入你的分数。</li> 
 <li>将&nbsp;<code>values[i]</code>&nbsp;变为&nbsp;<code>0</code>&nbsp;。</li> 
</ul>

<p>如果从根节点出发，到任意叶子节点经过的路径上的节点值之和都不等于 0 ，那么我们称这棵树是 <strong>健康的</strong>&nbsp;。</p>

<p>你可以对这棵树执行任意次操作，但要求执行完所有操作以后树是&nbsp;<strong>健康的</strong>&nbsp;，请你返回你可以获得的 <strong>最大分数</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2023/10/11/graph-13-1.png" style="width: 515px; height: 443px;" /></p>

<pre>
<b>输入：</b>edges = [[0,1],[0,2],[0,3],[2,4],[4,5]], values = [5,2,5,2,1,1]
<b>输出：</b>11
<b>解释：</b>我们可以选择节点 1 ，2 ，3 ，4 和 5 。根节点的值是非 0 的。所以从根出发到任意叶子节点路径上节点值之和都不为 0 。所以树是健康的。你的得分之和为 values[1] + values[2] + values[3] + values[4] + values[5] = 11 。
11 是你对树执行任意次操作以后可以获得的最大得分之和。
</pre>

<p><strong class="example">示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2023/10/11/graph-14-2.png" style="width: 522px; height: 245px;" /></p>

<pre>
<b>输入：</b>edges = [[0,1],[0,2],[1,3],[1,4],[2,5],[2,6]], values = [20,10,9,7,4,3,5]
<b>输出：</b>40
<b>解释：</b>我们选择节点 0 ，2 ，3 和 4 。
- 从 0 到 4 的节点值之和为 10 。
- 从 0 到 3 的节点值之和为 10 。
- 从 0 到 5 的节点值之和为 3 。
- 从 0 到 6 的节点值之和为 5 。
所以树是健康的。你的得分之和为 values[0] + values[2] + values[3] + values[4] = 40 。
40 是你对树执行任意次操作以后可以获得的最大得分之和。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>2 &lt;= n &lt;= 2 * 10<sup>4</sup></code></li> 
 <li><code>edges.length == n - 1</code></li> 
 <li><code>edges[i].length == 2</code></li> 
 <li><code>0 &lt;= a<sub>i</sub>, b<sub>i</sub> &lt; n</code></li> 
 <li><code>values.length == n</code></li> 
 <li><code>1 &lt;= values[i] &lt;= 10<sup>9</sup></code></li> 
 <li>输入保证&nbsp;<code>edges</code>&nbsp;构成一棵合法的树。</li> 
</ul>

<div><div>Related Topics</div><div><li>树</li><li>深度优先搜索</li><li>动态规划</li></div></div><br><div><li>👍 27</li><li>👎 0</li></div>