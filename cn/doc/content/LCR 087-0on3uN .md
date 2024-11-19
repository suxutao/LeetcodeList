<p>给定一个只包含数字的字符串 <code>s</code> ，用以表示一个 IP 地址，返回所有可能从&nbsp;<code>s</code> 获得的 <strong>有效 IP 地址 </strong>。你可以按任何顺序返回答案。</p>

<p><strong>有效 IP 地址</strong> 正好由四个整数（每个整数位于 0 到 255 之间组成，且不能含有前导 <code>0</code>），整数之间用 <code>'.'</code> 分隔。</p>

<p>例如："0.1.2.201" 和 "192.168.1.1" 是 <strong>有效</strong> IP 地址，但是 "0.011.255.245"、"192.168.1.312" 和 "192.168@1.1" 是 <strong>无效</strong> IP 地址。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>s = "25525511135"
<strong>输出：</strong>["255.255.11.135","255.255.111.35"]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>s = "0000"
<strong>输出：</strong>["0.0.0.0"]
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>s = "1111"
<strong>输出：</strong>["1.1.1.1"]
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>s = "010010"
<strong>输出：</strong>["0.10.0.10","0.100.1.0"]
</pre>

<p><strong>示例 5：</strong></p>

<pre>
<strong>输入：</strong>s = "10203040"
<strong>输出：</strong>["10.20.30.40","102.0.30.40","10.203.0.40"]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>0 &lt;= s.length &lt;= 3000</code></li> 
 <li><code>s</code> 仅由数字组成</li> 
</ul>

<p>&nbsp;</p>

<p>
 <meta charset="UTF-8" />注意：本题与主站 93&nbsp;题相同：<a href="https://leetcode-cn.com/problems/restore-ip-addresses/">https://leetcode-cn.com/problems/restore-ip-addresses/</a>&nbsp;</p>

<div><div>Related Topics</div><div><li>字符串</li><li>回溯</li></div></div><br><div><li>👍 53</li><li>👎 0</li></div>