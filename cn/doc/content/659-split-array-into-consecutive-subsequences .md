<p>给你一个按 <strong>非递减顺序</strong> 排列的整数数组 <code>nums</code> 。</p>

<p>请你判断是否能在将 <code>nums</code> 分割成 <strong>一个或多个子序列</strong> 的同时满足下述 <strong>两个</strong> 条件：</p>

<div class="original__bRMd"> 
 <div> 
  <ul> 
   <li>每个子序列都是一个 <strong>连续递增序列</strong>（即，每个整数 <strong>恰好</strong> 比前一个整数大 <strong>1</strong> ）。</li> 
   <li>所有子序列的长度 <strong>至少</strong> 为 <code>3</code><strong> </strong>。</li> 
  </ul> 
 </div>
</div>

<p>如果可以分割 <code>nums</code> 并满足上述条件，则返回 <code>true</code> ；否则，返回 <code>false</code> 。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,3,3,4,5]
<strong>输出：</strong>true
<strong>解释：</strong>nums 可以分割成以下子序列：
[<em><strong>1</strong></em>,<em><strong>2</strong></em>,<em><strong>3</strong></em>,3,4,5] --&gt; 1, 2, 3
[1,2,3,<em><strong>3</strong></em>,<em><strong>4</strong></em>,<em><strong>5</strong></em>] --&gt; 3, 4, 5
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,3,3,4,4,5,5]
<strong>输出：</strong>true
<strong>解释：</strong>nums 可以分割成以下子序列：
[<em><strong>1</strong></em>,<em><strong>2</strong></em>,<em><strong>3</strong></em>,3,<em><strong>4</strong></em>,4,<em><strong>5</strong></em>,5] --&gt; 1, 2, 3, 4, 5
[1,2,3,<em><strong>3</strong></em>,4,<em><strong>4</strong></em>,5,<em><strong>5</strong></em>] --&gt; 3, 4, 5
</pre>

<p><strong class="example">示例 3：</strong></p>

<pre>
<strong>输入：</strong>nums = [1,2,3,4,4,5]
<strong>输出：</strong>false
<strong>解释：</strong>无法将 nums 分割成长度至少为 3 的连续递增子序列。
</pre>

<p>&nbsp;</p>

<p><b>提示：</b></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li> 
 <li><code>-1000 &lt;= nums[i] &lt;= 1000</code></li> 
 <li><code>nums</code> 按非递减顺序排列</li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数组</li><li>哈希表</li><li>堆（优先队列）</li></div></div><br><div><li>👍 475</li><li>👎 0</li></div>