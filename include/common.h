#pragma once

#include <termios.h>
#include "../include/modes.h"

struct editorConfig {
    int cx, cy;
    int screenrows;
    int screencols;
    struct termios orig_termios;
};

struct abuf {
    char *b;
    int len;
};

extern editorConfig E;