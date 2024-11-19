<p>在显示着数字&nbsp;<code>startValue</code>&nbsp;的坏计算器上，我们可以执行以下两种操作：</p>

<ul> 
 <li><strong>双倍（Double）：</strong>将显示屏上的数字乘 2；</li> 
 <li><strong>递减（Decrement）：</strong>将显示屏上的数字减 <code>1</code> 。</li> 
</ul>

<p>给定两个整数&nbsp;<code>startValue</code>&nbsp;和&nbsp;<code>target</code>&nbsp;。返回显示数字&nbsp;<code>target</code>&nbsp;所需的最小操作数。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>startValue = 2, target = 3
<strong>输出：</strong>2
<strong>解释：</strong>先进行双倍运算，然后再进行递减运算 {2 -&gt; 4 -&gt; 3}.
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>startValue = 5, target = 8
<strong>输出：</strong>2
<strong>解释：</strong>先递减，再双倍 {5 -&gt; 4 -&gt; 8}.
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>startValue = 3, target = 10
<strong>输出：</strong>3
<strong>解释：</strong>先双倍，然后递减，再双倍 {3 -&gt; 6 -&gt; 5 -&gt; 10}.
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= startValue, target &lt;= 10<sup>9</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数学</li></div></div><br><div><li>👍 196</li><li>👎 0</li></div>