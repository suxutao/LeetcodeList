<p>给你一个下标从 <strong>0</strong> 开始的整数数组 <code>nums</code> 。如果一对整数 <code>x</code> 和 <code>y</code> 满足以下条件，则称其为 <strong>强数对</strong> ：</p>

<ul> 
 <li><code>|x - y| &lt;= min(x, y)</code></li> 
</ul>

<p>你需要从 <code>nums</code> 中选出两个整数，且满足：这两个整数可以形成一个强数对，并且它们的按位异或（<code>XOR</code>）值是在该数组所有强数对中的<strong> 最大值 </strong>。</p>

<p>返回数组 <code>nums</code> 所有可能的强数对中的<strong> 最大 </strong>异或值。</p>

<p><strong>注意</strong>，你可以选择同一个整数两次来形成一个强数对。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,3,4,5]
<strong>输出：</strong>7
<strong>解释：</strong>数组<span><code> nums </code></span>中有 11 个强数对：(1, 1), (1, 2), (2, 2), (2, 3), (2, 4), (3, 3), (3, 4), (3, 5), (4, 4), (4, 5) 和 (5, 5) 。
这些强数对中的最大异或值是 3 XOR 4 = 7 。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [10,100]
<strong>输出：</strong>0
<strong>解释：</strong>数组<span><code> nums </code></span>中有 2 个强数对：(10, 10) 和 (100, 100) 。
这些强数对中的最大异或值是 10 XOR 10 = 0 ，数对 (100, 100) 的异或值也是 100 XOR 100 = 0 。
</pre>

<p><strong class="example">示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [5,6,25,30]
<strong>输出：</strong>7
<strong>解释：</strong>数组<span><code> nums </code></span>中有 6 个强数对：(5, 5), (5, 6), (6, 6), (25, 25), (25, 30) 和 (30, 30) 。
这些强数对中的最大异或值是 25 XOR 30 = 7 ；另一个异或值非零的数对是 (5, 6) ，其异或值是 5 XOR 6 = 3 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 50</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 100</code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>字典树</li><li>数组</li><li>哈希表</li><li>滑动窗口</li></div></div><br><div><li>👍 6</li><li>👎 0</li></div>