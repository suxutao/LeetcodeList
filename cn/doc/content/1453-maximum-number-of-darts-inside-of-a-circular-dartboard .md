<p>Alice 向一面非常大的墙上掷出 <code>n</code> 支飞镖。给你一个数组 <code>darts</code> ，其中 <code>darts[i] = [x<sub>i</sub>, y<sub>i</sub>]</code> 表示 Alice 掷出的第 <code>i</code> 支飞镖落在墙上的位置。</p>

<p>Bob 知道墙上所有 <code>n</code> 支飞镖的位置。他想要往墙上放置一个半径为 <code>r</code> 的圆形靶。使 Alice 掷出的飞镖尽可能多地落在靶上。</p>

<p>给你整数 <code>r</code> ，请返回能够落在 <strong>任意</strong> 半径为 <code>r</code> 的圆形靶内或靶上的最大飞镖数。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1 ：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2020/04/29/sample_1_1806.png" style="width: 248px; height: 211px;" /> 
<pre>
<strong>输入：</strong>darts = [[-2,0],[2,0],[0,2],[0,-2]], r = 2
<strong>输出：</strong>4
<strong>解释：</strong>如果圆形靶的圆心为 (0,0) ，半径为 2 ，所有的飞镖都落在靶上，此时落在靶上的飞镖数最大，值为 4 。
</pre>

<p><strong class="example">示例 2 ：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2020/04/29/sample_2_1806.png" style="width: 306px; height: 244px;" /> 
<pre>
<strong>输入：</strong>darts = [[-3,0],[3,0],[2,6],[5,4],[0,9],[7,8]], r = 5
<strong>输出：</strong>5
<strong>解释：</strong>如果圆形靶的圆心为 (0,4) ，半径为 5 ，则除了 (7,8) 之外的飞镖都落在靶上，此时落在靶上的飞镖数最大，值为 5 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= darts.length &lt;= 100</code></li> 
 <li><code>darts[i].length == 2</code></li> 
 <li><code>-10<sup>4</sup> &lt;= x<sub>i</sub>, y<sub>i</sub> &lt;= 10<sup>4</sup></code></li> 
 <li><code>darts</code> 中的元素互不相同</li> 
 <li><code>1 &lt;= r &lt;= 5000</code></li> 
</ul>

<div><div>Related Topics</div><div><li>几何</li><li>数组</li><li>数学</li></div></div><br><div><li>👍 44</li><li>👎 0</li></div>