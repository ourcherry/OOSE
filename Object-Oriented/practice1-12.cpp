#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node *left;
	struct _node *right;
}Node;

void InorderTraversal(Node *Root)
{
	if (Root == NULL) return;
	
	InorderTraversal(Root->left);
	printf("%d ", Root->data);
	InorderTraversal(Root->right);
}

int main_1_12(void)
{
	int i;
	Node* Root = NULL;
	Node* InitialRoot = NULL;
	Node* Parent = NULL;
	Node* Current;

	for (i = 1; i <= 5; i++)
	{
		Current = (Node*)malloc(sizeof(Node));
		Current->data = rand() % 10 + 1;
		Current->left = NULL;
		Current->right = NULL;
		printf("----------%d번째 데이터 : %d\n", i, Current->data);

		if (Root == NULL)
		{
			Root = Current;
			printf("루트 저장 : %d\n", Current->data);
			InitialRoot = Root;
			continue;
		}

		while (1)
		{
			Parent = InitialRoot;
			printf("루트 : %d\n", InitialRoot->data);

			if (Current->data < InitialRoot->data)
			{
				if (InitialRoot->left)
				{
					InitialRoot = InitialRoot->left;
				}
				else
				{
					InitialRoot->left = Current;
					printf("왼쪽 이동 : %d\n", Current->data);
					break;
				}
			}
			else
			{
				if (InitialRoot->right)
				{
					InitialRoot = InitialRoot->right;
				}
				else
				{
					InitialRoot->right = Current;
					printf("오른쪽 이동 : %d\n", Current->data);
					break;
				}
			}
		}

		Parent = Current;
		InitialRoot = Root;
	}
	
	// 트리 안에 있는 데이터들을 정렬된 순서로 출력하기 위해 실행하는 함수 호출
	InorderTraversal(InitialRoot);

	return 0;

}