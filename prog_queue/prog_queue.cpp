// prog_queue.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
#define MAXQSIZE 10

struct SqQueue
{
	char *base;
	int front;
	int rear;
};

bool InitQueue(SqQueue &q)
{
	q.base = new char[MAXQSIZE];
	if (!q.base)return false;
	q.front = q.rear = 0;
	cout << "构造成功" << endl;
	return true;
}
 
void EnQueue(SqQueue &q, char c)
{
	if ((q.rear + 1) % MAXQSIZE == q.front)
	{
		cout << "队满，无法再将值入队！" << endl;
	}
	else
	{
		q.base[q.rear] = c;
		q.rear = (q.rear + 1) % MAXQSIZE;
		cout << "入队成功！" << endl;
	}
}

void QueueLength(SqQueue q)
{
	int i = 0;
	if (q.front == q.rear) cout << "队空" << endl;
	else
	{
		while (q.front != q.rear)
		{
			q.front = (q.front + 1) % MAXQSIZE;
			i++;
		}
	}
	cout << "队中元素共" << i << "个" << endl;
}

void ShowQueue(SqQueue q)
{
	if (q.front == q.rear) cout << "队空" << endl;
	else
	{
		cout << "队中元素：";
		while (q.front != q.rear)
		{
			cout << q.base[q.front];
			q.front = (q.front + 1) % MAXQSIZE;
		}
		cout << endl;
	}
}

void DeQueue(SqQueue &q,char &e)
{
	if (q.front == q.rear) cout << "队空,无法出队！" << endl;
	else
	{
		e = q.base[q.front];
		q.front = (q.front + 1) % MAXQSIZE;
		cout << "出队成功" << endl;
	}
}
void Mnue()
{
	cout << "\t =====================" << endl;
	cout << "\t       控制面板       " << endl;
	cout << "\t   1----构造队列" << endl;
	cout << "\t   2----元素入队" << endl;
	cout << "\t   3----获取队长" << endl;
	cout << "\t   4----显示队列" << endl;
	cout << "\t   5----元素出队" << endl;
	cout << "\t   0--------结束" << endl;
	cout << "\t =====================" << endl;
}
int main()
{
	Mnue();
	int key;
	SqQueue q;
	while (true)
	{
		cout << "请输入命令：";
		cin >> key;
		
		switch (key)
		{
		case 0:
			exit(0);
		case 1:
			InitQueue(q);
			break;
		case 2:
			int len;
			char *c;
			cout << "请输入入队元素个数:";
			cin >> len;
			c = new char[len + 1];
			cout << "请逐个输入：" << endl;
			for (int i = 0; i < len; i++) cin >> c[i];
			for (int j = 0; j < len; j++) EnQueue(q, c[j]);
			break;
		case 3:
			QueueLength(q);
			break;
		case 4:
			ShowQueue(q);
			break;
		case 5:
			int len1;
			char *c1;
			cout << "请输入出队元素个数：";
			cin >> len1;
			c1 = new char[len1 + 1];
			for (int i = 0; i < len1; i++)
				DeQueue(q, c1[i]);
			c1[len1] = '\0';
			cout << c1 << "已出队" << endl;
			break;
		}
		
	}
	return 0;
}

