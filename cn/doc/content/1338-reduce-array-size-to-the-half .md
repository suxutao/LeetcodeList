<p>给你一个整数数组&nbsp;<code>arr</code>。你可以从中选出一个整数集合，并删除这些整数在数组中的每次出现。</p>

<p>返回&nbsp;<strong>至少</strong>&nbsp;能删除数组中的一半整数的整数集合的最小大小。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>arr = [3,3,3,3,5,5,5,2,2,7]
<strong>输出：</strong>2
<strong>解释：</strong>选择 {3,7} 使得结果数组为 [5,5,5,2,2]、长度为 5（原数组长度的一半）。
大小为 2 的可行集合有 {3,5},{3,2},{5,2}。
选择 {2,7} 是不可行的，它的结果数组为 [3,3,3,3,5,5,5]，新数组长度大于原数组的二分之一。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>arr = [7,7,7,7,7,7]
<strong>输出：</strong>1
<strong>解释：</strong>我们只能选择集合 {7}，结果数组为空。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= arr.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>arr.length</code>&nbsp;为偶数</li> 
 <li><code>1 &lt;= arr[i] &lt;= 10<sup>5</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数组</li><li>哈希表</li><li>排序</li><li>堆（优先队列）</li></div></div><br><div><li>👍 59</li><li>👎 0</li></div>