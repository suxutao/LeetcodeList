<p>现有一个有向图，其中包含 <code>n</code> 个节点，节点编号从 <code>0</code> 到 <code>n - 1</code> 。此外，该图还包含了 <code>n</code> 条有向边。</p>

<p>给你一个下标从 <strong>0</strong> 开始的数组 <code>edges</code> ，其中 <code>edges[i]</code> 表示存在一条从节点 <code>i</code> 到节点 <code>edges[i]</code> 的边。</p>

<p>想象在图上发生以下过程：</p>

<ul> 
 <li>你从节点 <code>x</code> 开始，通过边访问其他节点，直到你在<strong> 此过程 </strong>中再次访问到之前已经访问过的节点。</li> 
</ul>

<p>返回数组 <code>answer</code> 作为答案，其中 <code>answer[i]</code> 表示如果从节点 <code>i</code> 开始执行该过程，你可以访问到的不同节点数。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2023/08/31/graaphdrawio-1.png" /> 
<pre>
<strong>输入：</strong>edges = [1,2,0,0]
<strong>输出：</strong>[3,3,3,4]
<strong>解释：</strong>从每个节点开始执行该过程，记录如下：
- 从节点 0 开始，访问节点 0 -&gt; 1 -&gt; 2 -&gt; 0 。访问的不同节点数是 3 。
- 从节点 1 开始，访问节点 1 -&gt; 2 -&gt; 0 -&gt; 1 。访问的不同节点数是 3 。
- 从节点 2 开始，访问节点 2 -&gt; 0 -&gt; 1 -&gt; 2 。访问的不同节点数是 3 。
- 从节点 3 开始，访问节点 3 -&gt; 0 -&gt; 1 -&gt; 2 -&gt; 0 。访问的不同节点数是 4 。
</pre>

<p><strong class="example">示例 2：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2023/08/31/graaph2drawio.png" style="width: 191px; height: 251px;" /> 
<pre>
<strong>输入：</strong>edges = [1,2,3,4,0]
<strong>输出：</strong>[5,5,5,5,5]
<strong>解释：</strong>无论从哪个节点开始，在这个过程中，都可以访问到图中的每一个节点。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>n == edges.length</code></li> 
 <li><code>2 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= edges[i] &lt;= n - 1</code></li> 
 <li><code>edges[i] != i</code></li> 
</ul>

<div><div>Related Topics</div><div><li>图</li><li>记忆化搜索</li><li>动态规划</li></div></div><br><div><li>👍 20</li><li>👎 0</li></div>