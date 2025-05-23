<p>在一个 <strong>下标从 0 开始</strong> 的 <code>8 x 8</code> 棋盘上，可能有多个黑皇后和一个白国王。</p>

<p>给你一个二维整数数组 <code>queens</code>，其中 <code>queens[i] = [xQueeni, yQueeni]</code> 表示第 <code>i</code> 个黑皇后在棋盘上的位置。还给你一个长度为 <code>2</code> 的整数数组 <code>king</code>，其中 <code>king = [xKing, yKing]</code> 表示白国王的位置。</p>

<p>返回 <em>能够直接攻击国王的黑皇后的坐标</em>。你可以以 <strong>任何顺序</strong> 返回答案。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://pic.leetcode.cn/1703052515-HqjAJq-chess1.jpg" style="width: 400px; height: 400px;" /></p>

<pre>
<strong>输入：</strong>queens = [[0,1],[1,0],[4,0],[0,4],[3,3],[2,4]], king = [0,0]
<strong>输出：</strong>[[0,1],[1,0],[3,3]]
<strong>解释：</strong>上面的图示显示了三个可以直接攻击国王的皇后和三个不能攻击国王的皇后（用红色虚线标记）。
</pre>

<p><strong>示例 2：</strong></p>

<p><strong><img alt="" src="https://pic.leetcode.cn/1703052660-bPPflt-chess2.jpg" style="width: 400px; height: 400px;" /></strong></p>

<pre>
<strong>输入：</strong>queens = [[0,0],[1,1],[2,2],[3,4],[3,5],[4,4],[4,5]], king = [3,3]
<strong>输出：</strong>[[2,2],[3,4],[4,4]]
<strong>解释：</strong>上面的图示显示了三个能够直接攻击国王的黑皇后和三个不能攻击国王的黑皇后（用红色虚线标记）。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li>
  <meta charset="UTF-8" /><code>1 &lt;= queens.length &lt; 64</code></li> 
 <li><code>queens[i].length == king.length == 2</code></li> 
 <li><code>0 &lt;= xQueen<sub>i</sub>, yQueen<sub>i</sub>, xKing, yKing &lt; 8</code></li> 
 <li>所有给定的位置都是 <strong>唯一</strong> 的。</li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>矩阵</li><li>模拟</li></div></div><br><div><li>👍 126</li><li>👎 0</li></div>