<p>给你两个字符串 <code>coordinate1</code> 和 <code>coordinate2</code>，代表 <code>8 x 8</code> 国际象棋棋盘上的两个方格的坐标。</p>

<p>以下是棋盘的参考图。</p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2024/07/17/screenshot-2021-02-20-at-22159-pm.png" style="width: 400px; height: 396px;" /></p>

<p>如果这两个方格颜色相同，返回 <code>true</code>，否则返回 <code>false</code>。</p>

<p>坐标总是表示有效的棋盘方格。坐标的格式总是先字母（表示列），再数字（表示行）。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">coordinate1 = "a1", coordinate2 = "c3"</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">true</span></p>

<p><strong>解释：</strong></p>

<p>两个方格均为黑色。</p>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">coordinate1 = "a1", coordinate2 = "h3"</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">false</span></p>

<p><strong>解释：</strong></p>

<p>方格 <code>"a1"</code> 是黑色，而 <code>"h3"</code> 是白色。</p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>coordinate1.length == coordinate2.length == 2</code></li> 
 <li><code>'a' &lt;= coordinate1[0], coordinate2[0] &lt;= 'h'</code></li> 
 <li><code>'1' &lt;= coordinate1[1], coordinate2[1] &lt;= '8'</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数学</li><li>字符串</li></div></div><br><div><li>👍 2</li><li>👎 0</li></div>