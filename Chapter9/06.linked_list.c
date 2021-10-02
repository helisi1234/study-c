//
// Created by helisi on 2021/9/12.
//
// 单链表
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
  int value;
  struct ListNode *next;
} ListNode;

//创建节点
ListNode *CreateNode(int value) {
  ListNode *node = malloc(sizeof(ListNode));
  if(!node) exit(1);
  node -> value = value;
  node -> next = NULL;
  return node;
}
/*
 * 删除节点，不能传入指针
 * void DestroyNode(ListNode *node)
 * 调用该函数时：DestroyNode(node);
 * 调用函数时会发生参数复制，传入的node指针和需要销毁的node节点之间
 * 是复制关系（指向同一块内存），在DestroyNode函数内对指针的销毁不
 * 会影响外面的node指针
 * 结果：外部的node指针无法置为NULL
 * 改良：传入指针的指针
 */
void DestroyNode(ListNode **node) {
  (*node) -> next = NULL;
  free(*node);
  *node = NULL;
}

//从数组创建一个链表
ListNode *CreateList(int array[], int length) {
  if(length < 0)
    return NULL;
  ListNode *head = CreateNode(array[0]);
  ListNode *current = head;
  for (int i = 1; i < length; ++i) {
    current -> next = CreateNode(array[i]);
    current = current -> next;
  }
  return head;
}

void PrintList(ListNode *head) {
  while(head) {
    printf("%d, ", head -> value);
    head = head -> next;
  }
  printf("\n");
}

void DestroyList(ListNode **head) {
//  如果head是NULL或者*head是NULL，直接返回
  if(!head || !(*head))
    return;
  ListNode *current = *head;
  while(current) {
    ListNode *need_destroy = current;
    current = current -> next;
    DestroyNode(&need_destroy);
  }
  *head = NULL;
}

void InsertNode(ListNode **head, int value, int index) {
  //  如果head是NULL或者index>=0，直接返回
  if(!head || index < 0)
    return;
  ListNode *new_node = CreateNode(value);
  if(index == 0) {
    new_node -> next = *head;
    *head = new_node;
  } else {
//  如果*head是NULL
    if(!(*head)) {
      *head = CreateNode(0);
    }
    ListNode *current = *head;
    while(index > 1) {
      if(!current -> next) {
        current -> next = CreateNode(0);
      }
      current = current -> next;
      index --;
    }
    new_node -> next = current -> next;
    current -> next = new_node;
  }
}

int main() {
  int array[] = {0, 1, 2, 3, 4, 5};
  ListNode *head = CreateList(array, 6);
  PrintList(head);
//  超过部分补0
  InsertNode(&head, 100, 3);
  InsertNode(&head, 200, 0);
  InsertNode(&head, 300, 9);
  InsertNode(&head, 400, 10);
  PrintList(head);
  DestroyList(&head);
//  增加这行代码后可以直接插入数据(调用InsertValue)不需要先CreateNode
//  ListNode *new_node = CreateNode(value);
  InsertNode(&head, 10, 0);
  PrintList(head);
  DestroyList(&head);
  InsertNode(&head, 10, 10);
  PrintList(head);
  DestroyList(&head);
  return 0;
}

