<p>如果在长度为 <code>m</code>&nbsp;的整数数组 <code>arr</code>&nbsp;中 <strong>超过一半</strong> 的元素值为&nbsp;<code>x</code>，那么我们称 <code>x</code>&nbsp;是 <strong>支配元素</strong>&nbsp;。</p>

<p>给你一个下标从 <strong>0</strong>&nbsp;开始长度为 <code>n</code>&nbsp;的整数数组&nbsp;<code>nums</code>&nbsp;，数据保证它含有一个 <strong>支配</strong> 元素。</p>

<p>你需要在下标 <code>i</code>&nbsp;处将&nbsp;<code>nums</code>&nbsp;分割成两个数组&nbsp;<code>nums[0, ..., i]</code> 和&nbsp;<code>nums[i + 1, ..., n - 1]</code>&nbsp;，如果一个分割满足以下条件，我们称它是&nbsp;<strong>合法</strong>&nbsp;的：</p>

<ul> 
 <li><code>0 &lt;= i &lt; n - 1</code></li> 
 <li><code>nums[0, ..., i]</code>&nbsp;和&nbsp;<code>nums[i + 1, ..., n - 1]</code>&nbsp;的支配元素相同。</li> 
</ul>

<p>这里，&nbsp;<code>nums[i, ..., j]</code>&nbsp;表示 <code>nums</code>&nbsp;的一个子数组，它开始于下标&nbsp;<code>i</code>&nbsp;，结束于下标&nbsp;<code>j</code>&nbsp;，两个端点都包含在子数组内。特别地，如果&nbsp;<code>j &lt; i</code>&nbsp;，那么&nbsp;<code>nums[i, ..., j]</code>&nbsp;表示一个空数组。</p>

<p>请你返回一个 <strong>合法分割</strong>&nbsp;的 <strong>最小</strong>&nbsp;下标。如果合法分割不存在，返回 <code>-1</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>nums = [1,2,2,2]
<b>输出：</b>2
<b>解释：</b>我们将数组在下标 2 处分割，得到 [1,2,2] 和 [2] 。
数组 [1,2,2] 中，元素 2 是支配元素，因为它在数组中出现了 2 次，且 2 * 2 &gt; 3 。
数组 [2] 中，元素 2 是支配元素，因为它在数组中出现了 1 次，且 1 * 2 &gt; 1 。
两个数组 [1,2,2] 和 [2] 都有与 nums 一样的支配元素，所以这是一个合法分割。
下标 2 是合法分割中的最小下标。</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>nums = [2,1,3,1,1,1,7,1,2,1]
<b>输出：</b>4
<b>解释：</b>我们将数组在下标 4 处分割，得到 [2,1,3,1,1] 和 [1,7,1,2,1] 。
数组 [2,1,3,1,1] 中，元素 1 是支配元素，因为它在数组中出现了 3 次，且 3 * 2 &gt; 5 。
数组 [1,7,1,2,1] 中，元素 1 是支配元素，因为它在数组中出现了 3 次，且 3 * 2 &gt; 5 。
两个数组 [2,1,3,1,1] 和 [1,7,1,2,1] 都有与 nums 一样的支配元素，所以这是一个合法分割。
下标 4 是所有合法分割中的最小下标。</pre>

<p><strong>示例 3：</strong></p>

<pre>
<b>输入：</b>nums = [3,3,3,3,7,2,2]
<b>输出：</b>-1
<b>解释：</b>没有合法分割。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li> 
 <li><code>nums</code>&nbsp;有且只有一个支配元素。</li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>排序</li></div></div><br><div><li>👍 15</li><li>👎 0</li></div>