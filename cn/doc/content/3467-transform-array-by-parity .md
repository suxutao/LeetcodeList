<p>给你一个整数数组 <code>nums</code>。请你按照以下顺序 <strong>依次</strong>&nbsp;执行操作，转换 <code>nums</code>：</p>

<ol> 
 <li>将每个偶数替换为 0。</li> 
 <li>将每个奇数替换为 1。</li> 
 <li>按&nbsp;<strong>非递减&nbsp;</strong>顺序排序修改后的数组。</li> 
</ol>

<p>执行完这些操作后，返回结果数组。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1:</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">nums = [4,3,2,1]</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">[0,0,1,1]</span></p>

<p><strong>解释：</strong></p>

<ul> 
 <li>将偶数（4 和 2）替换为 0，将奇数（3 和 1）替换为 1。现在，<code>nums = [0, 1, 0, 1]</code>。</li> 
 <li>按非递减顺序排序 <code>nums</code>，得到 <code>nums = [0, 0, 1, 1]</code>。</li> 
</ul>

<p><strong class="example">示例 2:</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">nums = [1,5,1,4,2]</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">[0,0,1,1,1]</span></p>

<p><strong>解释：</strong></p>

<ul> 
 <li>将偶数（4 和 2）替换为 0，将奇数（1, 5 和 1）替换为 1。现在，<code>nums = [1, 1, 1, 0, 0]</code>。</li> 
 <li>按非递减顺序排序&nbsp;<code>nums</code>，得到 <code>nums = [0, 0, 1, 1, 1]</code>。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 100</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 1000</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>计数</li><li>排序</li></div></div><br><div><li>👍 1</li><li>👎 0</li></div>