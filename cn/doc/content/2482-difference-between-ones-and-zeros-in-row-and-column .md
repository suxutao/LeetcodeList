<p>给你一个下标从 <strong>0</strong>&nbsp;开始的&nbsp;<code>m x n</code>&nbsp;二进制矩阵&nbsp;<code>grid</code>&nbsp;。</p>

<p>我们按照如下过程，定义一个下标从 <strong>0</strong>&nbsp;开始的&nbsp;<code>m x n</code>&nbsp;差值矩阵&nbsp;<code>diff</code>&nbsp;：</p>

<ul> 
 <li>令第&nbsp;<code>i</code>&nbsp;行一的数目为&nbsp;<code>onesRow<sub>i</sub></code>&nbsp;。</li> 
 <li>令第&nbsp;<code>j</code>&nbsp;列一的数目为&nbsp;<code>onesCol<sub>j</sub></code><sub>&nbsp;</sub>。</li> 
 <li>令第&nbsp;<code>i</code>&nbsp;行零的数目为&nbsp;<code>zerosRow<sub>i</sub></code>&nbsp;。</li> 
 <li>令第&nbsp;<code>j</code>&nbsp;列零的数目为&nbsp;<code>zerosCol<sub>j</sub></code>&nbsp;。</li> 
 <li><code>diff[i][j] = onesRow<sub>i</sub> + onesCol<sub>j</sub> - zerosRow<sub>i</sub> - zerosCol<sub>j</sub></code></li> 
</ul>

<p>请你返回差值矩阵<em>&nbsp;</em><code>diff</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2022/11/06/image-20221106171729-5.png" style="width: 400px; height: 208px;" /></p>

<pre><b>输入：</b>grid = [[0,1,1],[1,0,1],[0,0,1]]
<b>输出：</b>[[0,0,4],[0,0,4],[-2,-2,2]]
<b>解释：</b>
- diff[0][0] = <span><code>onesRow<sub>0</sub> + onesCol<sub>0</sub> - zerosRow<sub>0</sub> - zerosCol<sub>0</sub></code></span> = 2 + 1 - 1 - 2 = 0 
- diff[0][1] = <span><code>onesRow<sub>0</sub> + onesCol<sub>1</sub> - zerosRow<sub>0</sub> - zerosCol<sub>1</sub></code></span> = 2 + 1 - 1 - 2 = 0 
- diff[0][2] = <span><code>onesRow<sub>0</sub> + onesCol<sub>2</sub> - zerosRow<sub>0</sub> - zerosCol<sub>2</sub></code></span> = 2 + 3 - 1 - 0 = 4 
- diff[1][0] = <span><code>onesRow<sub>1</sub> + onesCol<sub>0</sub> - zerosRow<sub>1</sub> - zerosCol<sub>0</sub></code></span> = 2 + 1 - 1 - 2 = 0 
- diff[1][1] = <span><code>onesRow<sub>1</sub> + onesCol<sub>1</sub> - zerosRow<sub>1</sub> - zerosCol<sub>1</sub></code></span> = 2 + 1 - 1 - 2 = 0 
- diff[1][2] = <span><code>onesRow<sub>1</sub> + onesCol<sub>2</sub> - zerosRow<sub>1</sub> - zerosCol<sub>2</sub></code></span> = 2 + 3 - 1 - 0 = 4 
- diff[2][0] = <span><code>onesRow<sub>2</sub> + onesCol<sub>0</sub> - zerosRow<sub>2</sub> - zerosCol<sub>0</sub></code></span> = 1 + 1 - 2 - 2 = -2
- diff[2][1] = <span><code>onesRow<sub>2</sub> + onesCol<sub>1</sub> - zerosRow<sub>2</sub> - zerosCol<sub>1</sub></code></span> = 1 + 1 - 2 - 2 = -2
- diff[2][2] = <span><code>onesRow<sub>2</sub> + onesCol<sub>2</sub> - zerosRow<sub>2</sub> - zerosCol<sub>2</sub></code></span> = 1 + 3 - 2 - 0 = 2
</pre>

<p><strong>示例 2：</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2022/11/06/image-20221106171747-6.png" style="width: 358px; height: 150px;" /></p>

<pre><b>输入：</b>grid = [[1,1,1],[1,1,1]]
<b>输出：</b>[[5,5,5],[5,5,5]]
<strong>解释：</strong>
- diff[0][0] = onesRow<sub>0</sub> + onesCol<sub>0</sub> - zerosRow<sub>0</sub> - zerosCol<sub>0</sub> = 3 + 2 - 0 - 0 = 5
- diff[0][1] = onesRow<sub>0</sub> + onesCol<sub>1</sub> - zerosRow<sub>0</sub> - zerosCol<sub>1</sub> = 3 + 2 - 0 - 0 = 5
- diff[0][2] = onesRow<sub>0</sub> + onesCol<sub>2</sub> - zerosRow<sub>0</sub> - zerosCol<sub>2</sub> = 3 + 2 - 0 - 0 = 5
- diff[1][0] = onesRow<sub>1</sub> + onesCol<sub>0</sub> - zerosRow<sub>1</sub> - zerosCol<sub>0</sub> = 3 + 2 - 0 - 0 = 5
- diff[1][1] = onesRow<sub>1</sub> + onesCol<sub>1</sub> - zerosRow<sub>1</sub> - zerosCol<sub>1</sub> = 3 + 2 - 0 - 0 = 5
- diff[1][2] = onesRow<sub>1</sub> + onesCol<sub>2</sub> - zerosRow<sub>1</sub> - zerosCol<sub>2</sub> = 3 + 2 - 0 - 0 = 5
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>m == grid.length</code></li> 
 <li><code>n == grid[i].length</code></li> 
 <li><code>1 &lt;= m, n &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= m * n &lt;= 10<sup>5</sup></code></li> 
 <li><code>grid[i][j]</code>&nbsp;要么是&nbsp;<code>0</code>&nbsp;，要么是&nbsp;<code>1</code> 。</li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>矩阵</li><li>模拟</li></div></div><br><div><li>👍 9</li><li>👎 0</li></div>