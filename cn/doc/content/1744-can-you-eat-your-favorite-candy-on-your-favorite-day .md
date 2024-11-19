<p>给你一个下标从 <strong>0</strong> 开始的正整数数组&nbsp;<code>candiesCount</code>&nbsp;，其中&nbsp;<code>candiesCount[i]</code>&nbsp;表示你拥有的第&nbsp;<code>i</code>&nbsp;类糖果的数目。同时给你一个二维数组&nbsp;<code>queries</code>&nbsp;，其中&nbsp;<code>queries[i] = [favoriteType<sub>i</sub>, favoriteDay<sub>i</sub>, dailyCap<sub>i</sub>]</code>&nbsp;。</p>

<p>你按照如下规则进行一场游戏：</p>

<ul> 
 <li>你从第&nbsp;<code><strong>0</strong></code><strong>&nbsp;</strong>天开始吃糖果。</li> 
 <li>你在吃完 <strong>所有</strong>&nbsp;第 <code>i - 1</code>&nbsp;类糖果之前，<strong>不能</strong>&nbsp;吃任何一颗第 <code>i</code>&nbsp;类糖果。</li> 
 <li>在吃完所有糖果之前，你必须每天 <strong>至少</strong>&nbsp;吃 <strong>一颗</strong>&nbsp;糖果。</li> 
</ul>

<p>请你构建一个布尔型数组&nbsp;<code>answer</code>&nbsp;，用以给出 <code>queries</code> 中每一项的对应答案。此数组满足：</p>

<ul> 
 <li><code>answer.length == queries.length</code> 。<code>answer[i]</code> 是 <code>queries[i]</code> 的答案。</li> 
 <li><code>answer[i]</code> 为&nbsp;<code>true</code>&nbsp;的条件是：在每天吃 <strong>不超过</strong> <code>dailyCap<sub>i</sub></code><sub>&nbsp;</sub>颗糖果的前提下，你可以在第&nbsp;<code>favoriteDay<sub>i</sub></code>&nbsp;天吃到第&nbsp;<code>favoriteType<sub>i</sub></code>&nbsp;类糖果；否则 <code>answer[i]</code>&nbsp;为 <code>false</code>&nbsp;。</li> 
</ul>

<p>注意，只要满足上面 3 条规则中的第二条规则，你就可以在同一天吃不同类型的糖果。</p>

<p>请你返回得到的数组<em>&nbsp;</em><code>answer</code>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>candiesCount = [7,4,5,3,8], queries = [[0,2,2],[4,2,4],[2,13,1000000000]]
<b>输出：</b>[true,false,true]
<strong>提示：</strong>
1- 在第 0 天吃 2 颗糖果(类型 0），第 1 天吃 2 颗糖果（类型 0），第 2 天你可以吃到类型 0 的糖果。
2- 每天你最多吃 4 颗糖果。即使第 0 天吃 4 颗糖果（类型 0），第 1 天吃 4 颗糖果（类型 0 和类型 1），你也没办法在第 2 天吃到类型 4 的糖果。换言之，你没法在每天吃 4 颗糖果的限制下在第 2 天吃到第 4 类糖果。
3- 如果你每天吃 1 颗糖果，你可以在第 13 天吃到类型 2 的糖果。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>candiesCount = [5,2,6,4,1], queries = [[3,1,2],[4,10,3],[3,10,100],[4,100,30],[1,3,1]]
<b>输出：</b>[false,true,true,false,false]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= candiesCount.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= candiesCount[i] &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= queries.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>queries[i].length == 3</code></li> 
 <li><code>0 &lt;= favoriteType<sub>i</sub> &lt; candiesCount.length</code></li> 
 <li><code>0 &lt;= favoriteDay<sub>i</sub> &lt;= 10<sup>9</sup></code></li> 
 <li><code>1 &lt;= dailyCap<sub>i</sub> &lt;= 10<sup>9</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>前缀和</li></div></div><br><div><li>👍 146</li><li>👎 0</li></div>