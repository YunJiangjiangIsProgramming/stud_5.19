#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>

//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//
//};
//typedef struct ListNode Node;
//
//void printList(struct ListNode* head) {
//    struct ListNode* current = head;
//    while (current != NULL) {
//        printf("%d -> ", current->val);
//        current = current->next;
//    }
//    printf("NULL\n");
//}
//����������м�ڵ㣨����ָ�룩
//
//struct ListNode* middleNode(struct ListNode* head)
//{
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    while (fast && fast->next)//ע��whileѭ������д����ѭ������������ ��������ͨ�������ѭ������������
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//
//
//    }
//    return slow;
//
//}
//����������� ��·��=����*����
//fast slow ���ǵĲ�����ͬwhileһֹͣ�Ͳ����� ����fast�Ĳ�����slow������ ����fast�Ѿ�������������ʱ��slow�����м�
//
//��������������k����� Ҳ�����ÿ���ָ��
//struct ListNode* FindkthToTail(struct ListNode* head, int k)
//{
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (k)
//    {
//        if (fast)
//        {
//            fast = fast->next;
//        }
//        else
//        {
//            return NULL;
//        }
//        k--;
//    }//fast��slow����k��λ�õĲ��
//    while (fast)
//    {
//        slow = slow->next;
//        fast = fast->next;
//
//
//
//    }//��ʼ�������� һ��fastΪ��ѭ��ֹͣ˵���������� ���־���fast��slow�����Ͳ�������� ���������Ĳ���Ǹտ�ʼ��Ϊk������
//
//    return slow;
//}
//
//
//struct ListNode* partition(struct ListNode* pHead, int x)
//{
//    struct ListNode* lessHead;
//    struct ListNode* lessTail;
//    struct ListNode* greaterTail;
//    struct ListNode* greaterHead;//�����ڱ�λ�Ľ��
//    lessHead = (Node*)malloc(sizeof(Node));
//    lessTail = (Node*)malloc(sizeof(Node));
//    greaterTail = (Node*)malloc(sizeof(Node));
//    greaterHead = (Node*)malloc(sizeof(Node));
//    lessHead->next = greaterHead->next = NULL;//��ʼ��
//
//    Node* cur = pHead;//�õ�ͷָ��λ��
//
//    while (cur)
//    {
//        if (cur->val < x)
//        {
//            lessTail->next = cur;//β��
//            lessTail = lessTail->next;//��һ����β
//        }
//        else
//        {
//            greaterTail->next = cur;
//            greaterTail = greaterTail->next;
//
//        }
//        cur = cur->next;//���������������
//       
//    }
//    lessTail->next = greaterHead->next;//��less��greater������
//    greaterTail->next = NULL;//β���ÿ� ��ֹ���ɻ�״�ṹȻ���Ϊ��ѭ��
//    
//    struct ListNode* newhead = lessHead->next;
//    free(lessHead);
//    free(greaterHead);
//
//    return newhead;
//}
//int main() {
//    Node* n1 = (Node*)malloc(sizeof(Node));
//    n1->val = 1;
//    Node* n2 = (Node*)malloc(sizeof(Node));
//    n2->val = 4;
//    Node* n3 = (Node*)malloc(sizeof(Node));
//    n3->val = 2;
//    Node* n4 = (Node*)malloc(sizeof(Node));
//    n4->val = 5;
//    Node* n5 = (Node*)malloc(sizeof(Node));
//    n5->val = 9;
//    Node* n6 = (Node*)malloc(sizeof(Node));
//    n6->val = 2;
//    Node* n7 = (Node*)malloc(sizeof(Node));
//    n7->val = 10;
//
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//    n4->next = n5;
//    n5->next = n6;
//    n6->next = n7;
//    n7->next = NULL;
//    printf("Original List: ");
//    printList(n1);
//
//    struct ListNode* ret = partition(n1,3);
//    printf("Reversed List: ");
//    printList(ret);
//
//     �ͷŷ�����ڴ�
//    Node* current = n1;
//    while (current) {
//        Node* temp = current;
//        current = current->next;
//        free(temp);
//    }
//
//    return 0;
//}
//
//
//
//
//
//
// partition ������ʵ��
//Node* partition(Node* pHead, int x) 
//{
//    Node lessHead = { 0, NULL }; // ��ʼ��Ϊ0���Ա���Ұָ��
//    Node lessTail = { 0, NULL };
//    Node greaterHead = { 0, NULL };
//    Node greaterTail = { 0, NULL };
//
//    Node* cur = pHead;
//    while (cur)
//    {
//        if (cur->val < x)
//        {
//            if (!lessHead.next) 
//            {
//                lessHead.next = cur;
//                lessTail.next = cur;
//            }
//            else 
//            {
//                lessTail.next->next = cur;
//                lessTail.next = cur;
//            }
//        }
//        else 
//        {
//            if (!greaterHead.next) 
//            {
//                greaterHead.next = cur;
//                greaterTail.next = cur;
//            }
//            else
//            {
//                greaterTail.next->next = cur;
//                greaterTail.next = cur;
//            }
//        }
//        cur = cur->next;
//    }
//
//    if (lessTail.next) 
//    {
//        lessTail.next->next = greaterHead.next;
//        return lessHead.next;
//    }
//    else 
//    {
//        return greaterHead.next;
//    }
//}
//
//int main() 
//{
//    Node* n1 = (Node*)malloc(sizeof(Node));
//    n1->val = 1;
//    Node* n2 = (Node*)malloc(sizeof(Node));
//    n2->val = 4;
//    Node* n3 = (Node*)malloc(sizeof(Node));
//    n3->val = 2;
//    Node* n4 = (Node*)malloc(sizeof(Node));
//    n4->val = 5;
//    Node* n5 = (Node*)malloc(sizeof(Node));
//    n5->val = 9;
//    Node* n6 = (Node*)malloc(sizeof(Node));
//    n6->val = 2;
//    Node* n7 = (Node*)malloc(sizeof(Node));
//    n7->val = 10;
//
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//    n4->next = n5;
//    n5->next = n6;
//    n6->next = n7;
//    n7->next = NULL;
//
//    printf("Original List: ");
//    printList(n1);
//
//    Node* ret = partition(n1, 3);
//    printf("Reversed List: ");
//    printList(ret);
//
//     �ͷŷ�����ڴ�
//    Node* current = n1;
//    while (current) {
//        Node* temp = current;
//        current = current->next;
//        free(temp);
//    }
//
//    return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct Postion
{
	int row;
	int col;
}PT;
/////////////////////////////////////////////////////////////////
typedef PT STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);
void StackDestory(ST* ps);
// ��ջ
void StackPush(ST* ps, STDataType x);
// ��ջ
void StackPop(ST* ps);
STDataType StackTop(ST* ps);

