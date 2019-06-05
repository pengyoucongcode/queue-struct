# queue-struct
## Explain
* This program uses the sequence storage structure to realize the initialization of the queue, the element enters the queue, gets the captain, 
and displays the queue elements and the elements out of the queue.
* Follow the menu prompts for the specific steps of the program, 
but no matter how scheduled, the most basic requirement is the first step to queue initialization
* The menu is as follows
```
 =====================
       控制面板
   1----构造队列
   2----元素入队
   3----获取队长
   4----显示队列
   5----元素出队
   0--------结束
 =====================
 ```
* My program testing steps are as follows
* 1) construct a cyclic queue SqQueue, and set the maximum length of the queue (MAXQSIZE) to 10; 
 The basic data type (ElemType) is defined as character type: 
 * 2) the following data operations are implemented in sequence: 
 * 12345deb Enqueue 
 *  123 Dequeue 
 * fghiIkh Enqueue 
 * 45de Dequeue 
 * nop Enqueue 
 * 3) call ShowQueue display 2) all characters in the queue after all operations are completed.
 * The running results are as follows
 ```
          =====================
               控制面板
           1----构造队列
           2----元素入队
           3----获取队长
           4----显示队列
           5----元素出队
           0--------结束
         =====================
请输入命令：1
构造成功
请输入命令：2
请输入入队元素个数:8
请逐个输入：
12345deb
入队成功！
入队成功！
入队成功！
入队成功！
入队成功！
入队成功！
入队成功！
入队成功！
请输入命令：5
请输入出队元素个数：3
出队成功
出队成功
出队成功
123已出队
请输入命令：2
请输入入队元素个数:7
请逐个输入：
fghiIkh
入队成功！
入队成功！
入队成功！
入队成功！
队满，无法再将值入队！
队满，无法再将值入队！
队满，无法再将值入队！
请输入命令：5
请输入出队元素个数：4
出队成功
出队成功
出队成功
出队成功
45de已出队
请输入命令：2
请输入入队元素个数:3
请逐个输入：
nop
入队成功！
入队成功！
入队成功！
请输入命令：0
```
[![Build Status](https://dev.azure.com/2923616405/Edipyc-GitHub-Builds/_apis/build/status/pengyoucongcode.queue-struct?branchName=master)](https://dev.azure.com/2923616405/Edipyc-GitHub-Builds/_build/latest?definitionId=9&branchName=master)
