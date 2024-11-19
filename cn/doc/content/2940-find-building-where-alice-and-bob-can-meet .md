<p>给你一个下标从 <strong>0</strong>&nbsp;开始的正整数数组&nbsp;<code>heights</code>&nbsp;，其中&nbsp;<code>heights[i]</code>&nbsp;表示第 <code>i</code>&nbsp;栋建筑的高度。</p>

<p>如果一个人在建筑&nbsp;<code>i</code>&nbsp;，且存在&nbsp;<code>i &lt; j</code>&nbsp;的建筑&nbsp;<code>j</code>&nbsp;满足&nbsp;<code>heights[i] &lt; heights[j]</code>&nbsp;，那么这个人可以移动到建筑&nbsp;<code>j</code>&nbsp;。</p>

<p>给你另外一个数组&nbsp;<code>queries</code>&nbsp;，其中&nbsp;<code>queries[i] = [a<sub>i</sub>, b<sub>i</sub>]</code>&nbsp;。第&nbsp;<code>i</code>&nbsp;个查询中，Alice 在建筑&nbsp;<code>a<sub>i</sub></code> ，Bob 在建筑&nbsp;<code>b<sub>i</sub></code><sub>&nbsp;</sub>。</p>

<p>请你能返回一个数组&nbsp;<code>ans</code>&nbsp;，其中&nbsp;<code>ans[i]</code>&nbsp;是第&nbsp;<code>i</code>&nbsp;个查询中，Alice 和 Bob 可以相遇的&nbsp;<strong>最左边的建筑</strong>&nbsp;。如果对于查询&nbsp;<code>i</code>&nbsp;，Alice<em> </em>和<em> </em>Bob 不能相遇，令&nbsp;<code>ans[i]</code> 为&nbsp;<code>-1</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<b>输入：</b>heights = [6,4,8,5,2,7], queries = [[0,1],[0,3],[2,4],[3,4],[2,2]]
<b>输出：</b>[2,5,-1,5,2]
<b>解释：</b>第一个查询中，Alice 和 Bob 可以移动到建筑 2 ，因为 heights[0] &lt; heights[2] 且 heights[1] &lt; heights[2] 。
第二个查询中，Alice 和 Bob 可以移动到建筑 5 ，因为 heights[0] &lt; heights[5] 且 heights[3] &lt; heights[5] 。
第三个查询中，Alice 无法与 Bob 相遇，因为 Alice 不能移动到任何其他建筑。
第四个查询中，Alice 和 Bob 可以移动到建筑 5 ，因为 heights[3] &lt; heights[5] 且 heights[4] &lt; heights[5] 。
第五个查询中，Alice 和 Bob 已经在同一栋建筑中。
对于 ans[i] != -1 ，ans[i] 是 Alice 和 Bob 可以相遇的建筑中最左边建筑的下标。
对于 ans[i] == -1 ，不存在 Alice 和 Bob 可以相遇的建筑。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<b>输入：</b>heights = [5,3,8,2,6,1,4,6], queries = [[0,7],[3,5],[5,2],[3,0],[1,6]]
<b>输出：</b>[7,6,-1,4,6]
<strong>解释：</strong>第一个查询中，Alice 可以直接移动到 Bob 的建筑，因为 heights[0] &lt; heights[7] 。
第二个查询中，Alice 和 Bob 可以移动到建筑 6 ，因为 heights[3] &lt; heights[6] 且 heights[5] &lt; heights[6] 。
第三个查询中，Alice 无法与 Bob 相遇，因为 Bob 不能移动到任何其他建筑。
第四个查询中，Alice 和 Bob 可以移动到建筑 4 ，因为 heights[3] &lt; heights[4] 且 heights[0] &lt; heights[4] 。
第五个查询中，Alice 可以直接移动到 Bob 的建筑，因为 heights[1] &lt; heights[6] 。
对于 ans[i] != -1 ，ans[i] 是 Alice 和 Bob 可以相遇的建筑中最左边建筑的下标。
对于 ans[i] == -1 ，不存在 Alice 和 Bob 可以相遇的建筑。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= heights.length &lt;= 5 * 10<sup>4</sup></code></li> 
 <li><code>1 &lt;= heights[i] &lt;= 10<sup>9</sup></code></li> 
 <li><code>1 &lt;= queries.length &lt;= 5 * 10<sup>4</sup></code></li> 
 <li><code>queries[i] = [a<sub>i</sub>, b<sub>i</sub>]</code></li> 
 <li><code>0 &lt;= a<sub>i</sub>, b<sub>i</sub> &lt;= heights.length - 1</code></li> 
</ul>

<div><div>Related Topics</div><div><li>栈</li><li>树状数组</li><li>线段树</li><li>数组</li><li>二分查找</li><li>单调栈</li><li>堆（优先队列）</li></div></div><br><div><li>👍 31</li><li>👎 0</li></div>