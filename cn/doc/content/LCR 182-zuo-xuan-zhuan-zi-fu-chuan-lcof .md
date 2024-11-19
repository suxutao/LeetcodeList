<p>某公司门禁密码使用动态口令技术。初始密码为字符串 <code>password</code>，密码更新均遵循以下步骤：</p>

<ul> 
 <li>设定一个正整数目标值 <code>target</code></li> 
 <li>将 <code>password</code> 前 <code>target</code> 个字符按原顺序移动至字符串末尾</li> 
</ul>

<p>请返回更新后的密码字符串。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入:</strong> password = "s3cur1tyC0d3", target = 4
<strong>输出:</strong> "r1tyC0d3s3cu"
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入:</strong> password = "lrloseumgh", target = 6
<strong>输出:&nbsp;</strong>"umghlrlose"
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= target&nbsp;&lt; password.length &lt;= 10000</code></li> 
</ul>

<p>&nbsp;</p>

<div><div>Related Topics</div><div><li>数学</li><li>双指针</li><li>字符串</li></div></div><br><div><li>👍 468</li><li>👎 0</li></div>