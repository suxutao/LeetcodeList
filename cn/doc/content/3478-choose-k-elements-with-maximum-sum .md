<p>给你两个整数数组，<code>nums1</code> 和 <code>nums2</code>，长度均为 <code>n</code>，以及一个正整数 <code>k</code> 。</p>

<p>对从 <code>0</code> 到 <code>n - 1</code> 每个下标 <code>i</code> ，执行下述操作：</p>

<ul> 
 <li>找出所有满足 <code>nums1[j]</code> 小于 <code>nums1[i]</code> 的下标 <code>j</code> 。</li> 
 <li>从这些下标对应的 <code>nums2[j]</code> 中选出 <strong>至多</strong> <code>k</code> 个，并 <strong>最大化</strong> 这些值的总和作为结果。</li> 
</ul>

<p>返回一个长度为 <code>n</code> 的数组 <code>answer</code> ，其中 <code>answer[i]</code> 表示对应下标 <code>i</code> 的结果。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">nums1 = [4,2,1,5,3], nums2 = [10,20,30,40,50], k = 2</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">[80,30,0,80,50]</span></p>

<p><strong>解释：</strong></p>

<ul> 
 <li>对于 <code>i = 0</code> ：满足 <code>nums1[j] &lt; nums1[0]</code> 的下标为 <code>[1, 2, 4]</code> ，选出其中值最大的两个，结果为 <code>50 + 30 = 80</code> 。</li> 
 <li>对于 <code>i = 1</code> ：满足 <code>nums1[j] &lt; nums1[1]</code> 的下标为 <code>[2]</code> ，只能选择这个值，结果为 <code>30</code> 。</li> 
 <li>对于 <code>i = 2</code> ：不存在满足 <code>nums1[j] &lt; nums1[2]</code> 的下标，结果为 <code>0</code> 。</li> 
 <li>对于 <code>i = 3</code> ：满足 <code>nums1[j] &lt; nums1[3]</code> 的下标为 <code>[0, 1, 2, 4]</code> ，选出其中值最大的两个，结果为 <code>50 + 30 = 80</code> 。</li> 
 <li>对于 <code>i = 4</code> ：满足 <code>nums1[j] &lt; nums1[4]</code> 的下标为 <code>[1, 2]</code> ，选出其中值最大的两个，结果为 <code>30 + 20 = 50</code> 。</li> 
</ul>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">nums1 = [2,2,2,2], nums2 = [3,1,2,3], k = 1</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">[0,0,0,0]</span></p>

<p><strong>解释：</strong>由于 <code>nums1</code> 中的所有元素相等，不存在满足条件 <code>nums1[j] &lt; nums1[i]</code>，所有位置的结果都是 0 。</p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>n == nums1.length == nums2.length</code></li> 
 <li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums1[i], nums2[i] &lt;= 10<sup>6</sup></code></li> 
 <li><code>1 &lt;= k &lt;= n</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>排序</li><li>堆（优先队列）</li></div></div><br><div><li>👍 7</li><li>👎 0</li></div>