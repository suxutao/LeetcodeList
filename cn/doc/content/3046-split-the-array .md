<p>给你一个长度为 <strong>偶数 </strong>的整数数组 <code>nums</code> 。你需要将这个数组分割成 <code>nums1</code> 和 <code>nums2</code> 两部分，要求：</p>

<ul> 
 <li><code>nums1.length == nums2.length == nums.length / 2</code> 。</li> 
 <li><code>nums1</code> 应包含 <strong>互不相同</strong><strong> </strong>的元素。</li> 
 <li><code>nums2</code>也应包含<strong> 互不相同</strong> 的元素。</li> 
</ul>

<p>如果能够分割数组就返回 <code>true</code> ，否则返回 <code>false</code> 。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,1,2,2,3,4]
<strong>输出：</strong>true
<strong>解释：</strong>分割 nums 的可行方案之一是 nums1 = [1,2,3] 和 nums2 = [1,2,4] 。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,1,1,1]
<strong>输出：</strong>false
<strong>解释：</strong>分割 nums 的唯一可行方案是 nums1 = [1,1] 和 nums2 = [1,1] 。但 nums1 和 nums2 都不是由互不相同的元素构成。因此，返回 false 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 100</code></li> 
 <li><code>nums.length % 2 == 0</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 100</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>计数</li></div></div><br><div><li>👍 13</li><li>👎 0</li></div>