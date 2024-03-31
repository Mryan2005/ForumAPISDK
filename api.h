#pragma once
#include <string.h>
#include "class/header.h"
#include "class/http.h"
void Authorization_header(headerList *headerList, char *token) {
    char *authorization = "Token ";
    char *authorizationToken = (char *)malloc(strlen(authorization) + strlen(token) + 1);
    strcpy(authorizationToken, authorization);
    strcat(authorizationToken, token);
    createAHeaderItem(headerList, "Authorization", authorizationToken);
}
// void createADisscusstionItem(headerList *bodyList, char *key, char *value) {
//     createAHeaderItem(bodyList, key, value);
// }