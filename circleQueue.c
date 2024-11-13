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
	LQ->front = 0; // front 초깃값 설정
	LQ->rear = 0; // rear 초깃값 설정
	return LQ;
}
// 순차 큐가 공백 상태인지 검사하는 연산
int isQueueEmpty(LQtype* LQ) {
	if (LQ->front == NULL) {
		printf(" Queue is empty! \n\t ");
		return 1;
	}
	else return 0;
}
// 순차 큐가 포화 상태인지 검사하는 연산
//int isQueueFull(LQtype* LQ) {
//	if (Q->rear == Q_SIZE - 1) {
//		printf(" Queue is full! \n\t ");
//		return 1;
//	}
//	else return 0;
//}
// 순차 큐의 rear에 원소를 삽입하는 연산
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
// 순차 큐의 front에서 원소를 삭제하는 연산
element deQueue(LQtype* LQ) {
	Qnode* old = LQ->front;
	elementitem;
	if (isQueueEmpty(LQ)) return; // 공백 상태이면, 삭제 연산 중단
	else {
		item = old->data;
		LQ->front=LQ->front->link;
		if(LQ->front==NULL)
			LQ->rear = NULL;
		free(old);
		
		return item;
	}
}
// 순차 큐의 가장 앞에 있는 원소를 검색하는 연산
//element peekQ(QueueType* Q) {
//	if (isQueueEmpty(Q)) return; // 공백 상태이면 연산 중단
//	else return Q->queue[Q->front + 1];
}
// 순차 큐의 원소를 출력하는 연산
//void printQ(QueueType* Q) {
//	int i;
//	printf(" Queue : [");
//	for (i = Q->front + 1; i <= Q->rear; i++)
//		printf("%3c", Q->queue[i]);
//	printf(" ]");
//}