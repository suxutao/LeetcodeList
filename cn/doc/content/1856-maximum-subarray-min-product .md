<p>一个数组的 <strong>最小乘积</strong>&nbsp;定义为这个数组中 <strong>最小值</strong>&nbsp;<strong>乘以&nbsp;</strong>数组的 <strong>和</strong>&nbsp;。</p>

<ul> 
 <li>比方说，数组&nbsp;<code>[3,2,5]</code>&nbsp;（最小值是&nbsp;<code>2</code>）的最小乘积为&nbsp;<code>2 * (3+2+5) = 2 * 10 = 20</code>&nbsp;。</li> 
</ul>

<p>给你一个正整数数组&nbsp;<code>nums</code>&nbsp;，请你返回&nbsp;<code>nums</code>&nbsp;任意&nbsp;<strong>非空子数组</strong>&nbsp;的<strong>最小乘积</strong>&nbsp;的&nbsp;<strong>最大值</strong>&nbsp;。由于答案可能很大，请你返回答案对&nbsp;&nbsp;<code>10<sup>9</sup> + 7</code>&nbsp;<strong>取余&nbsp;</strong>的结果。</p>

<p>请注意，最小乘积的最大值考虑的是取余操作 <strong>之前</strong>&nbsp;的结果。题目保证最小乘积的最大值在 <strong>不取余</strong> 的情况下可以用 <strong>64 位有符号整数</strong>&nbsp;保存。</p>

<p><strong>子数组</strong>&nbsp;定义为一个数组的 <strong>连续</strong>&nbsp;部分。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>nums = [1,<strong>2,3,2</strong>]
<b>输出：</b>14
<b>解释：</b>最小乘积的最大值由子数组 [2,3,2] （最小值是 2）得到。
2 * (2+3+2) = 2 * 7 = 14 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>nums = [2,<strong>3,3</strong>,1,2]
<b>输出：</b>18
<b>解释：</b>最小乘积的最大值由子数组 [3,3] （最小值是 3）得到。
3 * (3+3) = 3 * 6 = 18 。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<b>输入：</b>nums = [3,1,<strong>5,6,4</strong>,2]
<b>输出：</b>60
<b>解释：</b>最小乘积的最大值由子数组 [5,6,4] （最小值是 4）得到。
4 * (5+6+4) = 4 * 15 = 60 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>7</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>栈</li><li>数组</li><li>前缀和</li><li>单调栈</li></div></div><br><div><li>👍 134</li><li>👎 0</li></div>