<p>给你正整数&nbsp;<code>low</code>&nbsp;，<code>high</code>&nbsp;和&nbsp;<code>k</code>&nbsp;。</p>

<p>如果一个数满足以下两个条件，那么它是 <strong>美丽的</strong>&nbsp;：</p>

<ul> 
 <li>偶数数位的数目与奇数数位的数目相同。</li> 
 <li>这个整数可以被&nbsp;<code>k</code>&nbsp;整除。</li> 
</ul>

<p>请你返回范围&nbsp;<code>[low, high]</code>&nbsp;中美丽整数的数目。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<b>输入：</b>low = 10, high = 20, k = 3
<b>输出：</b>2
<b>解释：</b>给定范围中有 2 个美丽数字：[12,18]
- 12 是美丽整数，因为它有 1 个奇数数位和 1 个偶数数位，而且可以被 k = 3 整除。
- 18 是美丽整数，因为它有 1 个奇数数位和 1 个偶数数位，而且可以被 k = 3 整除。
以下是一些不是美丽整数的例子：
- 16 不是美丽整数，因为它不能被 k = 3 整除。
- 15 不是美丽整数，因为它的奇数数位和偶数数位的数目不相等。
给定范围内总共有 2 个美丽整数。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<b>输入：</b>low = 1, high = 10, k = 1
<b>输出：</b>1
<b>解释：</b>给定范围中有 1 个美丽数字：[10]
- 10 是美丽整数，因为它有 1 个奇数数位和 1 个偶数数位，而且可以被 k = 1 整除。
给定范围内总共有 1 个美丽整数。
</pre>

<p><strong class="example">示例 3：</strong></p>

<pre>
<b>输入：</b>low = 5, high = 5, k = 2
<b>输出：</b>0
<b>解释：</b>给定范围中有 0 个美丽数字。
- 5 不是美丽整数，因为它的奇数数位和偶数数位的数目不相等。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>0 &lt; low &lt;= high &lt;= 10<sup>9</sup></code></li> 
 <li><code>0 &lt; k &lt;= 20</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数学</li><li>动态规划</li></div></div><br><div><li>👍 25</li><li>👎 0</li></div>