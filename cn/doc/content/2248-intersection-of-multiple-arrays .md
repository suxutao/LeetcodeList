<p>给你一个二维整数数组 <code>nums</code> ，其中 <code>nums[i]</code> 是由 <strong>不同</strong> 正整数组成的一个非空数组，按 <strong>升序排列</strong> 返回一个数组，数组中的每个元素在 <code>nums</code>&nbsp;<strong>所有数组</strong> 中都出现过。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [[<em><strong>3</strong></em>,1,2,<em><strong>4</strong></em>,5],[1,2,<em><strong>3</strong></em>,<em><strong>4</strong></em>],[<em><strong>3</strong></em>,<em><strong>4</strong></em>,5,6]]
<strong>输出：</strong>[3,4]
<strong>解释：</strong>
nums[0] = [<em><strong>3</strong></em>,1,2,<em><strong>4</strong></em>,5]，nums[1] = [1,2,<em><strong>3</strong></em>,<em><strong>4</strong></em>]，nums[2] = [<em><strong>3</strong></em>,<em><strong>4</strong></em>,5,6]，在 nums 中每个数组中都出现的数字是 3 和 4 ，所以返回 [3,4] 。</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [[1,2,3],[4,5,6]]
<strong>输出：</strong>[]
<strong>解释：</strong>
不存在同时出现在 nums[0] 和 nums[1] 的整数，所以返回一个空列表 [] 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 1000</code></li> 
 <li><code>1 &lt;= sum(nums[i].length) &lt;= 1000</code></li> 
 <li><code>1 &lt;= nums[i][j] &lt;= 1000</code></li> 
 <li><code>nums[i]</code> 中的所有值 <strong>互不相同</strong></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>计数</li><li>排序</li></div></div><br><div><li>👍 37</li><li>👎 0</li></div>