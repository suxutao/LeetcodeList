<p>给你一个包含若干星号 <code>*</code> 的字符串 <code>s</code> 。</p>

<p>在一步操作中，你可以：</p>

<ul> 
 <li>选中 <code>s</code> 中的一个星号。</li> 
 <li>移除星号 <strong>左侧</strong> 最近的那个 <strong>非星号</strong> 字符，并移除该星号自身。</li> 
</ul>

<p>返回移除 <strong>所有</strong> 星号之后的字符串<strong>。</strong></p>

<p><strong>注意：</strong></p>

<ul> 
 <li>生成的输入保证总是可以执行题面中描述的操作。</li> 
 <li>可以证明结果字符串是唯一的。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "leet**cod*e"
<strong>输出：</strong>"lecoe"
<strong>解释：</strong>从左到右执行移除操作：
- 距离第 1 个星号最近的字符是 "lee<em><strong>t</strong></em>**cod*e" 中的 't' ，s 变为 "lee*cod*e" 。
- 距离第 2 个星号最近的字符是 "le<em><strong>e</strong></em>*cod*e" 中的 'e' ，s 变为 "lecod*e" 。
- 距离第 3 个星号最近的字符是 "leco<em><strong>d</strong></em>*e" 中的 'd' ，s 变为 "lecoe" 。
不存在其他星号，返回 "lecoe" 。</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "erase*****"
<strong>输出：</strong>""
<strong>解释：</strong>整个字符串都会被移除，所以返回空字符串。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= s.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>s</code> 由小写英文字母和星号 <code>*</code> 组成</li> 
 <li><code>s</code> 可以执行上述操作</li> 
</ul>

<div><div>Related Topics</div><div><li>栈</li><li>字符串</li><li>模拟</li></div></div><br><div><li>👍 43</li><li>👎 0</li></div>