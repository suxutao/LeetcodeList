<p>给你一个整数数组&nbsp;<code>banned</code>&nbsp;和两个整数&nbsp;<code>n</code> 和&nbsp;<code>maxSum</code>&nbsp;。你需要按照以下规则选择一些整数：</p>

<ul> 
 <li>被选择整数的范围是&nbsp;<code>[1, n]</code>&nbsp;。</li> 
 <li>每个整数 <strong>至多</strong>&nbsp;选择 <strong>一次</strong>&nbsp;。</li> 
 <li>被选择整数不能在数组&nbsp;<code>banned</code>&nbsp;中。</li> 
 <li>被选择整数的和不超过&nbsp;<code>maxSum</code>&nbsp;。</li> 
</ul>

<p>请你返回按照上述规则 <strong>最多</strong>&nbsp;可以选择的整数数目。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>banned = [1,6,5], n = 5, maxSum = 6
<b>输出：</b>2
<b>解释：</b>你可以选择整数 2 和 4 。
2 和 4 在范围 [1, 5] 内，且它们都不在 banned 中，它们的和是 6 ，没有超过 maxSum 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>banned = [1,2,3,4,5,6,7], n = 8, maxSum = 1
<b>输出：</b>0
<b>解释：</b>按照上述规则无法选择任何整数。
</pre>

<p><strong>示例 3：</strong></p>

<pre><b>输入：</b>banned = [11], n = 7, maxSum = 50
<b>输出：</b>7
<b>解释：</b>你可以选择整数 1, 2, 3, 4, 5, 6 和 7 。
它们都在范围 [1, 7] 中，且都没出现在 banned 中，它们的和是 28 ，没有超过 maxSum 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= banned.length &lt;= 10<sup>4</sup></code></li> 
 <li><code>1 &lt;= banned[i], n &lt;= 10<sup>4</sup></code></li> 
 <li><code>1 &lt;= maxSum &lt;= 10<sup>9</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数组</li><li>哈希表</li><li>二分查找</li><li>排序</li></div></div><br><div><li>👍 10</li><li>👎 0</li></div>