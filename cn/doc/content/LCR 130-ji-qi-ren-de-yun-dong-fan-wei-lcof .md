<p>家居整理师将待整理衣橱划分为 <code>m x n</code> 的二维矩阵 <code>grid</code>，其中 <code>grid[i][j]</code> 代表一个需要整理的格子。整理师自 <code>grid[0][0]</code> 开始 <strong>逐行逐列</strong> 地整理每个格子。</p>

<p>整理规则为：在整理过程中，可以选择&nbsp;<strong>向右移动一格&nbsp;</strong>或&nbsp;<strong>向下移动一格</strong>，但不能移动到衣柜之外。同时，不需要整理 <code>digit(i)&nbsp;+ digit(j)&nbsp;&gt; cnt</code> 的格子，其中 <code>digit(x)</code>&nbsp;表示数字&nbsp;<code>x</code> 的各数位之和。</p>

<p>请返回整理师&nbsp;<strong>总共需要整理多少个格子</strong>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>m = 4, n = 7, cnt = 5
<strong>输出：</strong>18
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n, m &lt;= 100</code></li> 
 <li><code>0 &lt;= cnt &lt;= 20</code></li> 
</ul>

<p>&nbsp;</p>

<div><div>Related Topics</div><div><li>深度优先搜索</li><li>广度优先搜索</li><li>动态规划</li></div></div><br><div><li>👍 686</li><li>👎 0</li></div>