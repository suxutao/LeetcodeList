<p>给你一个 <code>n</code>&nbsp;个节点的树（也就是一个无环连通无向图），节点编号从 <code>0</code>&nbsp;到 <code>n - 1</code>&nbsp;，且恰好有 <code>n - 1</code>&nbsp;条边，每个节点有一个值。树的 <strong>根节点</strong>&nbsp;为 0 号点。</p>

<p>给你一个整数数组&nbsp;<code>nums</code>&nbsp;和一个二维数组&nbsp;<code>edges</code>&nbsp;来表示这棵树。<code>nums[i]</code>&nbsp;表示第&nbsp;<code>i</code>&nbsp;个点的值，<code>edges[j] = [u<sub>j</sub>, v<sub>j</sub>]</code>&nbsp;表示节点&nbsp;<code>u<sub>j</sub></code>&nbsp;和节点&nbsp;<code>v<sub>j</sub></code>&nbsp;在树中有一条边。</p>

<p>当&nbsp;<code>gcd(x, y) == 1</code>&nbsp;，我们称两个数&nbsp;<code>x</code> 和&nbsp;<code>y</code>&nbsp;是 <strong>互质的</strong>&nbsp;，其中&nbsp;<code>gcd(x, y)</code>&nbsp;是 <code>x</code>&nbsp;和 <code>y</code>&nbsp;的 <strong>最大公约数</strong>&nbsp;。</p>

<p>从节点&nbsp;<code>i</code>&nbsp;到 <strong>根</strong>&nbsp;最短路径上的点都是节点 <code>i</code>&nbsp;的祖先节点。一个节点 <strong>不是</strong> 它自己的祖先节点。</p>

<p>请你返回一个大小为 <code>n</code>&nbsp;的数组 <code>ans</code>&nbsp;，其中<em>&nbsp;</em><code>ans[i]</code>是离节点&nbsp;<code>i</code>&nbsp;最近的祖先节点且满足<em>&nbsp;</em><code>nums[i]</code> 和<em>&nbsp;</em><code>nums[ans[i]]</code>&nbsp;是 <strong>互质的</strong>&nbsp;，如果不存在这样的祖先节点，<code>ans[i]</code>&nbsp;为 <code>-1</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2021/02/20/untitled-diagram.png" style="width: 191px; height: 281px;" /></strong></p>

<pre>
<b>输入：</b>nums = [2,3,3,2], edges = [[0,1],[1,2],[1,3]]
<b>输出：</b>[-1,0,0,1]
<b>解释：</b>上图中，每个节点的值在括号中表示。
- 节点 0 没有互质祖先。
- 节点 1 只有一个祖先节点 0 。它们的值是互质的（gcd(2,3) == 1）。
- 节点 2 有两个祖先节点，分别是节点 1 和节点 0 。节点 1 的值与它的值不是互质的（gcd(3,3) == 3）但节点 0 的值是互质的(gcd(2,3) == 1)，所以节点 0 是最近的符合要求的祖先节点。
- 节点 3 有两个祖先节点，分别是节点 1 和节点 0 。它与节点 1 互质（gcd(3,2) == 1），所以节点 1 是离它最近的符合要求的祖先节点。
</pre>

<p><strong>示例 2：</strong></p>

<p><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2021/02/20/untitled-diagram1.png" style="width: 441px; height: 291px;" /></p>

<pre>
<strong>输入：</strong>nums = [5,6,10,2,3,6,15], edges = [[0,1],[0,2],[1,3],[1,4],[2,5],[2,6]]
<b>输出：</b>[-1,0,-1,0,0,0,-1]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>nums.length == n</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 50</code></li> 
 <li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>edges.length == n - 1</code></li> 
 <li><code>edges[j].length == 2</code></li> 
 <li><code>0 &lt;= u<sub>j</sub>, v<sub>j</sub> &lt; n</code></li> 
 <li><code>u<sub>j</sub> != v<sub>j</sub></code></li> 
</ul>

<div><div>Related Topics</div><div><li>树</li><li>深度优先搜索</li><li>广度优先搜索</li><li>数组</li><li>数学</li><li>数论</li></div></div><br><div><li>👍 45</li><li>👎 0</li></div>