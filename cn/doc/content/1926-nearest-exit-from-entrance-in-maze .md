<p>给你一个&nbsp;<code>m x n</code>&nbsp;的迷宫矩阵&nbsp;<code>maze</code>&nbsp;（<strong>下标从 0 开始</strong>），矩阵中有空格子（用&nbsp;<code>'.'</code>&nbsp;表示）和墙（用&nbsp;<code>'+'</code>&nbsp;表示）。同时给你迷宫的入口&nbsp;<code>entrance</code>&nbsp;，用&nbsp;<code>entrance = [entrance<sub>row</sub>, entrance<sub>col</sub>]</code>&nbsp;表示你一开始所在格子的行和列。</p>

<p>每一步操作，你可以往 <strong>上</strong>，<strong>下</strong>，<strong>左</strong> 或者 <strong>右</strong>&nbsp;移动一个格子。你不能进入墙所在的格子，你也不能离开迷宫。你的目标是找到离&nbsp;<code>entrance</code>&nbsp;<strong>最近</strong>&nbsp;的出口。<strong>出口</strong>&nbsp;的含义是&nbsp;<code>maze</code>&nbsp;<strong>边界</strong>&nbsp;上的&nbsp;<strong>空格子</strong>。<code>entrance</code>&nbsp;格子&nbsp;<strong>不算</strong>&nbsp;出口。</p>

<p>请你返回从 <code>entrance</code>&nbsp;到最近出口的最短路径的 <strong>步数</strong>&nbsp;，如果不存在这样的路径，请你返回 <code>-1</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/04/nearest1-grid.jpg" style="width: 333px; height: 253px;"> <pre><b>输入：</b>maze = [["+","+",".","+"],[".",".",".","+"],["+","+","+","."]], entrance = [1,2]
<b>输出：</b>1
<b>解释：</b>总共有 3 个出口，分别位于 (1,0)，(0,2) 和 (2,3) 。
一开始，你在入口格子 (1,2) 处。
- 你可以往左移动 2 步到达 (1,0) 。
- 你可以往上移动 1 步到达 (0,2) 。
从入口处没法到达 (2,3) 。
所以，最近的出口是 (0,2) ，距离为 1 步。
</pre> </img>

<p><strong>示例 2：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/04/nearesr2-grid.jpg" style="width: 253px; height: 253px;"> <pre><b>输入：</b>maze = [["+","+","+"],[".",".","."],["+","+","+"]], entrance = [1,0]
<b>输出：</b>2
<b>解释：</b>迷宫中只有 1 个出口，在 (1,2) 处。
(1,0) 不算出口，因为它是入口格子。
初始时，你在入口与格子 (1,0) 处。
- 你可以往右移动 2 步到达 (1,2) 处。
所以，最近的出口为 (1,2) ，距离为 2 步。
</pre> </img>

<p><strong>示例 3：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/04/nearest3-grid.jpg" style="width: 173px; height: 93px;"> <pre><b>输入：</b>maze = [[".","+"]], entrance = [0,0]
<b>输出：</b>-1
<b>解释：</b>这个迷宫中没有出口。
</pre> </img>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>maze.length == m</code></li> 
 <li><code>maze[i].length == n</code></li> 
 <li><code>1 &lt;= m, n &lt;= 100</code></li> 
 <li><code>maze[i][j]</code> 要么是&nbsp;<code>'.'</code>&nbsp;，要么是&nbsp;<code>'+'</code>&nbsp;。</li> 
 <li><code>entrance.length == 2</code></li> 
 <li><code>0 &lt;= entrance<sub>row</sub> &lt; m</code></li> 
 <li><code>0 &lt;= entrance<sub>col</sub> &lt; n</code></li> 
 <li><code>entrance</code>&nbsp;一定是空格子。</li> 
</ul>

<div><div>Related Topics</div><div><li>广度优先搜索</li><li>数组</li><li>矩阵</li></div></div><br><div><li>👍 98</li><li>👎 0</li></div>