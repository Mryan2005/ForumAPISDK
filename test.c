#include "api.h"
#include <string.h>
#include <stdlib.h>
#include "class/http.h"
#include "class/header.h"
#include <stdio.h>
int main() {
    headerList heads;
    bodyList bodys;
    initHeaderList(&heads);
    initBodyList(&bodys);
    createAHeaderItem(&heads, "json", "application/json");
    Authorization_header(&heads, "123");
    createABodyItem(&bodys, "name", "John");
    char key[100] = "Authorization", value[100] = "Token 123";
    createABodyItem(&bodys, key, value);
    strcpy(key, "name");
    strcpy(value, "John");
    createABodyItem(&bodys, key, value);
    return 0;
}