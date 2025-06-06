<p>给定一个正整数数组&nbsp;<code>queries</code> ，其取值范围在&nbsp;<code>1</code> 到 <code>m</code> 之间。 请你根据以下规则按顺序处理所有&nbsp;<code>queries[i]</code>（从 <code>i=0</code> 到 <code>i=queries.length-1</code>）：</p>

<ul> 
 <li>首先，你有一个排列&nbsp;<code>P=[1,2,3,...,m]</code>。</li> 
 <li>对于当前的 <code>i</code> ，找到&nbsp;<code>queries[i]</code> 在排列 <code>P</code> 中的位置（<b>从 0 开始索引</b>），然后将它移到排列&nbsp;<code>P</code> 的开头（即下标为 0 处）。注意， <code>queries[i]</code>&nbsp;的查询结果是 <code>queries[i]</code> 在 <code>P</code> 中移动前的位置。</li> 
</ul>

<p>返回一个数组，包含从给定 &nbsp;<code>queries</code>&nbsp;中查询到的结果。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>queries = [3,1,2,1], m = 5
<strong>输出：</strong>[2,1,2,1] 
<strong>解释：处理</strong> queries 的过程如下：
对于 i=0: queries[i]=3, P=[1,2,3,4,5], 3 在 P 中的位置是 <strong>2</strong>，然后我们把 3 移动到 P 的开头，得到 P=[3,1,2,4,5] 。
对于 i=1: queries[i]=1, P=[3,1,2,4,5], 1 在 P 中的位置是 <strong>1</strong>，然后我们把 1 移动到 P 的开头，得到 P=[1,3,2,4,5] 。 
对于 i=2: queries[i]=2, P=[1,3,2,4,5], 2 在 P 中的位置是 <strong>2</strong>，然后我们把 2 移动到 P 的开头，得到 P=[2,1,3,4,5] 。
对于 i=3: queries[i]=1, P=[2,1,3,4,5], 1 在 P 中的位置是 <strong>1</strong>，然后我们把 1 移动到 P 的开头，得到 P=[1,2,3,4,5] 。 
因此，包含结果的数组为 [2,1,2,1] 。  
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>queries = [4,1,2,2], m = 4
<strong>输出：</strong>[3,1,2,0]
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>queries = [7,5,5,8,3], m = 8
<strong>输出：</strong>[6,5,0,7,5]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= m &lt;= 10^3</code></li> 
 <li><code>1 &lt;= queries.length &lt;= m</code></li> 
 <li><code>1 &lt;= queries[i] &lt;= m</code></li> 
</ul>

<div><div>Related Topics</div><div><li>树状数组</li><li>数组</li><li>模拟</li></div></div><br><div><li>👍 52</li><li>👎 0</li></div>