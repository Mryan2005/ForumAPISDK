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
void createABodyItem(headerList *headerList, char *key, char *value) {
    dirNode data;
    header header_;
    defineDirNode(&data, key, value);
    turnDirNodeToHeader(&header_, data);
    addHeader(headerList, &header_);
}