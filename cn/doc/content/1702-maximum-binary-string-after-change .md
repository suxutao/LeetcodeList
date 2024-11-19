<p>给你一个二进制字符串&nbsp;<code>binary</code>&nbsp;，它仅有&nbsp;<code>0</code>&nbsp;或者&nbsp;<code>1</code>&nbsp;组成。你可以使用下面的操作任意次对它进行修改：</p>

<ul> 
 <li>操作 1 ：如果二进制串包含子字符串&nbsp;<code>"00"</code>&nbsp;，你可以用&nbsp;<code>"10"</code>&nbsp;将其替换。 </li>
</ul>

    <ul>
    	<li>比方说， <code>"<strong>00</strong>010" -> "<strong>10</strong>010"</code></li>
    </ul>
    </li>
    <li>操作 2 ：如果二进制串包含子字符串 <code>"10"</code> ，你可以用 <code>"01"</code> 将其替换。
    <ul>
    	<li>比方说， <code>"000<strong>10</strong>" -> "000<strong>01</strong>"</code></li>
    </ul>
    </li>


<p>请你返回执行上述操作任意次以后能得到的 <strong>最大二进制字符串</strong>&nbsp;。如果二进制字符串 <code>x</code>&nbsp;对应的十进制数字大于二进制字符串 <code>y</code>&nbsp;对应的十进制数字，那么我们称二进制字符串<em>&nbsp;</em><code>x</code><em>&nbsp;</em>大于二进制字符串<em>&nbsp;</em><code>y</code><em>&nbsp;</em>。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>binary = "000110"
<b>输出：</b>"111011"
<b>解释：</b>一个可行的转换为：
"0001<strong>10</strong>" -&gt; "0001<strong>01</strong>" 
"<strong>00</strong>0101" -&gt; "<strong>10</strong>0101" 
"1<strong>00</strong>101" -&gt; "1<strong>10</strong>101" 
"110<strong>10</strong>1" -&gt; "110<strong>01</strong>1" 
"11<strong>00</strong>11" -&gt; "11<strong>10</strong>11"
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>binary = "01"
<b>输出：</b>"01"
<b>解释：</b>"01" 没办法进行任何转换。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= binary.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>binary</code> 仅包含&nbsp;<code>'0'</code> 和&nbsp;<code>'1'</code> 。</li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>字符串</li></div></div><br><div><li>👍 64</li><li>👎 0</li></div>