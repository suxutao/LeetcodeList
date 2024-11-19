<p>如果数组的每一对相邻元素都是两个奇偶性不同的数字，则该数组被认为是一个 <strong>特殊数组</strong> 。</p>

<p>周洋哥有一个整数数组 <code>nums</code> 和一个二维整数矩阵 <code>queries</code>，对于 <code>queries[i] = [from<sub>i</sub>, to<sub>i</sub>]</code>，请你帮助周洋哥检查子数组 <code>nums[from<sub>i</sub>..to<sub>i</sub>]</code> 是不是一个 <strong>特殊数组 </strong>。</p>

<p>返回布尔数组 <code>answer</code>，如果 <code>nums[from<sub>i</sub>..to<sub>i</sub>]</code> 是特殊数组，则 <code>answer[i]</code> 为 <code>true</code> ，否则，<code>answer[i]</code> 为 <code>false</code> 。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">nums = [3,4,1,2,6], queries = [[0,4]]</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">[false]</span></p>

<p><strong>解释：</strong></p>

<p>子数组是 <code>[3,4,1,2,6]</code>。2 和 6 都是偶数。</p>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">nums = [4,3,1,6], queries = [[0,2],[2,3]]</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">[false,true]</span></p>

<p><strong>解释：</strong></p>

<ol> 
 <li>子数组是 <code>[4,3,1]</code>。3 和 1 都是奇数。因此这个查询的答案是 <code>false</code>。</li> 
 <li>子数组是 <code>[1,6]</code>。只有一对：<code>(1,6)</code>，且包含了奇偶性不同的数字。因此这个查询的答案是 <code>true</code>。</li> 
</ol>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= queries.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>queries[i].length == 2</code></li> 
 <li><code>0 &lt;= queries[i][0] &lt;= queries[i][1] &lt;= nums.length - 1</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>二分查找</li><li>前缀和</li></div></div><br><div><li>👍 10</li><li>👎 0</li></div>