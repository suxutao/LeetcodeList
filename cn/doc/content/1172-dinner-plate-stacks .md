<p>我们把无限数量 ∞ 的栈排成一行，按从左到右的次序从 0 开始编号。每个栈的的最大容量&nbsp;<code>capacity</code> 都相同。</p>

<p>实现一个叫「餐盘」的类&nbsp;<code>DinnerPlates</code>：</p>

<ul> 
 <li><code>DinnerPlates(int capacity)</code>&nbsp;- 给出栈的最大容量&nbsp;<code>capacity</code>。</li> 
 <li><code>void push(int val)</code>&nbsp;- 将给出的正整数&nbsp;<code>val</code>&nbsp;推入&nbsp;<strong>从左往右第一个&nbsp;</strong>没有满的栈。</li> 
 <li><code>int pop()</code>&nbsp;- 返回&nbsp;<strong>从右往左第一个&nbsp;</strong>非空栈顶部的值，并将其从栈中删除；如果所有的栈都是空的，请返回&nbsp;<code>-1</code>。</li> 
 <li><code>int popAtStack(int index)</code>&nbsp;- 返回编号&nbsp;<code>index</code>&nbsp;的栈顶部的值，并将其从栈中删除；如果编号&nbsp;<code>index</code>&nbsp;的栈是空的，请返回 <code>-1</code>。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例：</strong></p>

<pre><strong>输入： </strong>
["DinnerPlates","push","push","push","push","push","popAtStack","push","push","popAtStack","popAtStack","pop","pop","pop","pop","pop"]
[[2],[1],[2],[3],[4],[5],[0],[20],[21],[0],[2],[],[],[],[],[]]
<strong>输出：</strong>
[null,null,null,null,null,null,2,null,null,20,21,5,4,3,1,-1]

<strong>解释：</strong>
DinnerPlates D = DinnerPlates(2);  // 初始化，栈最大容量 capacity = 2
D.push(1);
D.push(2);
D.push(3);
D.push(4);
D.push(5);         // 栈的现状为：    2 &nbsp;4
&nbsp;                                   1 &nbsp;3 &nbsp;5
                                    ﹈ ﹈ ﹈
D.popAtStack(0);   // 返回 2。栈的现状为：     &nbsp;4
            &nbsp;                             1 &nbsp;3 &nbsp;5
                                          ﹈ ﹈ ﹈
D.push(20);        // 栈的现状为：  20  4
&nbsp;                                  1 &nbsp;3 &nbsp;5
                                   ﹈ ﹈ ﹈
D.push(21);        // 栈的现状为：  20  4 21
&nbsp;                                  1 &nbsp;3 &nbsp;5
                                   ﹈ ﹈ ﹈
D.popAtStack(0);   // 返回 20。栈的现状为：       4 21
             &nbsp;                              1 &nbsp;3 &nbsp;5
                                            ﹈ ﹈ ﹈
D.popAtStack(2);   // 返回 21。栈的现状为：       4
             &nbsp;                              1 &nbsp;3 &nbsp;5
                                            ﹈ ﹈ ﹈ 
D.pop()            // 返回 5。栈的现状为：        4
             &nbsp;                              1 &nbsp;3 
                                            ﹈ ﹈  
D.pop()            // 返回 4。栈的现状为：    1  3 
                                           ﹈ ﹈   
D.pop()            // 返回 3。栈的现状为：    1 
                                           ﹈   
D.pop()            // 返回 1。现在没有栈。
D.pop()            // 返回 -1。仍然没有栈。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= capacity&nbsp;&lt;= 20000</code></li> 
 <li><code>1 &lt;= val&nbsp;&lt;= 20000</code></li> 
 <li><code>0 &lt;= index&nbsp;&lt;= 100000</code></li> 
 <li>最多会对&nbsp;<code>push</code>，<code>pop</code>，和&nbsp;<code>popAtStack</code>&nbsp;进行 <code>200000</code> 次调用。</li> 
</ul>

<div><div>Related Topics</div><div><li>栈</li><li>设计</li><li>哈希表</li><li>堆（优先队列）</li></div></div><br><div><li>👍 115</li><li>👎 0</li></div>