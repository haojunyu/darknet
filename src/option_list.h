#ifndef OPTION_LIST_H
#define OPTION_LIST_H
#include "list.h"

void option_insert(list *l, char *key, char *val);
char *option_find(list *l, char *key);
char *option_find_str(list *l, char *key, char *def);
int option_find_int(list *l, char *key, int def);
float option_find_float(list *l, char *key, float def);
void option_unused(list *l);

#endif
