<p>有 <code>n</code> 堆石头排成一排，第 <code>i</code> 堆中有&nbsp;<code>stones[i]</code>&nbsp;块石头。</p>

<p>每次 <strong>移动</strong> 需要将 <strong>连续的</strong> <code>k</code> 堆石头合并为一堆，而这次移动的成本为这 <code>k</code> 堆中石头的总数。</p>

<p>返回把所有石头合并成一堆的最低成本。如果无法合并成一堆，返回 <code>-1</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>stones = [3,2,4,1], K = 2
<strong>输出：</strong>20
<strong>解释：</strong>
从 [3, 2, 4, 1] 开始。
合并 [3, 2]，成本为 5，剩下 [5, 4, 1]。
合并 [4, 1]，成本为 5，剩下 [5, 5]。
合并 [5, 5]，成本为 10，剩下 [10]。
总成本 20，这是可能的最小值。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>stones = [3,2,4,1], K = 3
<strong>输出：</strong>-1
<strong>解释：</strong>任何合并操作后，都会剩下 2 堆，我们无法再进行合并。所以这项任务是不可能完成的。.
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>stones = [3,5,1,2,6], K = 3
<strong>输出：</strong>25
<strong>解释：</strong>
从 [3, 5, 1, 2, 6] 开始。
合并 [5, 1, 2]，成本为 8，剩下 [3, 8, 6]。
合并 [3, 8, 6]，成本为 17，剩下 [17]。
总成本 25，这是可能的最小值。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>n == stones.length</code></li> 
 <li><code>1 &lt;= n &lt;= 30</code></li> 
 <li><code>1 &lt;= stones[i] &lt;= 100</code></li> 
 <li><code>2 &lt;= k &lt;= 30</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>动态规划</li><li>前缀和</li></div></div><br><div><li>👍 402</li><li>👎 0</li></div>