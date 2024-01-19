#pragma once

#include <termios.h>
#include "../include/modes.h"

typedef struct erow {
    int size;
    int rsize;
    char *chars;
    char *render;
} erow;

struct editorConfig {
    int cx, cy;
    int rowoff;
    int coloff;
    int screenrows;
    int screencols;
    int numrows;
    erow *row;
    struct termios orig_termios;
};

struct abuf {
    char *b;
    int len;
};

extern editorConfig E;