#ifndef __TREE__
#define __TREE__

#include "../ex7/block.h"

typedef struct block_tree_cell
{
  Block *block;
  struct block_tree_cell *father;
  struct block_tree_cell *firstChild;
  struct block_tree_cell *nextBro;
  int height;
} CellTree;

CellTree *create_node(Block *b);
int update_height(CellTree *father, CellTree *child);
void add_child(CellTree *father, CellTree *child);
void print_tree(CellTree *ct);
void delete_tree_cell(CellTree *node);
void delete_tree(CellTree *ct);

CellTree *highest_child(CellTree *cell);
CellTree *last_node(CellTree *tree);

CellProtected **merge_list_decla(CellProtected **l1, CellProtected **l2);

#endif
