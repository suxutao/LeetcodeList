<p>给你两个长度相等下标从 <strong>0</strong>&nbsp;开始的整数数组&nbsp;<code>nums1</code> 和&nbsp;<code>nums2</code>&nbsp;。每一秒，对于所有下标&nbsp;<code>0 &lt;= i &lt; nums1.length</code>&nbsp;，<code>nums1[i]</code>&nbsp;的值都增加&nbsp;<code>nums2[i]</code>&nbsp;。操作&nbsp;<strong>完成后</strong>&nbsp;，你可以进行如下操作：</p>

<ul> 
 <li>选择任一满足&nbsp;<code>0 &lt;= i &lt; nums1.length</code>&nbsp;的下标 <code>i</code>&nbsp;，并使&nbsp;<code>nums1[i] = 0</code>&nbsp;。</li> 
</ul>

<p>同时给你一个整数&nbsp;<code>x</code>&nbsp;。</p>

<p>请你返回使&nbsp;<code>nums1</code>&nbsp;中所有元素之和 <strong>小于等于</strong>&nbsp;<code>x</code>&nbsp;所需要的 <strong>最少</strong>&nbsp;时间，如果无法实现，那么返回 <code>-1</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>nums1 = [1,2,3], nums2 = [1,2,3], x = 4
<b>输出：</b>3
<b>解释：</b>
第 1 秒，我们对 i = 0 进行操作，得到 nums1 = [0,2+2,3+3] = [0,4,6] 。
第 2 秒，我们对 i = 1 进行操作，得到 nums1 = [0+1,0,6+3] = [1,0,9] 。
第 3 秒，我们对 i = 2 进行操作，得到 nums1 = [1+1,0+2,0] = [2,2,0] 。
现在 nums1 的和为 4 。不存在更少次数的操作，所以我们返回 3 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>nums1 = [1,2,3], nums2 = [3,3,3], x = 4
<b>输出：</b>-1
<b>解释：</b>不管如何操作，nums1 的和总是会超过 x 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums1.length &lt;= 10<sup>3</sup></code></li> 
 <li><code>1 &lt;= nums1[i] &lt;= 10<sup>3</sup></code></li> 
 <li><code>0 &lt;= nums2[i] &lt;= 10<sup>3</sup></code></li> 
 <li><code>nums1.length == nums2.length</code></li> 
 <li><code>0 &lt;= x &lt;= 10<sup>6</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>动态规划</li><li>排序</li></div></div><br><div><li>👍 50</li><li>👎 0</li></div>