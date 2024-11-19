<p>给你两个长度为 <code>n</code> 、下标从 <strong>0</strong> 开始的整数数组 <code>nums1</code> 和 <code>nums2</code> ，另给你一个下标从 <strong>1</strong> 开始的二维数组 <code>queries</code> ，其中 <code>queries[i] = [x<sub>i</sub>, y<sub>i</sub>]</code> 。</p>

<p>对于第 <code>i</code> 个查询，在所有满足 <code>nums1[j] &gt;= x<sub>i</sub></code> 且 <code>nums2[j] &gt;= y<sub>i</sub></code> 的下标 <code>j</code> <code>(0 &lt;= j &lt; n)</code> 中，找出 <code>nums1[j] + nums2[j]</code> 的 <strong>最大值</strong> ，如果不存在满足条件的 <code>j</code> 则返回 <strong>-1</strong> 。</p>

<p>返回数组<em> </em><code>answer</code><em> ，</em>其中<em> </em><code>answer[i]</code><em> </em>是第 <code>i</code> 个查询的答案。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>nums1 = [4,3,1,2], nums2 = [2,4,9,5], queries = [[4,1],[1,3],[2,5]]
<strong>输出：</strong>[6,10,7]
<strong>解释：</strong>
对于第 1 个查询：<span><code>x<sub>i</sub> = 4</code></span>&nbsp;且&nbsp;<span><code>y<sub>i</sub> = 1</code></span> ，可以选择下标&nbsp;<span><code>j = 0</code></span>&nbsp;，此时 <span><code>nums1[j] &gt;= 4</code></span>&nbsp;且&nbsp;<span><code>nums2[j] &gt;= 1</code></span> 。<span><code>nums1[j] + nums2[j]</code></span>&nbsp;等于 6 ，可以证明 6 是可以获得的最大值。
对于第 2 个查询：<span><code>x<sub>i</sub> = 1</code></span>&nbsp;且&nbsp;<span><code>y<sub>i</sub> = 3</code></span> ，可以选择下标&nbsp;<span><code>j = 2</code></span>&nbsp;，此时 <span><code>nums1[j] &gt;= 1</code></span>&nbsp;且&nbsp;<span><code>nums2[j] &gt;= 3</code></span> 。<span><code>nums1[j] + nums2[j]</code></span>&nbsp;等于 10 ，可以证明 10 是可以获得的最大值。
对于第 3 个查询：<span><code>x<sub>i</sub> = 2</code></span>&nbsp;且&nbsp;<span><code>y<sub>i</sub> = 5</code></span> ，可以选择下标&nbsp;<span><code>j = 3</code></span>&nbsp;，此时 <span><code>nums1[j] &gt;= 2</code></span>&nbsp;且&nbsp;<span><code>nums2[j] &gt;= 5</code></span> 。<span><code>nums1[j] + nums2[j]</code></span>&nbsp;等于 7 ，可以证明 7 是可以获得的最大值。
因此，我们返回&nbsp;<span><code>[6,10,7]</code></span> 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>nums1 = [3,2,5], nums2 = [2,3,4], queries = [[4,4],[3,2],[1,1]]
<strong>输出：</strong>[9,9,9]
<strong>解释：</strong>对于这个示例，我们可以选择下标&nbsp;<span><code>j = 2</code></span>&nbsp;，该下标可以满足每个查询的限制。
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>nums1 = [2,1], nums2 = [2,3], queries = [[3,3]]
<strong>输出：</strong>[-1]
<strong>解释：</strong>示例中的查询 <span><code>x<sub>i</sub></code></span> = 3 且 <span><code>y<sub>i</sub></code></span> = 3 。对于每个下标 j ，都只满足 nums1[j] &lt; <span><code>x<sub>i</sub></code></span> 或者 nums2[j] &lt; <span><code>y<sub>i</sub></code></span> 。因此，不存在答案。 
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>nums1.length == nums2.length</code>&nbsp;</li> 
 <li><code>n ==&nbsp;nums1.length&nbsp;</code></li> 
 <li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums1[i], nums2[i] &lt;= 10<sup>9</sup>&nbsp;</code></li> 
 <li><code>1 &lt;= queries.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>queries[i].length ==&nbsp;2</code></li> 
 <li><code>x<sub>i</sub>&nbsp;== queries[i][1]</code></li> 
 <li><code>y<sub>i</sub> == queries[i][2]</code></li> 
 <li><code>1 &lt;= x<sub>i</sub>, y<sub>i</sub> &lt;= 10<sup>9</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>栈</li><li>树状数组</li><li>线段树</li><li>数组</li><li>二分查找</li><li>排序</li><li>单调栈</li></div></div><br><div><li>👍 119</li><li>👎 0</li></div>