<p>给你一个&nbsp;<code>m x n</code>&nbsp;的矩阵&nbsp;<code>mat</code>&nbsp;和一个整数 <code>k</code> ，请你返回一个矩阵&nbsp;<code>answer</code>&nbsp;，其中每个&nbsp;<code>answer[i][j]</code>&nbsp;是所有满足下述条件的元素&nbsp;<code>mat[r][c]</code> 的和：&nbsp;</p>

<ul> 
 <li><code>i - k &lt;= r &lt;= i + k, </code></li> 
 <li><code>j - k &lt;= c &lt;= j + k</code> 且</li> 
 <li><code>(r, c)</code>&nbsp;在矩阵内。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>mat = [[1,2,3],[4,5,6],[7,8,9]], k = 1
<strong>输出：</strong>[[12,21,16],[27,45,33],[24,39,28]]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>mat = [[1,2,3],[4,5,6],[7,8,9]], k = 2
<strong>输出：</strong>[[45,45,45],[45,45,45],[45,45,45]]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>m ==&nbsp;mat.length</code></li> 
 <li><code>n ==&nbsp;mat[i].length</code></li> 
 <li><code>1 &lt;= m, n, k &lt;= 100</code></li> 
 <li><code>1 &lt;= mat[i][j] &lt;= 100</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>矩阵</li><li>前缀和</li></div></div><br><div><li>👍 189</li><li>👎 0</li></div>