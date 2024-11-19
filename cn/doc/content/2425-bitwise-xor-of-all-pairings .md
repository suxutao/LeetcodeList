<p>给你两个下标从 <strong>0</strong>&nbsp;开始的数组&nbsp;<code>nums1</code> 和&nbsp;<code>nums2</code>&nbsp;，两个数组都只包含非负整数。请你求出另外一个数组&nbsp;<code>nums3</code>&nbsp;，包含 <code>nums1</code>&nbsp;和 <code>nums2</code>&nbsp;中 <strong>所有数对</strong>&nbsp;的异或和（<code>nums1</code>&nbsp;中每个整数都跟 <code>nums2</code>&nbsp;中每个整数 <strong>恰好</strong>&nbsp;匹配一次）。</p>

<p>请你返回 <code>nums3</code>&nbsp;中所有整数的 <strong>异或和</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>nums1 = [2,1,3], nums2 = [10,2,5,0]
<b>输出：</b>13
<strong>解释：</strong>
一个可能的 nums3 数组是 [8,0,7,2,11,3,4,1,9,1,6,3] 。
所有这些数字的异或和是 13 ，所以我们返回 13 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>nums1 = [1,2], nums2 = [3,4]
<b>输出：</b>0
<strong>解释：</strong>
所有数对异或和的结果分别为 nums1[0] ^ nums2[0] ，nums1[0] ^ nums2[1] ，nums1[1] ^ nums2[0] 和 nums1[1] ^ nums2[1] 。
所以，一个可能的 nums3 数组是 [2,5,1,6] 。
2 ^ 5 ^ 1 ^ 6 = 0 ，所以我们返回 0 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums1.length, nums2.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= nums1[i], nums2[j] &lt;= 10<sup>9</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>脑筋急转弯</li><li>数组</li></div></div><br><div><li>👍 21</li><li>👎 0</li></div>