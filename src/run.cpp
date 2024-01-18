#include "../include/modes.h"
#include "../include/errors.h"
#include "../include/editor.h"


void run(int argc, char **argv) {
    enableRawMode();
    initEditor();
    if (argc >= 2) {
        editorOpen(argv[1]);
    }

    while (1) {
        editorRefreshScreen();
        editorProcessKeyPress();
    }
}
