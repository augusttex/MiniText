#ifndef EDITOR_H
#define EDITOR_H

typedef struct Document{
    struct Line *head;
    int line_count;

} Document;

void insert_line();
void list_lines();
void edit_line();
void remove_line();
void save_file();
void load_file();
void undo();
void redo();




#endif
