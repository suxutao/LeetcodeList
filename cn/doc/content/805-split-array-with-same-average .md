<p>给定你一个整数数组
 <meta charset="UTF-8" />&nbsp;<code>nums</code></p>

<p>我们要将
 <meta charset="UTF-8" />&nbsp;<code>nums</code>&nbsp;数组中的每个元素移动到&nbsp;<code>A</code>&nbsp;数组 或者&nbsp;<code>B</code>&nbsp;数组中，使得&nbsp;<code>A</code>&nbsp;数组和
 <meta charset="UTF-8" />&nbsp;<code>B</code>&nbsp;数组不为空，并且
 <meta charset="UTF-8" />&nbsp;<code>average(A) == average(B)</code>&nbsp;。</p>

<p>如果可以完成则返回<code>true</code>&nbsp;， 否则返回 <code>false</code>&nbsp;&nbsp;。</p>

<p><strong>注意：</strong>对于数组
 <meta charset="UTF-8" />&nbsp;<code>arr</code>&nbsp;, 
 <meta charset="UTF-8" />&nbsp;<code>average(arr)</code>&nbsp;是
 <meta charset="UTF-8" />&nbsp;<code>arr</code>&nbsp;的所有元素的和除以
 <meta charset="UTF-8" />&nbsp;<code>arr</code>&nbsp;长度。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入:</strong> nums = [1,2,3,4,5,6,7,8]
<strong>输出:</strong> true
<strong>解释: </strong>我们可以将数组分割为 [1,4,5,8] 和 [2,3,6,7], 他们的平均值都是4.5。
</pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入:</strong> nums = [3,1]
<strong>输出:</strong> false
</pre>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 30</code></li> 
 <li><code>0 &lt;= nums[i] &lt;= 10<sup>4</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>数组</li><li>数学</li><li>动态规划</li><li>状态压缩</li></div></div><br><div><li>👍 304</li><li>👎 0</li></div>