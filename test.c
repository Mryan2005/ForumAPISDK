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
    return 0;
}