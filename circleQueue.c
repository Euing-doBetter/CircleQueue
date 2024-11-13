#include <stdio.h>
#include <stdlib.h>

typedef char element;

typedef struct qnode {
	element data;
}Qnode;

typedef struct{
	Qnode* front,*rear;
}LQtype;

LQtype* createLinkedQueue(void);
int isQueueEmpty(LQtype* LQ);
int isQueueFull(LQtype* LQ);
void enQueue(LQtype* LQ, element item);
element deQueue(LQtype* LQ);

LQtype* createLinkedQueue(void) {
	LQtype* LQ;
	LQ = (LQtype*)malloc(sizeof(LQtype));
	LQ->front = 0; // front �ʱ갪 ����
	LQ->rear = 0; // rear �ʱ갪 ����
	return LQ;
}
// ���� ť�� ���� �������� �˻��ϴ� ����
int isQueueEmpty(LQtype* LQ) {
	if (LQ->front == NULL) {
		printf(" Queue is empty! \n\t ");
		return 1;
	}
	else return 0;
}
// ���� ť�� ��ȭ �������� �˻��ϴ� ����
//int isQueueFull(LQtype* LQ) {
//	if (Q->rear == Q_SIZE - 1) {
//		printf(" Queue is full! \n\t ");
//		return 1;
//	}
//	else return 0;
//}
// ���� ť�� rear�� ���Ҹ� �����ϴ� ����
void enQueue(LQtype* LQ, element item) 
{
	Qnode* newnode =(Qnode*)malloc(sizeof(Qnode));
	if(LQ->front==NULL){
		LQ->front = newnode;
		LQ->rear = newnode;
	{
	else{
		LQ->rear->link = newnode;
		LQ->rear = newnode;
	}
}
// ���� ť�� front���� ���Ҹ� �����ϴ� ����
element deQueue(LQtype* LQ) {
	Qnode* old = LQ->front;
	elementitem;
	if (isQueueEmpty(LQ)) return; // ���� �����̸�, ���� ���� �ߴ�
	else {
		item = old->data;
		LQ->front=LQ->front->link;
		if(LQ->front==NULL)
			LQ->rear = NULL;
		free(old);
		
		return item;
	}
}
// ���� ť�� ���� �տ� �ִ� ���Ҹ� �˻��ϴ� ����
//element peekQ(QueueType* Q) {
//	if (isQueueEmpty(Q)) return; // ���� �����̸� ���� �ߴ�
//	else return Q->queue[Q->front + 1];
}
// ���� ť�� ���Ҹ� ����ϴ� ����
//void printQ(QueueType* Q) {
//	int i;
//	printf(" Queue : [");
//	for (i = Q->front + 1; i <= Q->rear; i++)
//		printf("%3c", Q->queue[i]);
//	printf(" ]");
//}