int StackSize(ST* ps);
bool StackEmpty(ST* ps);

void StackInit(ST* ps)
{
	assert(ps);

	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	ps->capacity = 4;
	ps->top = 0;
}

void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}

// ��ջ
void StackPush(ST* ps, STDataType x)
{
	assert(ps);

	// ����-������
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}

	ps->a[ps->top] = x;
	ps->top++;
}

// ��ջ
void StackPop(ST* ps)
{
	assert(ps);
	// ջ���ˣ�����Pop��ֱ����ֹ���򱨴�
	assert(ps->top > 0);

	//ps->a[ps->top - 1] = 0;
	ps->top--;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	// ջ���ˣ�����Top��ֱ����ֹ���򱨴�
	assert(ps->top > 0);

	return ps->a[ps->top - 1];
}

int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}

bool StackEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}

Stack path;
////////////////////////////////////////////////////////////////

void PrintMaze(int** maze, int N, int M)
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			printf("%d ", maze[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

// ���ջ���������·��
void PirntPath(Stack* ps)
{
	// path���ݵ���rPath
	Stack rPath;
	StackInit(&rPath);
	while (!StackEmpty(&path))
	{
		StackPush(&rPath, StackTop(&path));
		StackPop(&path);
	}

	while (!StackEmpty(&rPath))
	{
		PT top = StackTop(&rPath);
		printf("(%d,%d)\n", top.row, top.col);
		StackPop(&rPath);
	}

	StackDestory(&rPath);
}

bool IsPass(int** maze, int N, int M, PT pos)
{
	if (pos.row >= 0 && pos.row < N
		&& pos.col >= 0 && pos.col < M
		&& maze[pos.row][pos.col] == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool GetMazePath(int** maze, int N, int M, PT cur)
{
	StackPush(&path, cur);

	// ����ߵ�����
	if (cur.row == N - 1 && cur.col == M - 1)
		return true;

	// ̽��curλ�õ����������ĸ�����
	PT next;
	maze[cur.row][cur.col] = 2;

	// ��
	next = cur;
	next.row -= 1;
	if (IsPass(maze, N, M, next))
	{
		if (GetMazePath(maze, N, M, next))
			return true;
	}

	// ��
	next = cur;
	next.row += 1;
	if (IsPass(maze, N, M, next))
	{
		if (GetMazePath(maze, N, M, next))
			return true;
	}


	// ��
	next = cur;
	next.col -= 1;
	if (IsPass(maze, N, M, next))
	{
		if (GetMazePath(maze, N, M, next))
			return true;
	}

	// ��
	next = cur;
	next.col += 1;
	if (IsPass(maze, N, M, next))
	{
		if (GetMazePath(maze, N, M, next))
			return true;
	}

	StackPop(&path);

	return false;
}

int main()
{
	int N = 0, M = 0;
	while (scanf("%d%d", &N, &M) != EOF)
	{
		// int a[n][m]; // vs2013 ��֧��
		// ��̬���ٶ�ά����
		int** maze = (int**)malloc(sizeof(int*) * N);
		for (int i = 0; i < N; ++i)
		{
			maze[i] = (int*)malloc(sizeof(int) * M);
		}

		// ��ά���������
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; ++j)
			{
				scanf("%d", &maze[i][j]);
			}
		}

		StackInit(&path);
		// PrintMaze(maze, N, M);
		PT entry = { 0, 0 };
		if (GetMazePath(maze, N, M, entry))
		{
			//printf("�ҵ�ͨ·\n");
			PirntPath(&path);
		}
		else
		{
			printf("û���ҵ�ͨ·\n");
		}

		StackDestory(&path);

		for (int i = 0; i < N; ++i)
		{
			free(maze[i]);
		}
		free(maze);
		maze = NULL;
	}

	return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<stdbool.h>

typedef struct Postion
{
	int row;
	int col;
}PT;
/////////////////////////////////////////////////////////////////
typedef PT STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST, Stack;

void StackInit(ST* ps);
void StackDestory(ST* ps);
// ��ջ
void StackPush(ST* ps, STDataType x);
// ��ջ
void StackPop(ST* ps);
STDataType StackTop(ST* ps);

int StackSize(ST* ps);
bool StackEmpty(ST* ps);

void StackInit(ST* ps)
{
	assert(ps);

	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	ps->capacity = 4;
	ps->top = 0;
}

void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}

// ��ջ
void StackPush(ST* ps, STDataType x)
{
	assert(ps);

	// ����-������
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}

	ps->a[ps->top] = x;
	ps->top++;
}

// ��ջ
void StackPop(ST* ps)
{
	assert(ps);
	// ջ���ˣ�����Pop��ֱ����ֹ���򱨴�
	assert(ps->top > 0);

	//ps->a[ps->top - 1] = 0;
	ps->top--;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	// ջ���ˣ�����Top��ֱ����ֹ���򱨴�
	assert(ps->top > 0);

	return ps->a[ps->top - 1];
}

int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}

