#pragma once

char editorReadKey();
void editorProcessKeyPress();
void editorRefreshScreen();
void editorSetStatusMessage(const char *fmt, ...);
void editorOpen(char *filename);
void initEditor();