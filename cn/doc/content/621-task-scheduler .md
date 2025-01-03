<p>给你一个用字符数组&nbsp;<code>tasks</code> 表示的 CPU 需要执行的任务列表，用字母 A 到 Z 表示，以及一个冷却时间 <code>n</code>。每个周期或时间间隔允许完成一项任务。任务可以按任何顺序完成，但有一个限制：两个<strong> 相同种类</strong> 的任务之间必须有长度为<strong>&nbsp;</strong><code>n</code><strong> </strong>的冷却时间。</p>

<p>返回完成所有任务所需要的<strong> 最短时间间隔</strong>&nbsp;。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>tasks = ["A","A","A","B","B","B"], n = 2
<strong>输出：</strong>8
<strong>解释：</strong>A -&gt; B -&gt; (待命) -&gt; A -&gt; B -&gt; (待命) -&gt; A -&gt; B
     在本示例中，两个相同类型任务之间必须间隔长度为 n = 2 的冷却时间，而执行一个任务只需要一个单位时间，所以中间出现了（待命）状态。 </pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>tasks = ["A","A","A","B","B","B"], n = 0
<strong>输出：</strong>6
<strong>解释：</strong>在这种情况下，任何大小为 6 的排列都可以满足要求，因为 n = 0
["A","A","A","B","B","B"]
["A","B","A","B","A","B"]
["B","B","B","A","A","A"]
...
诸如此类
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>tasks = ["A","A","A","A","A","A","B","C","D","E","F","G"], n = 2
<strong>输出：</strong>16
<strong>解释：</strong>一种可能的解决方案是：
     A -&gt; B -&gt; C -&gt; A -&gt; D -&gt; E -&gt; A -&gt; F -&gt; G -&gt; A -&gt; (待命) -&gt; (待命) -&gt; A -&gt; (待命) -&gt; (待命) -&gt; A
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= tasks.length &lt;= 10<sup>4</sup></code></li> 
 <li><code>tasks[i]</code> 是大写英文字母</li> 
 <li><code>0 &lt;= n &lt;= 100</code></li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数组</li><li>哈希表</li><li>计数</li><li>排序</li><li>堆（优先队列）</li></div></div><br><div><li>👍 1265</li><li>👎 0</li></div>