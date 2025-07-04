<p>给你一个整数 <code>n</code> ，表示有 <code>n</code> 个专家从 <code>0</code> 到 <code>n - 1</code> 编号。另外给你一个下标从 0 开始的二维整数数组 <code>meetings</code> ，其中 <code>meetings[i] = [x<sub>i</sub>, y<sub>i</sub>, time<sub>i</sub>]</code> 表示专家 <code>x<sub>i</sub></code> 和专家 <code>y<sub>i</sub></code> 在时间 <code>time<sub>i</sub></code> 要开一场会。一个专家可以同时参加 <strong>多场会议</strong> 。最后，给你一个整数 <code>firstPerson</code> 。</p>

<p>专家 <code>0</code> 有一个 <strong>秘密</strong> ，最初，他在时间&nbsp;<code>0</code> 将这个秘密分享给了专家 <code>firstPerson</code> 。接着，这个秘密会在每次有知晓这个秘密的专家参加会议时进行传播。更正式的表达是，每次会议，如果专家 <code>x<sub>i</sub></code> 在时间 <code>time<sub>i</sub></code> 时知晓这个秘密，那么他将会与专家 <code>y<sub>i</sub></code> 分享这个秘密，反之亦然。</p>

<p>秘密共享是 <strong>瞬时发生</strong> 的。也就是说，在同一时间，一个专家不光可以接收到秘密，还能在其他会议上与其他专家分享。</p>

<p>在所有会议都结束之后，返回所有知晓这个秘密的专家列表。你可以按 <strong>任何顺序</strong> 返回答案。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>n = 6, meetings = [[1,2,5],[2,3,8],[1,5,10]], firstPerson = 1
<strong>输出：</strong>[0,1,2,3,5]
<strong>解释：
</strong>时间 0 ，专家 0 将秘密与专家 1 共享。
时间 5 ，专家 1 将秘密与专家 2 共享。
时间 8 ，专家 2 将秘密与专家 3 共享。
时间 10 ，专家 1 将秘密与专家 5 共享。
因此，在所有会议结束后，专家 0、1、2、3 和 5 都将知晓这个秘密。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>n = 4, meetings = [[3,1,3],[1,2,2],[0,3,3]], firstPerson = 3
<strong>输出：</strong>[0,1,3]
<strong>解释：</strong>
时间 0 ，专家 0 将秘密与专家 3 共享。
时间 2 ，专家 1 与专家 2 都不知晓这个秘密。
时间 3 ，专家 3 将秘密与专家 0 和专家 1 共享。
因此，在所有会议结束后，专家 0、1 和 3 都将知晓这个秘密。
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>n = 5, meetings = [[3,4,2],[1,2,1],[2,3,1]], firstPerson = 1
<strong>输出：</strong>[0,1,2,3,4]
<strong>解释：</strong>
时间 0 ，专家 0 将秘密与专家 1 共享。
时间 1 ，专家 1 将秘密与专家 2 共享，专家 2 将秘密与专家 3 共享。
注意，专家 2 可以在收到秘密的同一时间分享此秘密。
时间 2 ，专家 3 将秘密与专家 4 共享。
因此，在所有会议结束后，专家 0、1、2、3 和 4 都将知晓这个秘密。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>2 &lt;= n &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= meetings.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>meetings[i].length == 3</code></li> 
 <li><code>0 &lt;= x<sub>i</sub>, y<sub>i </sub>&lt;= n - 1</code></li> 
 <li><code>x<sub>i</sub> != y<sub>i</sub></code></li> 
 <li><code>1 &lt;= time<sub>i</sub> &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= firstPerson &lt;= n - 1</code></li> 
</ul>

<div><div>Related Topics</div><div><li>深度优先搜索</li><li>广度优先搜索</li><li>并查集</li><li>图</li><li>排序</li></div></div><br><div><li>👍 75</li><li>👎 0</li></div>