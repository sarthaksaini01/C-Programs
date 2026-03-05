#include <stdio.h> 
#include <stdlib.h> 
#define T 2 // Minimum degree (order/2) 
 
// B-Tree Node structure 
typedef struct BTreeNode { 
    int *keys; 
    struct BTreeNode **children; 
    int numKeys; 
    int leaf; 
}BTreeNode; 
 void splitChild();
 void removeFromNode();
// Create a new B-Tree node 
BTreeNode* createNode(int leaf) { 
    BTreeNode* newNode = 
(BTreeNode*)malloc(sizeof(BTreeNode)); 
    newNode->keys = (int*)malloc((2 * T - 1) * 
sizeof(int)); 
    newNode->children = (BTreeNode**)malloc(2 * T 
* sizeof(BTreeNode*)); 
    newNode->numKeys = 0; 
    newNode->leaf = leaf; 
    return newNode;   } 
    void insertNonFull(BTreeNode* node, int key) { 
    int i = node->numKeys - 1; 
    if (node->leaf) { 
        while (i >= 0 && key < node->keys[i]) { 
            node->keys[i + 1] = node->keys[i]; 
            i--;            } 
        node->keys[i + 1] = key; 
        node->numKeys++; 
    } else { 
        while (i >= 0 && key < node->keys[i]) { 
            i--;                 } 
        i++;          if (node->children[i]->numKeys == 2 * T - 1) { 
            splitChild(node, i, node->children[i]); 
            if (key > node->keys[i]) { 
                i++;                  }                    } 
        insertNonFull(node->children[i],key);             }          } 
 
void splitChild(BTreeNode* parent, int i,int j, BTreeNode* fullChild) { 
    BTreeNode* newChild = 
createNode(fullChild->leaf); 
    parent->children[i + 1] = newChild; 
    parent->keys[i] = fullChild->keys[T - 1]; 
    newChild->numKeys = T - 1; 
    fullChild->numKeys = T - 1; 
    for ( j = 0; j < T - 1; j++) { 
        newChild->keys[j] = fullChild->keys[j + 
T];             } 
    if (!fullChild->leaf) {
	int j; 
        for ( j = 0; j < T; j++) 
{                     newChild->children[j] = 
fullChild->children[j + T];                   }               } 
    parent->numKeys++;       } 
 
void insert(BTreeNode** root, int key) { 
    BTreeNode* r = *root; 
    if (r->numKeys == 2 * T - 1) { 
        BTreeNode* s = createNode(0); 
        *root = s; 
        s->children[0] = r; 
        SplitChild(s, 0, r); 
        insertNonFull(s, key); 
    } else { 
        insertNonFull(r, key);             }            } 
 
void removeFromLeaf(BTreeNode* node, int idx) { 
		int i;
    for ( i = idx + 1; i < node->numKeys; i++) { 
        node->keys[i - 1] = node->keys[i];                } 
    node->numKeys--;           } 
 
void removeFromNonLeaf(BTreeNode* node, int idx) 
{ 
    int key = node->keys[idx]; 
    if (node->children[idx]->numKeys >= T) { 
  int pred = getPred(node->children[idx]); 
        node->keys[idx] = pred; 
        removeFromNode(node->children[idx], pred); 
    } else if (node->children[idx + 1]->numKeys >= T) { 
        int succ = getSucc(node->children[idx + 1]); 
        node->keys[idx] = succ; 
        removeFromNode(node->children[idx + 1], 
succ); 
    } else { 
        merge(node, idx); 
        removeFromNode(node->children[idx], 
key);                 }            } 
void removeFromNode(BTreeNode* node, int key) { 
    int idx = findKey(node, key); 
    if (idx < node->numKeys && node->keys[idx] == 
key) { 
        if (node->leaf) { 
            removeFromLeaf(node, idx); 
        } else { 
            removeFromNonLeaf(node, idx);                 } 
    } else { 
        if (node->leaf) { 
            printf("The key %d is not in the tree\n", key); 
            return;    } 
        int flag = (idx == node->numKeys) ? 1 : 0; 
        if (node->children[idx]->numKeys < T) { 
            fill(node, idx);           } 
        if (flag && idx > node->numKeys) { 
            removeFromNode(node->children[idx - 1], 
key); 
        } else 
{                     removeFromNode(node->children[idx],key);                  }             }          } 
// Other helper functions needed for deletion (getPred, getSucc, merge, fill, etc.) are required 
int main() { 
    BTreeNode* root = createNode(1); 
    // Inserting keys into the B-Tree 
    insert(&root, 10); 
    insert(&root, 20); 
    insert(&root, 5); 
    insert(&root, 6); 
    insert(&root, 15); 
    // The B-Tree would be printed or tested further here 
    printf("B-Tree operations tested.\n"); 
    return 0;     
	}
