<p>你和你的朋友，两个人一起玩&nbsp;<a href="https://baike.baidu.com/item/Nim游戏/6737105" target="_blank">Nim 游戏</a>：</p>

<ul> 
 <li>桌子上有一堆石头。</li> 
 <li>你们轮流进行自己的回合，&nbsp;<strong>你作为先手&nbsp;</strong>。</li> 
 <li>每一回合，轮到的人拿掉&nbsp;1 - 3 块石头。</li> 
 <li>拿掉最后一块石头的人就是获胜者。</li> 
</ul>

<p>假设你们每一步都是最优解。请编写一个函数，来判断你是否可以在给定石头数量为 <code>n</code> 的情况下赢得游戏。如果可以赢，返回 <code>true</code>；否则，返回 <code>false</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong><span><code>n = 4</code></span>
<strong>输出：</strong>false 
<strong>解释：</strong>以下是可能的结果:
1. 移除1颗石头。你的朋友移走了3块石头，包括最后一块。你的朋友赢了。
2. 移除2个石子。你的朋友移走2块石头，包括最后一块。你的朋友赢了。
3.你移走3颗石子。你的朋友移走了最后一块石头。你的朋友赢了。
在所有结果中，你的朋友是赢家。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>n = 1
<strong>输出：</strong>true
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>n = 2
<strong>输出：</strong>true
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 2<sup>31</sup> - 1</code></li> 
</ul>

<div><div>Related Topics</div><div><li>脑筋急转弯</li><li>数学</li><li>博弈</li></div></div><br><div><li>👍 724</li><li>👎 0</li></div>