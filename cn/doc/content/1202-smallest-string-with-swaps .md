<p>给你一个字符串&nbsp;<code>s</code>，以及该字符串中的一些「索引对」数组&nbsp;<code>pairs</code>，其中&nbsp;<code>pairs[i] =&nbsp;[a, b]</code>&nbsp;表示字符串中的两个索引（编号从 0 开始）。</p>

<p>你可以 <strong>任意多次交换</strong> 在&nbsp;<code>pairs</code>&nbsp;中任意一对索引处的字符。</p>

<p>返回在经过若干次交换后，<code>s</code>&nbsp;可以变成的按字典序最小的字符串。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre><strong>输入：</strong>s = "dcab", pairs = [[0,3],[1,2]]
<strong>输出：</strong>"bacd"
<strong>解释：</strong> 
交换 s[0] 和 s[3], s = "bcad"
交换 s[1] 和 s[2], s = "bacd"
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = "dcab", pairs = [[0,3],[1,2],[0,2]]
<strong>输出：</strong>"abcd"
<strong>解释：</strong>
交换 s[0] 和 s[3], s = "bcad"
交换 s[0] 和 s[2], s = "acbd"
交换 s[1] 和 s[2], s = "abcd"</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>s = "cba", pairs = [[0,1],[1,2]]
<strong>输出：</strong>"abc"
<strong>解释：</strong>
交换 s[0] 和 s[1], s = "bca"
交换 s[1] 和 s[2], s = "bac"
交换 s[0] 和 s[1], s = "abc"
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= s.length &lt;= 10^5</code></li> 
 <li><code>0 &lt;= pairs.length &lt;= 10^5</code></li> 
 <li><code>0 &lt;= pairs[i][0], pairs[i][1] &lt;&nbsp;s.length</code></li> 
 <li><code>s</code>&nbsp;中只含有小写英文字母</li> 
</ul>

<div><div>Related Topics</div><div><li>深度优先搜索</li><li>广度优先搜索</li><li>并查集</li><li>数组</li><li>哈希表</li><li>字符串</li><li>排序</li></div></div><br><div><li>👍 323</li><li>👎 0</li></div>