<p>给你一个长度为&nbsp;<code>n</code>&nbsp;的&nbsp;<strong>正</strong>&nbsp;整数数组&nbsp;<code>nums</code>&nbsp;。</p>

<p>如果两个&nbsp;<strong>非负</strong>&nbsp;整数数组&nbsp;<code>(arr1, arr2)</code>&nbsp;满足以下条件，我们称它们是&nbsp;<strong>单调</strong>&nbsp;数组对：</p>

<ul> 
 <li>两个数组的长度都是&nbsp;<code>n</code>&nbsp;。</li> 
 <li><code>arr1</code>&nbsp;是单调<strong>&nbsp;非递减</strong>&nbsp;的，换句话说&nbsp;<code>arr1[0] &lt;= arr1[1] &lt;= ... &lt;= arr1[n - 1]</code>&nbsp;。</li> 
 <li><code>arr2</code>&nbsp;是单调 <strong>非递增</strong>&nbsp;的，换句话说&nbsp;<code>arr2[0] &gt;= arr2[1] &gt;= ... &gt;= arr2[n - 1]</code>&nbsp;。</li> 
 <li>对于所有的&nbsp;<code>0 &lt;= i &lt;= n - 1</code>&nbsp;都有&nbsp;<code>arr1[i] + arr2[i] == nums[i]</code>&nbsp;。</li> 
</ul>

<p>请你返回所有 <strong>单调</strong>&nbsp;数组对的数目。</p>

<p>由于答案可能很大，请你将它对&nbsp;<code>10<sup>9</sup> + 7</code>&nbsp;<strong>取余</strong>&nbsp;后返回。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>nums = [2,3,2]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>4</span></p>

<p><strong>解释：</strong></p>

<p>单调数组对包括：</p>

<ol> 
 <li><code>([0, 1, 1], [2, 2, 1])</code></li> 
 <li><code>([0, 1, 2], [2, 2, 0])</code></li> 
 <li><code>([0, 2, 2], [2, 1, 0])</code></li> 
 <li><code>([1, 2, 2], [1, 1, 0])</code></li> 
</ol>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>nums = [5,5,5,5]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>126</span></p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n == nums.length &lt;= 2000</code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 1000</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>数学</li><li>动态规划</li><li>组合数学</li><li>前缀和</li></div></div><br><div><li>👍 6</li><li>👎 0</li></div>