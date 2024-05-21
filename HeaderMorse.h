#ifndef HEADER_H
#define HEADER_H

#include "Stack.h"
#include "Tampilan.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


typedef struct TreeNode
{
    char character;
    struct TreeNode *left;
    struct TreeNode *right;
    struct TreeNode *parent;
} TreeNode;

TreeNode *createTreeNode(char character, TreeNode *parent);
void insertCodeMorse(TreeNode **root, const char *code, char character);
void initialMorse(TreeNode **root);
TreeNode* searchNodeMorse(TreeNode *root, char character);
char decode(TreeNode *root, const char *code);
char *encode(TreeNode *root,const char *input);
void freeTree(TreeNode *root);


char *readInput();
void fitur_encodeMorse(TreeNode *root);
void fitur_decodeMorse(TreeNode *root);
void printInorder(TreeNode *root);

void printTree(TreeNode *root, int level);
void hierarchyRoot(TreeNode *root, char target, int level, bool *found);
void findAndhierarchyRoot(TreeNode *root, char target);
void displayHierarchy(TreeNode *root);
int findPathToRoot(TreeNode *node, char *path, int *sidePath);
void findPath(TreeNode *root, char start, char end);

#endif /* HEADER_H */