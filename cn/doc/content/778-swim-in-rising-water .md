<p>在一个 <code>n x n</code>&nbsp;的整数矩阵&nbsp;<code>grid</code> 中，每一个方格的值 <code>grid[i][j]</code> 表示位置 <code>(i, j)</code> 的平台高度。</p>

<p>当开始下雨时，在时间为&nbsp;<code>t</code>&nbsp;时，水池中的水位为&nbsp;<code>t</code>&nbsp;。你可以从一个平台游向四周相邻的任意一个平台，但是前提是此时水位必须同时淹没这两个平台。假定你可以瞬间移动无限距离，也就是默认在方格内部游动是不耗时的。当然，在你游泳的时候你必须待在坐标方格里面。</p>

<p>你从坐标方格的左上平台&nbsp;<code>(0，0)</code> 出发。返回 <em>你到达坐标方格的右下平台&nbsp;<code>(n-1, n-1)</code>&nbsp;所需的最少时间 。</em></p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2021/06/29/swim1-grid.jpg" /></p>

<pre>
<strong>输入:</strong> grid = [[0,2],[1,3]]
<strong>输出:</strong> 3
<strong>解释:</strong>
时间为0时，你位于坐标方格的位置为 <span><code>(0, 0)。</code></span>
此时你不能游向任意方向，因为四个相邻方向平台的高度都大于当前时间为 0 时的水位。
等时间到达 3 时，你才可以游向平台 (1, 1). 因为此时的水位是 3，坐标方格中的平台没有比水位 3 更高的，所以你可以游向坐标方格中的任意位置
</pre>

<p><strong>示例 2:</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2021/06/29/swim2-grid-1.jpg" /></p>

<pre>
<strong>输入:</strong> grid = [[0,1,2,3,4],[24,23,22,21,5],[12,13,14,15,16],[11,17,18,19,20],[10,9,8,7,6]]
<strong>输出:</strong> 16
<strong>解释: </strong>最终的路线用加粗进行了标记。
我们必须等到时间为 16，此时才能保证平台 (0, 0) 和 (4, 4) 是连通的
</pre>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul> 
 <li><code>n == grid.length</code></li> 
 <li><code>n == grid[i].length</code></li> 
 <li><code>1 &lt;= n &lt;= 50</code></li> 
 <li><code>0 &lt;= grid[i][j] &lt;&nbsp;n<sup>2</sup></code></li> 
 <li><code>grid[i][j]</code>&nbsp;中每个值&nbsp;<strong>均无重复</strong></li> 
</ul>

<div><div>Related Topics</div><div><li>深度优先搜索</li><li>广度优先搜索</li><li>并查集</li><li>数组</li><li>二分查找</li><li>矩阵</li><li>堆（优先队列）</li></div></div><br><div><li>👍 306</li><li>👎 0</li></div>