<p>你现在手里有一份大小为
 <meta charset="UTF-8" />&nbsp;<code>n x n</code>&nbsp;的 网格 <code>grid</code>，上面的每个 单元格 都用&nbsp;<code>0</code>&nbsp;和&nbsp;<code>1</code>&nbsp;标记好了。其中&nbsp;<code>0</code>&nbsp;代表海洋，<code>1</code>&nbsp;代表陆地。</p>

<p>请你找出一个海洋单元格，这个海洋单元格到离它最近的陆地单元格的距离是最大的，并返回该距离。如果网格上只有陆地或者海洋，请返回&nbsp;<code>-1</code>。</p>

<p>我们这里说的距离是「曼哈顿距离」（&nbsp;Manhattan Distance）：<code>(x0, y0)</code> 和&nbsp;<code>(x1, y1)</code>&nbsp;这两个单元格之间的距离是&nbsp;<code>|x0 - x1| + |y0 - y1|</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/08/17/1336_ex1.jpeg" /></strong></p>

<pre>
<strong>输入：</strong>grid = [[1,0,1],[0,0,0],[1,0,1]]
<strong>输出：</strong>2
<strong>解释： </strong>
海洋单元格 (1, 1) 和所有陆地单元格之间的距离都达到最大，最大距离为 2。
</pre>

<p><strong>示例 2：</strong></p>

<p><strong><img alt="" src="https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2019/08/17/1336_ex2.jpeg" /></strong></p>

<pre>
<strong>输入：</strong>grid = [[1,0,0],[0,0,0],[0,0,0]]
<strong>输出：</strong>4
<strong>解释： </strong>
海洋单元格 (2, 2) 和所有陆地单元格之间的距离都达到最大，最大距离为 4。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<p>
 <meta charset="UTF-8" /></p>

<ul> 
 <li><code>n == grid.length</code></li> 
 <li><code>n == grid[i].length</code></li> 
 <li><code>1 &lt;= n&nbsp;&lt;= 100</code></li> 
 <li><code>grid[i][j]</code>&nbsp;不是&nbsp;<code>0</code>&nbsp;就是&nbsp;<code>1</code></li> 
</ul>

<div><div>Related Topics</div><div><li>广度优先搜索</li><li>数组</li><li>动态规划</li><li>矩阵</li></div></div><br><div><li>👍 383</li><li>👎 0</li></div>