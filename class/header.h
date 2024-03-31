#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char *key;
    char *value;
} dirNode;
typedef struct header {
    dirNode *data;
    struct header *next;
} header;
typedef struct body {
    dirNode *data;
    struct body *next;
} body;
typedef struct {
    body *head;
    body *tail;
    int size;
} bodyList;
typedef struct {
    header *head;
    header *tail;
    int size;
} headerList;
void defineDirNode(dirNode *dirnode, char *key, char *value) {
    dirnode->key = key;
    dirnode->value = value;
}
void turnDirNodeToHeader(header *node, dirNode data) {
    node->data = (dirNode *)malloc(sizeof(dirNode));
    node->data->key = data.key;
    node->data->value = data.value;
    node->next = NULL;
}
void addHeader(headerList *list, header *node) {
    header *temp = (header *)malloc(sizeof(header));
    temp->data = node->data;
    temp->next = NULL;
    if (list->head == NULL) {
        list->head = temp;
        list->tail = temp;
    } else {
        list->tail->next = temp;
        list->tail = temp;
    }
    list->size++;
}
void initHeaderList(headerList *list) {
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}
void turnDirNodeToBody(body *node, dirNode data) {
    node->data = (dirNode *)malloc(sizeof(dirNode));
    node->data->key = data.key;
    node->data->value = data.value;
    node->next = NULL;
}
void addBody(bodyList *list, body *node) {
    body *temp = (body *)malloc(sizeof(body));
    temp->data = node->data;
    temp->next = NULL;
    if (list->head == NULL) {
        list->head = temp;
        list->tail = temp;
    } else {
        list->tail->next = temp;
        list->tail = temp;
    }
    list->size++;
}
void initBodyList(bodyList *list) {
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
}
