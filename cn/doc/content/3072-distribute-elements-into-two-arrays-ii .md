<p>给你一个下标从 <strong>1</strong> 开始、长度为 <code>n</code> 的整数数组 <code>nums</code> 。</p>

<p>现定义函数 <code>greaterCount</code> ，使得 <code>greaterCount(arr, val)</code> 返回数组 <code>arr</code> 中<strong> 严格大于</strong> <code>val</code> 的元素数量。</p>

<p>你需要使用 <code>n</code> 次操作，将 <code>nums</code> 的所有元素分配到两个数组 <code>arr1</code> 和 <code>arr2</code> 中。在第一次操作中，将 <code>nums[1]</code> 追加到 <code>arr1</code> 。在第二次操作中，将 <code>nums[2]</code> 追加到 <code>arr2</code> 。之后，在第 <code>i</code> 次操作中：</p>

<ul> 
 <li>如果 <code>greaterCount(arr1, nums[i]) &gt; greaterCount(arr2, nums[i])</code> ，将 <code>nums[i]</code> 追加到 <code>arr1</code> 。</li> 
 <li>如果 <code>greaterCount(arr1, nums[i]) &lt; greaterCount(arr2, nums[i])</code> ，将 <code>nums[i]</code> 追加到 <code>arr2</code> 。</li> 
 <li>如果 <code>greaterCount(arr1, nums[i]) == greaterCount(arr2, nums[i])</code> ，将 <code>nums[i]</code> 追加到元素数量较少的数组中。</li> 
 <li>如果仍然相等，那么将 <code>nums[i]</code> 追加到 <code>arr1</code> 。</li> 
</ul>

<p>连接数组 <code>arr1</code> 和 <code>arr2</code> 形成数组 <code>result</code> 。例如，如果 <code>arr1 == [1,2,3]</code> 且 <code>arr2 == [4,5,6]</code> ，那么 <code>result = [1,2,3,4,5,6]</code> 。</p>

<p>返回整数数组 <code>result</code> 。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [2,1,3,3]
<strong>输出：</strong>[2,3,1,3]
<strong>解释：</strong>在前两次操作后，arr1 = [2] ，arr2 = [1] 。
在第 3 次操作中，两个数组中大于 3 的元素数量都是零，并且长度相等，因此，将 nums[3] 追加到 arr1 。
在第 4 次操作中，两个数组中大于 3 的元素数量都是零，但 arr2 的长度较小，因此，将 nums[4] 追加到 arr2 。
在 4 次操作后，arr1 = [2,3] ，arr2 = [1,3] 。
因此，连接形成的数组 result 是 [2,3,1,3] 。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [5,14,3,1,2]
<strong>输出：</strong>[5,3,1,2,14]
<strong>解释：</strong>在前两次操作后，arr1 = [5] ，arr2 = [14] 。
在第 3 次操作中，两个数组中大于 3 的元素数量都是一，并且长度相等，因此，将 nums[3] 追加到 arr1 。
在第 4 次操作中，arr1 中大于 1 的元素数量大于 arr2 中的数量（2 &gt; 1），因此，将 nums[4] 追加到 arr1 。
在第 5 次操作中，arr1 中大于 2 的元素数量大于 arr2 中的数量（2 &gt; 1），因此，将 nums[5] 追加到 arr1 。
在 5 次操作后，arr1 = [5,3,1,2] ，arr2 = [14] 。
因此，连接形成的数组 result 是 [5,3,1,2,14] 。
</pre>

<p><strong class="example">示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [3,3,3,3]
<strong>输出：</strong>[3,3,3,3]
<strong>解释：</strong>在 4 次操作后，arr1 = [3,3] ，arr2 = [3,3] 。
因此，连接形成的数组 result 是 [3,3,3,3] 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>3 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>树状数组</li><li>线段树</li><li>数组</li><li>模拟</li></div></div><br><div><li>👍 21</li><li>👎 0</li></div>