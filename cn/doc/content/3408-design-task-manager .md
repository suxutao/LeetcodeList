<p>一个任务管理器系统可以让用户管理他们的任务，每个任务有一个优先级。这个系统需要高效地处理添加、修改、执行和删除任务的操作。</p>

<p>请你设计一个&nbsp;<code>TaskManager</code>&nbsp;类：</p>

<ul> 
 <li> <p><code>TaskManager(vector&lt;vector&lt;int&gt;&gt;&amp; tasks)</code>&nbsp;初始化任务管理器，初始化的数组格式为&nbsp;<code>[userId, taskId, priority]</code>&nbsp;，表示给 <code>userId</code>&nbsp;添加一个优先级为 <code>priority</code>&nbsp;的任务 <code>taskId</code>&nbsp;。</p> </li> 
 <li> <p><code>void add(int userId, int taskId, int priority)</code>&nbsp;表示给用户 <code>userId</code>&nbsp;添加一个优先级为 <code>priority</code>&nbsp;的任务 <code>taskId</code>&nbsp;，输入 <strong>保证&nbsp;</strong><code>taskId</code>&nbsp;不在系统中。</p> </li> 
 <li> <p><code>void edit(int taskId, int newPriority)</code>&nbsp;更新已经存在的任务&nbsp;<code>taskId</code>&nbsp;的优先级为&nbsp;<code>newPriority</code>&nbsp;。输入 <strong>保证</strong>&nbsp;<code>taskId</code>&nbsp;存在于系统中。</p> </li> 
 <li> <p><code>void rmv(int taskId)</code>&nbsp;从系统中删除任务&nbsp;<code>taskId</code>&nbsp;。输入 <strong>保证</strong>&nbsp;<code>taskId</code>&nbsp;存在于系统中。</p> </li> 
 <li> <p><code>int execTop()</code>&nbsp;执行所有用户的任务中优先级 <strong>最高</strong>&nbsp;的任务，如果有多个任务优先级相同且都为 <strong>最高</strong>&nbsp;，执行&nbsp;<code>taskId</code>&nbsp;最大的一个任务。执行完任务后，<code>taskId</code><strong>&nbsp;</strong>从系统中 <strong>删除</strong>&nbsp;。同时请你返回这个任务所属的用户&nbsp;<code>userId</code>&nbsp;。如果不存在任何任务，返回&nbsp;-1 。</p> </li> 
</ul>

<p><strong>注意</strong> ，一个用户可能被安排多个任务。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><br /> <span class="example-io">["TaskManager", "add", "edit", "execTop", "rmv", "add", "execTop"]<br /> [[[[1, 101, 10], [2, 102, 20], [3, 103, 15]]], [4, 104, 5], [102, 8], [], [101], [5, 105, 15], []]</span></p> 
</div>

<p><strong>输出：</strong><br /> <span class="example-io">[null, null, null, 3, null, null, 5] </span></p>

<p><strong>解释：</strong></p> TaskManager taskManager = new TaskManager([[1, 101, 10], [2, 102, 20], [3, 103, 15]]); // 分别给用户 1 ，2 和 3 初始化一个任务。
<br /> taskManager.add(4, 104, 5); // 给用户 4 添加优先级为 5 的任务 104 。
<br /> taskManager.edit(102, 8); // 更新任务 102 的优先级为 8 。
<br /> taskManager.execTop(); // 返回 3 。执行用户 3 的任务 103 。
<br /> taskManager.rmv(101); // 将系统中的任务 101 删除。
<br /> taskManager.add(5, 105, 15); // 给用户 5 添加优先级为 15 的任务 105 。
<br /> taskManager.execTop(); // 返回 5 。执行用户 5 的任务 105 。

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= tasks.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= userId &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= taskId &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= priority &lt;= 10<sup>9</sup></code></li> 
 <li><code>0 &lt;= newPriority &lt;= 10<sup>9</sup></code></li> 
 <li><code>add</code>&nbsp;，<code>edit</code>&nbsp;，<code>rmv</code>&nbsp;和&nbsp;<code>execTop</code>&nbsp;的总操作次数 <strong>加起来</strong>&nbsp;不超过&nbsp;<code>2 * 10<sup>5</sup></code> 次。</li> 
 <li>输入保证&nbsp;<code>taskId</code> 是合法的。</li> 
</ul>

<div><div>Related Topics</div><div><li>设计</li><li>哈希表</li><li>有序集合</li><li>堆（优先队列）</li></div></div><br><div><li>👍 2</li><li>👎 0</li></div>