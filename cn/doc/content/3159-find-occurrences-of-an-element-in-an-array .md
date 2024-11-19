<p>给你一个整数数组&nbsp;<code>nums</code>&nbsp;，一个整数数组&nbsp;<code>queries</code>&nbsp;和一个整数&nbsp;<code>x</code>&nbsp;。</p>

<p>对于每个查询&nbsp;<code>queries[i]</code>&nbsp;，你需要找到&nbsp;<code>nums</code>&nbsp;中第&nbsp;<code>queries[i]</code>&nbsp;个&nbsp;<code>x</code>&nbsp;的位置，并返回它的下标。如果数组中&nbsp;<code>x</code>&nbsp;的出现次数少于&nbsp;<code>queries[i]</code>&nbsp;，该查询的答案为 -1 。</p>

<p>请你返回一个整数数组&nbsp;<code>answer</code>&nbsp;，包含所有查询的答案。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>nums = [1,3,1,7], queries = [1,3,2,4], x = 1</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>[0,-1,2,-1]</span></p>

<p><strong>解释：</strong></p>

<ul> 
 <li>第 1 个查询，第一个 1 出现在下标 0 处。</li> 
 <li>第 2 个查询，<code>nums</code>&nbsp;中只有两个 1 ，所以答案为 -1 。</li> 
 <li>第 3 个查询，第二个 1 出现在下标 2 处。</li> 
 <li>第 4 个查询，<code>nums</code>&nbsp;中只有两个 1 ，所以答案为 -1 。</li> 
</ul>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>nums = [1,2,3], queries = [10], x = 5</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>[-1]</span></p>

<p><strong>解释：</strong></p>

<ul> 
 <li>第 1 个查询，<code>nums</code>&nbsp;中没有 5 ，所以答案为 -1 。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length, queries.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= queries[i] &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums[i], x &lt;= 10<sup>4</sup></code></li> 
</ul>

<div><li>👍 2</li><li>👎 0</li></div>