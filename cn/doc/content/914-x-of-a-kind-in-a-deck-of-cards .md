<p>给定一副牌，每张牌上都写着一个整数。</p>

<p>此时，你需要选定一个数字 <code>X</code>，使我们可以将整副牌按下述规则分成 1 组或更多组：</p>

<ul> 
 <li>每组都有&nbsp;<code>X</code>&nbsp;张牌。</li> 
 <li>组内所有的牌上都写着相同的整数。</li> 
</ul>

<p>仅当你可选的 <code>X &gt;= 2</code> 时返回&nbsp;<code>true</code>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>deck = [1,2,3,4,4,3,2,1]
<strong>输出：</strong>true
<strong>解释：</strong>可行的分组是 [1,1]，[2,2]，[3,3]，[4,4]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>deck = [1,1,1,2,2,2,3,3]
<strong>输出：</strong>false
<strong>解释：</strong>没有满足要求的分组。
</pre>

<p><br /> <strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= deck.length &lt;= 10<sup>4</sup></code></li> 
 <li><code>0 &lt;= deck[i] &lt; 10<sup>4</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>数学</li><li>计数</li><li>数论</li></div></div><br><div><li>👍 301</li><li>👎 0</li></div>