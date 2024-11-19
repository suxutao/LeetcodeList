<p>给你一个正整数&nbsp;<code>n</code>&nbsp;，你需要找到一个下标从&nbsp;<strong>0</strong>&nbsp;开始的数组&nbsp;<code>powers</code>&nbsp;，它包含 <strong>最少</strong>&nbsp;数目的 <code>2</code>&nbsp;的幂，且它们的和为&nbsp;<code>n</code>&nbsp;。<code>powers</code>&nbsp;数组是&nbsp;<strong>非递减</strong>&nbsp;顺序的。根据前面描述，构造&nbsp;<code>powers</code>&nbsp;数组的方法是唯一的。</p>

<p>同时给你一个下标从 <strong>0</strong>&nbsp;开始的二维整数数组&nbsp;<code>queries</code>&nbsp;，其中&nbsp;<code>queries[i] = [left<sub>i</sub>, right<sub>i</sub>]</code>&nbsp;，其中&nbsp;<code>queries[i]</code>&nbsp;表示请你求出满足&nbsp;<code>left<sub>i</sub> &lt;= j &lt;= right<sub>i</sub></code>&nbsp;的所有&nbsp;<code>powers[j]</code>&nbsp;的乘积。</p>

<p>请你返回一个数组<em>&nbsp;</em><code>answers</code>&nbsp;，长度与<em>&nbsp;</em><code>queries</code>&nbsp;的长度相同，其中<em>&nbsp;</em><code>answers[i]</code>是第<em>&nbsp;</em><code>i</code>&nbsp;个查询的答案。由于查询的结果可能非常大，请你将每个&nbsp;<code>answers[i]</code>&nbsp;都对&nbsp;<code>10<sup>9</sup> + 7</code>&nbsp;<strong>取余</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>n = 15, queries = [[0,1],[2,2],[0,3]]
<b>输出：</b>[2,4,64]
<strong>解释：</strong>
对于 n = 15 ，得到 powers = [1,2,4,8] 。没法得到元素数目更少的数组。
第 1 个查询的答案：powers[0] * powers[1] = 1 * 2 = 2 。
第 2 个查询的答案：powers[2] = 4 。
第 3 个查询的答案：powers[0] * powers[1] * powers[2] * powers[3] = 1 * 2 * 4 * 8 = 64 。
每个答案对 10<sup>9</sup> + 7 得到的结果都相同，所以返回 [2,4,64] 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>n = 2, queries = [[0,0]]
<b>输出：</b>[2]
<strong>解释：</strong>
对于 n = 2, powers = [2] 。
唯一一个查询的答案是 powers[0] = 2 。答案对 10<sup>9</sup> + 7 取余后结果相同，所以返回 [2] 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li> 
 <li><code>1 &lt;= queries.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= start<sub>i</sub> &lt;= end<sub>i</sub> &lt; powers.length</code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>数组</li><li>前缀和</li></div></div><br><div><li>👍 18</li><li>👎 0</li></div>