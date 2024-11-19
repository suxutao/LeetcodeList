<p>在英语中，我们有一个叫做&nbsp;<strong>词根</strong>(root) 的概念，可以词根&nbsp;<strong>后面&nbsp;</strong>添加其他一些词组成另一个较长的单词——我们称这个词为 <strong>衍生词</strong>&nbsp;(<strong>derivative</strong>)。例如，词根&nbsp;<code>help</code>，跟随着 <strong>继承</strong>词&nbsp;<code>"ful"</code>，可以形成新的单词&nbsp;<code>"helpful"</code>。</p>

<p>现在，给定一个由许多&nbsp;<strong>词根&nbsp;</strong>组成的词典 <code>dictionary</code> 和一个用空格分隔单词形成的句子 <code>sentence</code>。你需要将句子中的所有&nbsp;<strong>衍生词&nbsp;</strong>用&nbsp;<strong>词根&nbsp;</strong>替换掉。如果&nbsp;<strong>衍生词&nbsp;</strong>有许多可以形成它的&nbsp;<strong>词根</strong>，则用&nbsp;<strong>最短&nbsp;</strong>的 <strong>词根</strong> 替换它。</p>

<p>你需要输出替换之后的句子。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>dictionary = ["cat","bat","rat"], sentence = "the cattle was rattled by the battery"
<strong>输出：</strong>"the cat was rat by the bat"
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>dictionary = ["a","b","c"], sentence = "aadsfasf absbs bbab cadsfafs"
<strong>输出：</strong>"a a b c"
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= dictionary.length&nbsp;&lt;= 1000</code></li> 
 <li><code>1 &lt;= dictionary[i].length &lt;= 100</code></li> 
 <li><code>dictionary[i]</code>&nbsp;仅由小写字母组成。</li> 
 <li><code>1 &lt;= sentence.length &lt;= 10<sup>6</sup></code></li> 
 <li><code>sentence</code>&nbsp;仅由小写字母和空格组成。</li> 
 <li><code>sentence</code> 中单词的总量在范围 <code>[1, 1000]</code> 内。</li> 
 <li><code>sentence</code> 中每个单词的长度在范围 <code>[1, 1000]</code> 内。</li> 
 <li><code>sentence</code> 中单词之间由一个空格隔开。</li> 
 <li><code>sentence</code>&nbsp;没有前导或尾随空格。</li> 
</ul>

<p>&nbsp;</p>

<div><div>Related Topics</div><div><li>字典树</li><li>数组</li><li>哈希表</li><li>字符串</li></div></div><br><div><li>👍 316</li><li>👎 0</li></div>