<p>给你一个字符串数组 <code>message</code> 和一个字符串数组 <code>bannedWords</code>。</p>

<p>如果数组中 <strong>至少</strong> 存在两个单词与 <code>bannedWords</code> 中的任一单词 <strong>完全相同</strong>，则该数组被视为 <strong>垃圾信息</strong>。</p>

<p>如果数组 <code>message</code> 是垃圾信息，则返回 <code>true</code>；否则返回 <code>false</code>。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">message = ["hello","world","leetcode"], bannedWords = ["world","hello"]</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">true</span></p>

<p><strong>解释：</strong></p>

<p>数组 <code>message</code> 中的 <code>"hello"</code> 和 <code>"world"</code> 都出现在数组 <code>bannedWords</code> 中。</p>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">message = ["hello","programming","fun"], bannedWords = ["world","programming","leetcode"]</span></p> 
</div>

<p><strong>输出：</strong> <span class="example-io">false</span></p>

<p><strong>解释：</strong></p>

<p>数组 <code>message</code> 中只有一个单词（<code>"programming"</code>）出现在数组 <code>bannedWords</code> 中。</p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= message.length, bannedWords.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>1 &lt;= message[i].length, bannedWords[i].length &lt;= 15</code></li> 
 <li><code>message[i]</code> 和 <code>bannedWords[i]</code> 都只由小写英文字母组成。</li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>字符串</li></div></div><br><div><li>👍 2</li><li>👎 0</li></div>