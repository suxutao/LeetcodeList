<p>我们称一个数字字符串是 <strong>好数字</strong> 当它满足（下标从 <strong>0</strong>&nbsp;开始）<strong>偶数</strong> 下标处的数字为 <strong>偶数</strong>&nbsp;且 <strong>奇数</strong>&nbsp;下标处的数字为 <strong>质数</strong>&nbsp;（<code>2</code>，<code>3</code>，<code>5</code>&nbsp;或&nbsp;<code>7</code>）。</p>

<ul> 
 <li>比方说，<code>"2582"</code>&nbsp;是好数字，因为偶数下标处的数字（<code>2</code>&nbsp;和&nbsp;<code>8</code>）是偶数且奇数下标处的数字（<code>5</code> 和&nbsp;<code>2</code>）为质数。但&nbsp;<code>"3245"</code>&nbsp;<strong>不是</strong> 好数字，因为&nbsp;<code>3</code>&nbsp;在偶数下标处但不是偶数。</li> 
</ul>

<p>给你一个整数&nbsp;<code>n</code>&nbsp;，请你返回长度为&nbsp;<code>n</code>&nbsp;且为好数字的数字字符串&nbsp;<strong>总数</strong>&nbsp;。由于答案可能会很大，请你将它对<strong>&nbsp;</strong><code>10<sup>9</sup> + 7</code>&nbsp;<strong>取余后返回</strong>&nbsp;。</p>

<p>一个 <strong>数字字符串</strong>&nbsp;是每一位都由&nbsp;<code>0</code>&nbsp;到 <code>9</code>&nbsp;组成的字符串，且可能包含前导 0 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>n = 1
<b>输出：</b>5
<b>解释：</b>长度为 1 的好数字包括 "0"，"2"，"4"，"6"，"8" 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>n = 4
<b>输出：</b>400
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<b>输入：</b>n = 50
<b>输出：</b>564908303
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 10<sup>15</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>递归</li><li>数学</li></div></div><br><div><li>👍 32</li><li>👎 0</li></div>