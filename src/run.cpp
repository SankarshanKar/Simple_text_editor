#include "../include/modes.h"
#include "../include/errors.h"
#include "../include/editor.h"


void run() {
    enableRawMode();
    initEditor();

    while (1) {
        editorRefreshScreen();
        editorProcessKeyPress();
    }
}