bool StackEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}

Stack path;
Stack minpath;
////////////////////////////////////////////////////////////////

void PrintMaze(int** maze, int N, int M)
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			printf("%d ", maze[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

// ���ջ���������·��
void PirntPath(Stack* ps)
{
	// path���ݵ���rPath
	Stack rPath;
	StackInit(&rPath);
	while (!StackEmpty(ps))
	{
		StackPush(&rPath, StackTop(ps));
		StackPop(ps);
	}

	while (StackSize(&rPath) > 1)
	{
		PT top = StackTop(&rPath);
		printf("[%d,%d],", top.row, top.col);
		StackPop(&rPath);
	}

	PT top = StackTop(&rPath);
	printf("[%d,%d]", top.row, top.col);
	StackPop(&rPath);

	StackDestory(&rPath);
}

bool IsPass(int** maze, int N, int M, PT pos)
{
	if (pos.row >= 0 && pos.row < N
		&& pos.col >= 0 && pos.col < M
		&& maze[pos.row][pos.col] == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void StackCopy(Stack* ppath, Stack* pcopy)
{
	pcopy->a = (STDataType*)malloc(sizeof(STDataType*) * ppath->capacity);
	memcpy(pcopy->a, ppath->a, sizeof(STDataType) * ppath->top);
	pcopy->top = ppath->top;
	pcopy->capacity = ppath->capacity;
}

void GetMazePath(int** maze, int N, int M, PT cur, int P)
{
	StackPush(&path, cur);

	// ����ߵ�����
	if (cur.row == 0 && cur.col == M - 1)
	{
		// �ҵ��˸��̵�·��������minpath��
		if (P >= 0 && StackEmpty(&minpath)
			|| StackSize(&path) < StackSize(&minpath))
		{
			StackDestory(&minpath);
			StackCopy(&path, &minpath);
		}
	}

	// ̽��curλ�õ����������ĸ�����
	PT next;
	maze[cur.row][cur.col] = 2;

	// ��
	next = cur;
	next.row -= 1;
	if (IsPass(maze, N, M, next))
	{
		GetMazePath(maze, N, M, next, P - 3);

	}

	// ��
	next = cur;
	next.row += 1;
	if (IsPass(maze, N, M, next))
	{
		GetMazePath(maze, N, M, next, P);
	}


	// ��
	next = cur;
	next.col -= 1;
	if (IsPass(maze, N, M, next))
	{
		GetMazePath(maze, N, M, next, P - 1);
	}

	// ��
	next = cur;
	next.col += 1;
	if (IsPass(maze, N, M, next))
	{
		GetMazePath(maze, N, M, next, P - 1);
	}

	// �ָ�һ��
	maze[cur.row][cur.col] = 1;
	StackPop(&path);
}

int main()
{
	int N = 0, M = 0, P = 0;
	while (scanf("%d%d%d", &N, &M, &P) != EOF)
	{
		// int a[n][m]; // vs2013 ��֧��
		// ��̬���ٶ�ά����
		int** maze = (int**)malloc(sizeof(int*) * N);
		for (int i = 0; i < N; ++i)
		{
			maze[i] = (int*)malloc(sizeof(int) * M);
		}

		// ��ά���������
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < M; ++j)
			{
				scanf("%d", &maze[i][j]);
			}
		}

		StackInit(&path);
		StackInit(&minpath);
		// PrintMaze(maze, N, M);
		PT entry = { 0, 0 };
		GetMazePath(maze, N, M, entry, P);

		if (!StackEmpty(&minpath))
		{
			PirntPath(&minpath);
		}
		else
		{
			printf("Can not escape!\n");
		}


		StackDestory(&path);
		StackDestory(&minpath);

		for (int i = 0; i < N; ++i)
		{
			free(maze[i]);
		}
		free(maze);
		maze = NULL;
	}

	return 0;
}