<p>设计一个数字容器系统，可以实现以下功能：</p>

<ul> 
 <li>在系统中给定下标处&nbsp;<strong>插入</strong>&nbsp;或者 <strong>替换</strong>&nbsp;一个数字。</li> 
 <li><strong>返回</strong>&nbsp;系统中给定数字的最小下标。</li> 
</ul>

<p>请你实现一个&nbsp;<code>NumberContainers</code>&nbsp;类：</p>

<ul> 
 <li><code>NumberContainers()</code>&nbsp;初始化数字容器系统。</li> 
 <li><code>void change(int index, int number)</code> 在下标&nbsp;<code>index</code>&nbsp;处填入&nbsp;<code>number</code>&nbsp;。如果该下标&nbsp;<code>index</code>&nbsp;处已经有数字了，那么用 <code>number</code>&nbsp;替换该数字。</li> 
 <li><code>int find(int number)</code>&nbsp;返回给定数字&nbsp;<code>number</code>&nbsp;在系统中的最小下标。如果系统中没有&nbsp;<code>number</code>&nbsp;，那么返回&nbsp;<code>-1</code>&nbsp;。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre>
<strong>输入：</strong>
["NumberContainers", "find", "change", "change", "change", "change", "find", "change", "find"]
[[], [10], [2, 10], [1, 10], [3, 10], [5, 10], [10], [1, 20], [10]]
<strong>输出：</strong>
[null, -1, null, null, null, null, 1, null, 2]

<strong>解释：</strong>
NumberContainers nc = new NumberContainers();
nc.find(10); // 没有数字 10 ，所以返回 -1 。
nc.change(2, 10); // 容器中下标为 2 处填入数字 10 。
nc.change(1, 10); // 容器中下标为 1 处填入数字 10 。
nc.change(3, 10); // 容器中下标为 3 处填入数字 10 。
nc.change(5, 10); // 容器中下标为 5 处填入数字 10 。
nc.find(10); // 数字 10 所在的下标为 1 ，2 ，3 和 5 。因为最小下标为 1 ，所以返回 1 。
nc.change(1, 20); // 容器中下标为 1 处填入数字 20 。注意，下标 1 处之前为 10 ，现在被替换为 20 。
nc.find(10); // 数字 10 所在下标为 2 ，3 和 5 。最小下标为 2 ，所以返回 2 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= index, number &lt;= 10<sup>9</sup></code></li> 
 <li>调用&nbsp;<code>change</code> 和&nbsp;<code>find</code>&nbsp;的&nbsp;<strong>总次数</strong>&nbsp;不超过&nbsp;<code>10<sup>5</sup></code> 次。</li> 
</ul>

<div><div>Related Topics</div><div><li>设计</li><li>哈希表</li><li>有序集合</li><li>堆（优先队列）</li></div></div><br><div><li>👍 32</li><li>👎 0</li></div>