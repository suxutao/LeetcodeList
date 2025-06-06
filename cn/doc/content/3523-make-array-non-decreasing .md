<p>给你一个整数数组 <code>nums</code>。在一次操作中，你可以选择一个子数组，并将其替换为一个等于该子数组&nbsp;<strong>最大值&nbsp;</strong>的单个元素。</p>

<p>返回经过零次或多次操作后，数组仍为&nbsp;<strong>非递减&nbsp;</strong>的情况下，数组&nbsp;<strong>可能的最大长度</strong>。</p>

<p><strong>子数组&nbsp;</strong>是数组中一个连续、<b>非空&nbsp;</b>的元素序列。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">nums = [4,2,5,3,5]</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">3</span></p>

<p><strong>解释：</strong></p>

<p>实现最大长度的一种方法是：</p>

<ol> 
 <li>将子数组 <code>nums[1..2] = [2, 5]</code> 替换为 <code>5</code> → <code>[4, 5, 3, 5]</code>。</li> 
 <li>将子数组 <code>nums[2..3] = [3, 5]</code> 替换为 <code>5</code> → <code>[4, 5, 5]</code>。</li> 
</ol>

<p>最终数组 <code>[4, 5, 5]</code> 是非递减的，长度为 <font face="monospace">3。</font></p>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">nums = [1,2,3]</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">3</span></p>

<p><strong>解释：</strong></p>

<p>无需任何操作，因为数组 <code>[1,2,3]</code> 已经是非递减的。</p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 2 * 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 2 * 10<sup>5</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>栈</li><li>贪心</li><li>数组</li><li>单调栈</li></div></div><br><div><li>👍 2</li><li>👎 0</li></div>