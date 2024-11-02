#include <stdio.h>
#include <stdlib.h>

struct ListNode{
	int val;
	struct ListNode *next;
};

struct ListNode *reverseList(struct ListNode *head)
{
	struct ListNode *next = NULL;
	struct ListNode *previous = NULL;

	while (head)
	{
		next = head->next;
		head->next = previous;
		previous = head;
		head = next;
	}
	head = previous;
	return (head);
}

int main()
{
	struct ListNode *head = malloc(sizeof(struct ListNode));
	struct ListNode *node1 = malloc(sizeof(struct ListNode));;
	struct ListNode *node2 = malloc(sizeof(struct ListNode));;
	struct ListNode *ptr;

	head->val = 1;
	node1->val = 2;
	node2->val = 3;

	head->next = node1;
	head->next->next = node2;
	head->next->next->next = NULL;

	ptr = head;
	while (ptr)
	{
		printf("%d ", ptr->val);
		ptr = ptr->next;
	}

	printf("\n");
	struct ListNode *result = reverseList(head);
	while (result)
	{
		printf("%d ", result->val);
		result = result->next;
	}
	free(head);
	free(node1);
	free(node2);
	return (0);
}