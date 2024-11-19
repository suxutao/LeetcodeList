<p>给你一个 <strong>二维</strong>&nbsp;整数数组&nbsp;<code>coordinates</code>&nbsp;和一个整数&nbsp;<code>k</code>&nbsp;，其中&nbsp;<code>coordinates[i] = [x<sub>i</sub>, y<sub>i</sub>]</code>&nbsp;是第 <code>i</code>&nbsp;个点在二维平面里的坐标。</p>

<p>我们定义两个点&nbsp;<code>(x<sub>1</sub>, y<sub>1</sub>)</code>&nbsp;和&nbsp;<code>(x<sub>2</sub>, y<sub>2</sub>)</code>&nbsp;的 <strong>距离</strong>&nbsp;为&nbsp;<code>(x1 XOR x2) + (y1 XOR y2)</code> ，<code>XOR</code>&nbsp;指的是按位异或运算。</p>

<p>请你返回满足<em>&nbsp;</em><code>i &lt; j</code><em>&nbsp;</em>且点<em>&nbsp;</em><code>i</code><em> </em>和点<em>&nbsp;</em><code>j</code>之间距离为<em>&nbsp;</em><code>k</code>&nbsp;的点对数目。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<b>输入：</b>coordinates = [[1,2],[4,2],[1,3],[5,2]], k = 5
<b>输出：</b>2
<b>解释：</b>以下点对距离为 k ：
- (0, 1)：(1 XOR 4) + (2 XOR 2) = 5 。
- (2, 3)：(1 XOR 5) + (3 XOR 2) = 5 。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<b>输入：</b>coordinates = [[1,3],[1,3],[1,3],[1,3],[1,3]], k = 0
<b>输出：</b>10
<b>解释：</b>任何两个点之间的距离都为 0 ，所以总共有 10 组点对。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>2 &lt;= coordinates.length &lt;= 50000</code></li> 
 <li><code>0 &lt;= x<sub>i</sub>, y<sub>i</sub> &lt;= 10<sup>6</sup></code></li> 
 <li><code>0 &lt;= k &lt;= 100</code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>数组</li><li>哈希表</li></div></div><br><div><li>👍 19</li><li>👎 0</li></div>