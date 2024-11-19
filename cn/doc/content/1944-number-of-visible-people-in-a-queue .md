<p>有&nbsp;<code>n</code>&nbsp;个人排成一个队列，<strong>从左到右</strong>&nbsp;编号为&nbsp;<code>0</code>&nbsp;到&nbsp;<code>n - 1</code>&nbsp;。给你以一个整数数组&nbsp;<code>heights</code>&nbsp;，每个整数 <strong>互不相同</strong>，<code>heights[i]</code>&nbsp;表示第&nbsp;<code>i</code>&nbsp;个人的高度。</p>

<p>一个人能 <strong>看到</strong> 他右边另一个人的条件是这两人之间的所有人都比他们两人 <strong>矮</strong>&nbsp;。更正式的，第&nbsp;<code>i</code>&nbsp;个人能看到第&nbsp;<code>j</code>&nbsp;个人的条件是&nbsp;<code>i &lt; j</code>&nbsp;且&nbsp;<code>min(heights[i], heights[j]) &gt; max(heights[i+1], heights[i+2], ..., heights[j-1])</code>&nbsp;。</p>

<p>请你返回一个长度为 <code>n</code>&nbsp;的数组<em>&nbsp;</em><code>answer</code><em>&nbsp;</em>，其中<em>&nbsp;</em><code>answer[i]</code><em>&nbsp;</em>是第&nbsp;<code>i</code>&nbsp;个人在他右侧队列中能&nbsp;<strong>看到</strong>&nbsp;的&nbsp;<strong>人数</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2021/05/29/queue-plane.jpg" style="width: 600px; height: 247px;" /></p>

<pre>
<b>输入：</b>heights = [10,6,8,5,11,9]
<b>输出：</b>[3,1,2,1,1,0]
<strong>解释：</strong>
第 0 个人能看到编号为 1 ，2 和 4 的人。
第 1 个人能看到编号为 2 的人。
第 2 个人能看到编号为 3 和 4 的人。
第 3 个人能看到编号为 4 的人。
第 4 个人能看到编号为 5 的人。
第 5 个人谁也看不到因为他右边没人。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>heights = [5,1,2,3,10]
<b>输出：</b>[4,1,1,1,0]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>n == heights.length</code></li> 
 <li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= heights[i] &lt;= 10<sup>5</sup></code></li> 
 <li><code>heights</code>&nbsp;中所有数 <strong>互不相同</strong>&nbsp;。</li> 
</ul>

<div><div>Related Topics</div><div><li>栈</li><li>数组</li><li>单调栈</li></div></div><br><div><li>👍 113</li><li>👎 0</li></div>