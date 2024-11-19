<p>在英语中，有一个叫做&nbsp;<code>词根(root)</code> 的概念，它可以跟着其他一些词组成另一个较长的单词——我们称这个词为&nbsp;<code>继承词(successor)</code>。例如，词根<code>an</code>，跟随着单词&nbsp;<code>other</code>(其他)，可以形成新的单词&nbsp;<code>another</code>(另一个)。</p>

<p>现在，给定一个由许多词根组成的词典和一个句子，需要将句子中的所有<code>继承词</code>用<code>词根</code>替换掉。如果<code>继承词</code>有许多可以形成它的<code>词根</code>，则用最短的词根替换它。</p>

<p>需要输出替换之后的句子。</p>

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

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>dictionary = ["a", "aa", "aaa", "aaaa"], sentence = "a aa a aaaa aaa aaa aaa aaaaaa bbb baba ababa"
<strong>输出：</strong>"a a a a a a a a bbb baba a"
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>dictionary = ["catt","cat","bat","rat"], sentence = "the cattle was rattled by the battery"
<strong>输出：</strong>"the cat was rat by the bat"
</pre>

<p><strong>示例 5：</strong></p>

<pre>
<strong>输入：</strong>dictionary = ["ac","ab"], sentence = "it is abnormal that this solution is accepted"
<strong>输出：</strong>"it is ab that this solution is ac"
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= dictionary.length&nbsp;&lt;= 1000</code></li> 
 <li><code>1 &lt;= dictionary[i].length &lt;= 100</code></li> 
 <li><code>dictionary[i]</code>&nbsp;仅由小写字母组成。</li> 
 <li><code>1 &lt;= sentence.length &lt;= 10^6</code></li> 
 <li><code>sentence</code>&nbsp;仅由小写字母和空格组成。</li> 
 <li><code>sentence</code> 中单词的总量在范围 <code>[1, 1000]</code> 内。</li> 
 <li><code>sentence</code> 中每个单词的长度在范围 <code>[1, 1000]</code> 内。</li> 
 <li><code>sentence</code> 中单词之间由一个空格隔开。</li> 
 <li><code>sentence</code>&nbsp;没有前导或尾随空格。</li> 
</ul>

<p>&nbsp;</p>

<p>
 <meta charset="UTF-8" />注意：本题与主站 648&nbsp;题相同：&nbsp;<a href="https://leetcode-cn.com/problems/replace-words/">https://leetcode-cn.com/problems/replace-words/</a></p>

<div><div>Related Topics</div><div><li>字典树</li><li>数组</li><li>哈希表</li><li>字符串</li></div></div><br><div><li>👍 47</li><li>👎 0</li></div>