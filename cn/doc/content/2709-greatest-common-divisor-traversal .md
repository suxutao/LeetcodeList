<p>给你一个下标从 <strong>0</strong>&nbsp;开始的整数数组&nbsp;<code>nums</code>&nbsp;，你可以在一些下标之间遍历。对于两个下标&nbsp;<code>i</code>&nbsp;和&nbsp;<code>j</code>（<code>i != j</code>），当且仅当&nbsp;<code>gcd(nums[i], nums[j]) &gt; 1</code>&nbsp;时，我们可以在两个下标之间通行，其中&nbsp;<code>gcd</code>&nbsp;是两个数的 <strong>最大公约数</strong>&nbsp;。</p>

<p>你需要判断 <code>nums</code>&nbsp;数组中&nbsp;<strong>任意&nbsp;</strong>两个满足 <code>i &lt; j</code>&nbsp;的下标&nbsp;<code>i</code>&nbsp;和&nbsp;<code>j</code> ，是否存在若干次通行可以从 <code>i</code>&nbsp;遍历到 <code>j</code>&nbsp;。</p>

<p>如果任意满足条件的下标对都可以遍历，那么返回 <code>true</code>&nbsp;，否则返回 <code>false</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>nums = [2,3,6]
<b>输出：</b>true
<b>解释：</b>这个例子中，总共有 3 个下标对：(0, 1) ，(0, 2) 和 (1, 2) 。
从下标 0 到下标 1 ，我们可以遍历 0 -&gt; 2 -&gt; 1 ，我们可以从下标 0 到 2 是因为 gcd(nums[0], nums[2]) = gcd(2, 6) = 2 &gt; 1 ，从下标 2 到 1 是因为 gcd(nums[2], nums[1]) = gcd(6, 3) = 3 &gt; 1 。
从下标 0 到下标 2 ，我们可以直接遍历，因为 gcd(nums[0], nums[2]) = gcd(2, 6) = 2 &gt; 1 。同理，我们也可以从下标 1 到 2 因为 gcd(nums[1], nums[2]) = gcd(3, 6) = 3 &gt; 1 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>nums = [3,9,5]
<b>输出：</b>false
<b>解释：</b>我们没法从下标 0 到 2 ，所以返回 false 。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<b>输入：</b>nums = [4,3,12,8]
<b>输出：</b>true
<b>解释：</b>总共有 6 个下标对：(0, 1) ，(0, 2) ，(0, 3) ，(1, 2) ，(1, 3) 和 (2, 3) 。所有下标对之间都存在可行的遍历，所以返回 true 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>并查集</li><li>数组</li><li>数学</li><li>数论</li></div></div><br><div><li>👍 27</li><li>👎 0</li></div>