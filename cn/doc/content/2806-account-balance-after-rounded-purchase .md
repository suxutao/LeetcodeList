<p>一开始，你的银行账户里有&nbsp;<code>100</code>&nbsp;块钱。</p>

<p>给你一个整数<code>purchaseAmount</code>&nbsp;，它表示你在一次购买中愿意支出的金额。</p>

<p>在一个商店里，你进行一次购买，实际支出的金额会向 <strong>最近</strong>&nbsp;的&nbsp;<code>10</code>&nbsp;的 <strong>倍数</strong>&nbsp;取整。换句话说，你实际会支付一个&nbsp;<strong>非负</strong>&nbsp;金额&nbsp;<code>roundedAmount</code>&nbsp;，满足&nbsp;<code>roundedAmount</code>&nbsp;是&nbsp;<code>10</code>&nbsp;的倍数且&nbsp;<code>abs(roundedAmount - purchaseAmount)</code>&nbsp;的值 <strong>最小</strong>&nbsp;。</p>

<p>如果存在多于一个最接近的 <code>10</code>&nbsp;的倍数，<strong>较大的倍数</strong>&nbsp;是你的实际支出金额。</p>

<p>请你返回一个整数，表示你在愿意支出金额为<em>&nbsp;</em><code>purchaseAmount</code><em>&nbsp;</em>块钱的前提下，购买之后剩下的余额。</p>

<p><strong>注意：</strong> <code>0</code>&nbsp;也是&nbsp;<code>10</code>&nbsp;的倍数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><b>输入：</b>purchaseAmount = 9
<b>输出：</b>90
<b>解释：</b>这个例子中，最接近 9 的 10 的倍数是 10 。所以你的账户余额为 100 - 10 = 90 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><b>输入：</b>purchaseAmount = 15
<b>输出：</b>80
<b>解释：</b>这个例子中，有 2 个最接近 15 的 10 的倍数：10 和 20，较大的数 20 是你的实际开销。
所以你的账户余额为 100 - 20 = 80 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>0 &lt;= purchaseAmount &lt;= 100</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数学</li></div></div><br><div><li>👍 12</li><li>👎 0</li></div>