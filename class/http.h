#pragma once
#include "header.h"
#include <string.h>
void createAHeaderItem(headerList *headerList, char *key, char *value) {
    dirNode data;
    header header_;
    defineDirNode(&data, key, value);
    turnDirNodeToHeader(&header_, data);
    addHeader(headerList, &header_);
}
void createABodyItem(bodyList *bodyList, char *key, char *value) {
    dirNode data;
    body header_;
    defineDirNode(&data, key, value);
    turnDirNodeToBody(&header_, data);
    addBody(bodyList, &header_);
}