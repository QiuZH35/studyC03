//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define N 10
//#define  datatype char
//
//struct queue
//{
//	datatype data[N];
//	int front; //允许删除的一端
//	int rear; //允许插入的一端
//
//};
//
//typedef struct queue Queue;
//
//void intQueue(Queue* sq); //初始化顺序队列
//int isempty(Queue* sq); //判断队列是否为空
//datatype gethead(Queue* sq);//获取队列第一个元素
//void enQueue(Queue* sq, datatype data);//队列入队
//datatype deQueue(Queue* sq); //队列出列
//void show(Queue* sq);
//
//void intQueue(Queue* sq)
//{
//
//	sq->front = sq->rear = 0;//初始化，等价于清空
//
//
//}
//int isempty(Queue* sq) //判断队列是否为空
//{
//	if (sq->front == sq->rear)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//datatype gethead(Queue* sq)//获取队列第一个元素
//{
//	if (sq->front == sq->rear)
//	{
//		return -1;
//	}
//
//	return sq->data[sq->front];//返回队列第一个节点
//}
//void enQueue(Queue* sq, datatype data)//队列入队
//{
//	if (sq->rear == N)
//	{
//		printf("此队列已满");
//		return;
//	}
//	sq->data[sq->rear] = data;
//	sq->rear++;
//
//
//}
//
//datatype deQueue(Queue* sq)//队列出列
//{
//	if (sq->front == sq->rear)
//	{
//		return -1;
//	}
//	printf("要出列的是 %c \n", sq->data[sq->front]);
//	sq->front++; //删除一位就向前一位
//	
//	return sq->data[sq->front - 1];
//
//}
//
//void show(Queue* sq)//显示数据
//{
//	if (sq->front == sq->rear)
//	{
//		return ;
//	}
//	else
//	{
//		printf("fornt=%d,rear=%d\n",sq->front,sq->rear);
//		for (int i = sq->front; i < sq->rear; i++)
//		{
//			printf(" %c ", sq->data[i]);
//			
//		}
//		printf("\n");
//	}
//
//
//}
//
//
//
//void main()
//{
//	Queue   q1;
//	intQueue(&q1);//初始化
//	char* str = "abcdefg";
//	char* p = str; //储存数据地址
//	while (*p != '\0')
//	{
//		enQueue(&q1, *p);
//		(&show)(&q1);
//		p++;
//	}
//
//	printf("\n\n");
//	while (isempty(&q1) != 1) //只要不为1就一直循环
//	{
//		deQueue(&q1);
//		(*show)(&q1);
//
//	}
//
//
//	system("pause");
//}

