#include <cstdio>
#include <cstdlib>
#include <unistd.h>

#include "../include/editor.h"

void die(const char *s) {
    editorRefreshScreen();
    
    perror(s);
    exit(1);
}