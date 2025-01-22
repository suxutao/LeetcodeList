<p>给你一个整数数组&nbsp;<code>nums</code>&nbsp;和两个整数&nbsp;<code>k</code> 和&nbsp;<code>numOperations</code>&nbsp;。</p>

<p>你必须对 <code>nums</code>&nbsp;执行 <strong>操作</strong>&nbsp; <code>numOperations</code>&nbsp;次。每次操作中，你可以：</p>

<ul> 
 <li>选择一个下标&nbsp;<code>i</code>&nbsp;，它在之前的操作中 <strong>没有</strong>&nbsp;被选择过。</li> 
 <li>将 <code>nums[i]</code>&nbsp;增加范围&nbsp;<code>[-k, k]</code>&nbsp;中的一个整数。</li> 
</ul>

<p>在执行完所有操作以后，请你返回 <code>nums</code>&nbsp;中出现 <strong>频率最高</strong>&nbsp;元素的出现次数。</p>

<p>一个元素 <code>x</code>&nbsp;的 <strong>频率</strong>&nbsp;指的是它在数组中出现的次数。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>nums = [1,4,5], k = 1, numOperations = 2</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>2</span></p>

<p><strong>解释：</strong></p>

<p>通过以下操作得到最高频率 2 ：</p>

<ul> 
 <li>将&nbsp;<code>nums[1]</code>&nbsp;增加 0 ，<code>nums</code> 变为&nbsp;<code>[1, 4, 5]</code>&nbsp;。</li> 
 <li>将&nbsp;<code>nums[2]</code>&nbsp;增加 -1 ，<code>nums</code> 变为&nbsp;<code>[1, 4, 4]</code>&nbsp;。</li> 
</ul>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>nums = [5,11,20,20], k = 5, numOperations = 1</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>2</span></p>

<p><strong>解释：</strong></p>

<p>通过以下操作得到最高频率 2 ：</p>

<ul> 
 <li>将 <code>nums[1]</code> 增加 0 。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= k &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= numOperations &lt;= nums.length</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>二分查找</li><li>前缀和</li><li>排序</li><li>滑动窗口</li></div></div><br><div><li>👍 4</li><li>👎 0</li></div>