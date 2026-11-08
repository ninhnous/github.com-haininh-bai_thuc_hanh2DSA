#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char hoten[30];
    int masv;
    float d1, d2, d3;
}Data;

typedef struct tagNode {
    Data infor;
    struct tagNode *link;
}Node;

typedef struct {
    Node *pHead;
    Node *pTail;
}LList;

int main() {
    LList ds;
    ds.pHead = NULL;
    ds.pTail = NULL;
    return 0;
}
