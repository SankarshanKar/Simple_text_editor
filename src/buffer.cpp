#include <cstddef>
#include <cstdlib>
#include <cstring>

#include "../include/common.h"

void abAppend(abuf *ab, const char *s, int len) {
    char *ptr = (char*) realloc(ab->b, ab->len + len);

    if (ptr == NULL) {
        return;
    }
    memcpy(&ptr[ab->len], s, len);
    ab->b = ptr;
    ab->len += len;
}

void abFree(abuf *ab) {
    free(ab->b);
}