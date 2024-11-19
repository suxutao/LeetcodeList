<p>Alice 和 Bob 玩一个游戏，两人轮流行动，<strong>Alice 先手</strong>&nbsp;。</p>

<p>给你一个 <strong>偶数长度</strong>&nbsp;的字符串&nbsp;<code>num</code>&nbsp;，每一个字符为数字字符或者&nbsp;<code>'?'</code>&nbsp;。每一次操作中，如果 <code>num</code>&nbsp;中至少有一个 <code>'?'</code>&nbsp;，那么玩家可以执行以下操作：</p>

<ol> 
 <li>选择一个下标 <code>i</code>&nbsp;满足&nbsp;<code>num[i] == '?'</code>&nbsp;。</li> 
 <li>将&nbsp;<code>num[i]</code>&nbsp;用&nbsp;<code>'0'</code>&nbsp;到&nbsp;<code>'9'</code>&nbsp;之间的一个数字字符替代。</li> 
</ol>

<p>当 <code>num</code>&nbsp;中没有<span style=""> </span><code>'?'</code> 时，游戏结束。</p>

<p>Bob 获胜的条件是 <code>num</code>&nbsp;中前一半数字的和 <strong>等于</strong>&nbsp;后一半数字的和。Alice 获胜的条件是前一半的和与后一半的和 <strong>不相等</strong>&nbsp;。</p>

<ul> 
 <li>比方说，游戏结束时&nbsp;<code>num = "243801"</code>&nbsp;，那么&nbsp;Bob 获胜，因为&nbsp;<code>2+4+3 = 8+0+1</code>&nbsp;。如果游戏结束时&nbsp;<code>num = "243803"</code>&nbsp;，那么 Alice 获胜，因为&nbsp;<code>2+4+3 != 8+0+3</code>&nbsp;。</li> 
</ul>

<p>在 Alice 和 Bob 都采取 <strong>最优</strong>&nbsp;策略的前提下，如果 Alice 获胜，请返回 <code>true</code>&nbsp;，如果 Bob 获胜，请返回 <code>false</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>num = "5023"
<b>输出：</b>false
<b>解释：</b>num 中没有 '?' ，没法进行任何操作。
前一半的和等于后一半的和：5 + 0 = 2 + 3 。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>num = "25??"
<b>输出：</b>true
<strong>解释：</strong>Alice 可以将两个 '?' 中的一个替换为 '9' ，Bob 无论如何都无法使前一半的和等于后一半的和。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<b>输入：</b>num = "?3295???"
<b>输出：</b>false
<b>解释：</b>Bob 总是能赢。一种可能的结果是：
- Alice 将第一个 '?' 用 '9' 替换。num = "93295???" 。
- Bob 将后面一半中的一个 '?' 替换为 '9' 。num = "932959??" 。
- Alice 将后面一半中的一个 '?' 替换为 '2' 。num = "9329592?" 。
- Bob 将后面一半中最后一个 '?' 替换为 '7' 。num = "93295927" 。
Bob 获胜，因为 9 + 3 + 2 + 9 = 5 + 9 + 2 + 7 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>2 &lt;= num.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>num.length</code>&nbsp;是 <strong>偶数</strong>&nbsp;。</li> 
 <li><code>num</code>&nbsp;只包含数字字符和&nbsp;<code>'?'</code>&nbsp;。</li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数学</li><li>字符串</li><li>博弈</li></div></div><br><div><li>👍 30</li><li>👎 0</li></div>