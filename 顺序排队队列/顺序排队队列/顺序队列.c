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
//	int front; //����ɾ����һ��
//	int rear; //��������һ��
//
//};
//
//typedef struct queue Queue;
//
//void intQueue(Queue* sq); //��ʼ��˳�����
//int isempty(Queue* sq); //�ж϶����Ƿ�Ϊ��
//datatype gethead(Queue* sq);//��ȡ���е�һ��Ԫ��
//void enQueue(Queue* sq, datatype data);//�������
//datatype deQueue(Queue* sq); //���г���
//void show(Queue* sq);
//
//void intQueue(Queue* sq)
//{
//
//	sq->front = sq->rear = 0;//��ʼ�����ȼ������
//
//
//}
//int isempty(Queue* sq) //�ж϶����Ƿ�Ϊ��
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
//datatype gethead(Queue* sq)//��ȡ���е�һ��Ԫ��
//{
//	if (sq->front == sq->rear)
//	{
//		return -1;
//	}
//
//	return sq->data[sq->front];//���ض��е�һ���ڵ�
//}
//void enQueue(Queue* sq, datatype data)//�������
//{
//	if (sq->rear == N)
//	{
//		printf("�˶�������");
//		return;
//	}
//	sq->data[sq->rear] = data;
//	sq->rear++;
//
//
//}
//
//datatype deQueue(Queue* sq)//���г���
//{
//	if (sq->front == sq->rear)
//	{
//		return -1;
//	}
//	printf("Ҫ���е��� %c \n", sq->data[sq->front]);
//	sq->front++; //ɾ��һλ����ǰһλ
//	
//	return sq->data[sq->front - 1];
//
//}
//
//void show(Queue* sq)//��ʾ����
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
//	intQueue(&q1);//��ʼ��
//	char* str = "abcdefg";
//	char* p = str; //�������ݵ�ַ
//	while (*p != '\0')
//	{
//		enQueue(&q1, *p);
//		(&show)(&q1);
//		p++;
//	}
//
//	printf("\n\n");
//	while (isempty(&q1) != 1) //ֻҪ��Ϊ1��һֱѭ��
//	{
//		deQueue(&q1);
//		(*show)(&q1);
//
//	}
//
//
//	system("pause");
//}

