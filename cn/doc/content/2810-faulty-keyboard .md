<p>你的笔记本键盘存在故障，每当你在上面输入字符 <code>'i'</code> 时，它会反转你所写的字符串。而输入其他字符则可以正常工作。</p>

<p>给你一个下标从 <strong>0</strong> 开始的字符串 <code>s</code> ，请你用故障键盘依次输入每个字符。</p>

<p>返回最终笔记本屏幕上输出的字符串。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>s = "string"
<strong>输出：</strong>"rtsng"
<strong>解释：</strong>
输入第 1 个字符后，屏幕上的文本是："s" 。
输入第 2 个字符后，屏幕上的文本是："st" 。
输入第 3 个字符后，屏幕上的文本是："str" 。
因为第 4 个字符是 'i' ，屏幕上的文本被反转，变成 "rts" 。
输入第 5 个字符后，屏幕上的文本是："rtsn" 。
输入第 6 个字符后，屏幕上的文本是： "rtsng" 。
因此，返回 "rtsng" 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>s = "poiinter"
<strong>输出：</strong>"ponter"
<strong>解释：</strong>
输入第 1 个字符后，屏幕上的文本是："p" 。
输入第 2 个字符后，屏幕上的文本是："po" 。
因为第 3 个字符是 'i' ，屏幕上的文本被反转，变成 "op" 。
因为第 4 个字符是 'i' ，屏幕上的文本被反转，变成 "po" 。
输入第 5 个字符后，屏幕上的文本是："pon" 。
输入第 6 个字符后，屏幕上的文本是："pont" 。
输入第 7 个字符后，屏幕上的文本是："ponte" 。
输入第 8 个字符后，屏幕上的文本是："ponter" 。
因此，返回 "ponter" 。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= s.length &lt;= 100</code></li> 
 <li><code>s</code> 由小写英文字母组成</li> 
 <li><code>s[0] != 'i'</code></li> 
</ul>

<div><div>Related Topics</div><div><li>字符串</li><li>模拟</li></div></div><br><div><li>👍 23</li><li>👎 0</li></div>