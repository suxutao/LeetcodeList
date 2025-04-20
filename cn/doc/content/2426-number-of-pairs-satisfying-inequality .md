<p>给你两个下标从 <strong>0</strong>&nbsp;开始的整数数组&nbsp;<code>nums1</code> 和&nbsp;<code>nums2</code>&nbsp;，两个数组的大小都为&nbsp;<code>n</code>&nbsp;，同时给你一个整数&nbsp;<code>diff</code>&nbsp;，统计满足以下条件的&nbsp;<strong>数对&nbsp;</strong><code>(i, j)</code>&nbsp;：</p>

<ul> 
 <li><code>0 &lt;= i &lt; j &lt;= n - 1</code>&nbsp;<b>且</b></li> 
 <li><code>nums1[i] - nums1[j] &lt;= nums2[i] - nums2[j] + diff</code>.</li> 
</ul>

<p>请你返回满足条件的 <strong>数对数目</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>nums1 = [3,2,5], nums2 = [2,2,1], diff = 1
<b>输出：</b>3
<strong>解释：</strong>
总共有 3 个满足条件的数对：
1. i = 0, j = 1：3 - 2 &lt;= 2 - 2 + 1 。因为 i &lt; j 且 1 &lt;= 1 ，这个数对满足条件。
2. i = 0, j = 2：3 - 5 &lt;= 2 - 1 + 1 。因为 i &lt; j 且 -2 &lt;= 2 ，这个数对满足条件。
3. i = 1, j = 2：2 - 5 &lt;= 2 - 1 + 1 。因为 i &lt; j 且 -3 &lt;= 2 ，这个数对满足条件。
所以，我们返回 3 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>nums1 = [3,-1], nums2 = [-2,2], diff = -1
<b>输出：</b>0
<strong>解释：</strong>
没有满足条件的任何数对，所以我们返回 0 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>n == nums1.length == nums2.length</code></li> 
 <li><code>2 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>-10<sup>4</sup> &lt;= nums1[i], nums2[i] &lt;= 10<sup>4</sup></code></li> 
 <li><code>-10<sup>4</sup> &lt;= diff &lt;= 10<sup>4</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>树状数组</li><li>线段树</li><li>数组</li><li>二分查找</li><li>分治</li><li>有序集合</li><li>归并排序</li></div></div><br><div><li>👍 24</li><li>👎 0</li></div>