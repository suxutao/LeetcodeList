<p>给你两个整数数组 <code>nums1</code> 和 <code>nums2</code>，它们的长度分别为 <code>m</code> 和 <code>n</code>。数组 <code>nums1</code> 和 <code>nums2</code> 分别代表两个数各位上的数字。同时你也会得到一个整数 <code>k</code>。</p>

<p>请你利用这两个数组中的数字中创建一个长度为 <code>k &lt;= m + n</code> 的最大数，在这个必须保留来自同一数组的数字的相对顺序。</p>

<p>返回代表答案的长度为 <code>k</code> 的数组。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums1 = [3,4,6,5], nums2 = [9,1,2,5,8,3], k = 5
<strong>输出：</strong>[9,8,6,5,3]
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums1 = [6,7], nums2 = [6,0,4], k = 5
<strong>输出：</strong>[6,7,6,0,4]
</pre>

<p><strong class="example">示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums1 = [3,9], nums2 = [8,9], k = 3
<strong>输出：</strong>[9,8,9]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>m == nums1.length</code></li> 
 <li><code>n == nums2.length</code></li> 
 <li><code>1 &lt;= m, n &lt;= 500</code></li> 
 <li><code>0 &lt;= nums1[i], nums2[i] &lt;= 9</code></li> 
 <li><code>1 &lt;= k &lt;= m + n</code></li> 
</ul>

<div><div>Related Topics</div><div><li>栈</li><li>贪心</li><li>数组</li><li>双指针</li><li>单调栈</li></div></div><br><div><li>👍 589</li><li>👎 0</li></div>