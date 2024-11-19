<p>给你一个下标从 <strong>0</strong>&nbsp;开始的整数数组&nbsp;<code>nums</code>&nbsp;。</p>

<p>如果存在一些整数满足&nbsp;<code>0 &lt;= index<sub>1</sub> &lt; index<sub>2</sub> &lt; ... &lt; index<sub>k</sub> &lt; nums.length</code>&nbsp;，得到&nbsp;<code>nums[index<sub>1</sub>] | nums[index<sub>2</sub>] | ... | nums[index<sub>k</sub>] = x</code>&nbsp;，那么我们说&nbsp;<code>x</code>&nbsp;是&nbsp;<strong>可表达的</strong>&nbsp;。换言之，如果一个整数能由&nbsp;<code>nums</code>&nbsp;的某个子序列的或运算得到，那么它就是可表达的。</p>

<p>请你返回 <code>nums</code>&nbsp;不可表达的 <strong>最小非零整数</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>nums = [2,1]
<b>输出：</b>4
<b>解释：</b>1 和 2 已经在数组中，因为 nums[0] | nums[1] = 2 | 1 = 3 ，所以 3 是可表达的。由于 4 是不可表达的，所以我们返回 4 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>nums = [5,3,2]
<b>输出：</b>1
<b>解释：</b>1 是最小不可表达的数字。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>脑筋急转弯</li><li>数组</li></div></div><br><div><li>👍 23</li><li>👎 0</li></div>