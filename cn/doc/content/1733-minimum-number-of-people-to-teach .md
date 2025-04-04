<p>在一个由&nbsp;<code>m</code>&nbsp;个用户组成的社交网络里，我们获取到一些用户之间的好友关系。两个用户之间可以相互沟通的条件是他们都掌握同一门语言。</p>

<p>给你一个整数&nbsp;<code>n</code>&nbsp;，数组&nbsp;<code>languages</code>&nbsp;和数组&nbsp;<code>friendships</code>&nbsp;，它们的含义如下：</p>

<ul> 
 <li>总共有&nbsp;<code>n</code>&nbsp;种语言，编号从&nbsp;<code>1</code> 到&nbsp;<code>n</code>&nbsp;。</li> 
 <li><code>languages[i]</code>&nbsp;是第 <code>i</code>&nbsp;位用户掌握的语言集合。</li> 
 <li><code>friendships[i] = [u<sub>​​​​​​i</sub>​​​, v<sub>​​​​​​i</sub>]</code>&nbsp;表示&nbsp;<code>u<sup>​​​​​</sup><sub>​​​​​​i</sub></code>​​​​​ 和&nbsp;<code>v<sub>i</sub></code>&nbsp;为好友关系。</li> 
</ul>

<p>你可以选择 <strong>一门</strong>&nbsp;语言并教会一些用户，使得所有好友之间都可以相互沟通。请返回你 <strong>最少</strong>&nbsp;需要教会多少名用户。</p> 请注意，好友关系没有传递性，也就是说如果&nbsp;
<code>x</code> 和&nbsp;
<code>y</code>&nbsp;是好友，且&nbsp;
<code>y</code>&nbsp;和&nbsp;
<code>z</code>&nbsp;是好友，&nbsp;
<code>x</code> 和&nbsp;
<code>z</code>&nbsp;不一定是好友。

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>n = 2, languages = [[1],[2],[1,2]], friendships = [[1,2],[1,3],[2,3]]
<b>输出：</b>1
<b>解释：</b>你可以选择教用户 1 第二门语言，也可以选择教用户 2 第一门语言。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>n = 3, languages = [[2],[1,3],[1,2],[3]], friendships = [[1,4],[1,2],[3,4],[2,3]]
<b>输出：</b>2
<b>解释：</b>教用户 1 和用户 3 第三门语言，需要教 2 名用户。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>2 &lt;= n &lt;= 500</code></li> 
 <li><code>languages.length == m</code></li> 
 <li><code>1 &lt;= m &lt;= 500</code></li> 
 <li><code>1 &lt;= languages[i].length &lt;= n</code></li> 
 <li><code>1 &lt;= languages[i][j] &lt;= n</code></li> 
 <li><code>1 &lt;= u<sub>​​​​​​i</sub> &lt; v<sub>​​​​​​i</sub> &lt;= languages.length</code></li> 
 <li><code>1 &lt;= friendships.length &lt;= 500</code></li> 
 <li>所有的好友关系&nbsp;<code>(u<sub>​​​​​i, </sub>v<sub>​​​​​​i</sub>)</code>&nbsp;都是唯一的。</li> 
 <li><code>languages[i]</code>&nbsp;中包含的值互不相同。</li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数组</li><li>哈希表</li></div></div><br><div><li>👍 28</li><li>👎 0</li></div>