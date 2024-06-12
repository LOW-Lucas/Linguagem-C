#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
int data;
struct Node* left;
struct Node* right;
} Node;
Node* criarNode(int value) {
Node* novoNode = (Node*)malloc(sizeof(Node));
novoNode->data = value;
novoNode->left = NULL;
novoNode->right = NULL;
return novoNode;
}
int cont(Node* root, int target) {
if (root == NULL) {
return 0;
}
int count = 0;
if (root->data == target) {
count++;
}
count += cont(root->left, target);
count += cont(root->right, target);
return count;
}
int main() {
Node* root = criarNode(5);
root->left = criarNode(2);
root->left->left = criarNode(2);
root->left->right = criarNode(3);
root->right = criarNode(5);
root->right->right = criarNode(8);

int t = 5;
int o = cont(root, t);
printf("Numero de ocorrencias: %d\n", o);
return 0;
} 