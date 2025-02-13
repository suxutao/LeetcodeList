<p>读者来到图书馆排队借还书，图书管理员使用两个书车来完成整理借还书的任务。书车中的书从下往上叠加存放，图书管理员每次只能拿取书车顶部的书。排队的读者会有两种操作：</p>

<ul> 
 <li><code>push(bookID)</code>：把借阅的书籍还到图书馆。</li> 
 <li><code>pop()</code>：从图书馆中借出书籍。</li> 
</ul>

<p>为了保持图书的顺序，图书管理员每次取出供读者借阅的书籍是 <strong>最早</strong> 归还到图书馆的书籍。你需要返回 <strong>每次读者借出书的值</strong> 。</p>

<p>如果没有归还的书可以取出，返回&nbsp;<code>-1</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>
["BookQueue", "push", "push", "pop"]
[[], [1], [2], []]
<strong>输出：</strong>[null,null,null,1]
<strong>解释：
</strong>MyQueue myQueue = new MyQueue();
myQueue.push(1); // queue is: [1]
myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
myQueue.pop(); // return 1, queue is [2]</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= bookID &lt;= 10000</code></li> 
 <li>最多会对 <code>push</code>、<code>pop</code> 进行 <code>10000</code> 次调用</li> 
</ul>

<p>&nbsp;</p>

<div><div>Related Topics</div><div><li>栈</li><li>设计</li><li>队列</li></div></div><br><div><li>👍 799</li><li>👎 0</li></div>