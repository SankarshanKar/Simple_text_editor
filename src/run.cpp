#include "../include/modes.h"
#include "../include/errors.h"
#include "../include/editor.h"


void run(int argc, char **argv) {
    enableRawMode();
    initEditor();
    if (argc >= 2) {
        editorOpen(argv[1]);
    }

    editorSetStatusMessage("HELP: Ctrl-S = save | Ctrl-Q = quit | Ctrl-F = find");

    while (1) {
        editorRefreshScreen();
        editorProcessKeyPress();
    }
}
