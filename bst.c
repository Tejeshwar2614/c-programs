#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* right;
    struct node* left;
};

struct node* createnode(int value)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> left = NULL;
    ptr -> right = NULL;
    ptr -> data = value;
    return ptr;
}

struct node *insertion(struct node *root,int value)
{
    if(root==NULL){
        root = createnode(value);
    }
    else if (value <= root -> data){
        root -> left = insertion(root -> left,value);
    }
    else {
        root -> right  = insertion(root -> right,value);
    }
    return root;
}

struct node traversal(struct node* root)
{
    if(root !=NULL){
        traversal(root -> left);
        printf("%d ",root->data);
        traversal(root -> right);
    }
}

// here we will find the height of the bst ....

int height(struct node* root)
{
    if(root ==NULL){
        return 0;
    }
    else{
        int leftheight = height(root -> left);
        int rightheight = height(root -> right);
        if(leftheight > rightheight){
            return (leftheight+1);
        }
        else{
            return (rightheight+1);
        }
    }
}
int main()
{
    struct node *root = NULL;
    int n, data;
    
    printf("Enter the number of elements to be inserted: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insertion(root, data);
    }
    printf("Inorder traversal of the BST: ");
    traversal(root);
    printf("\n");
    printf("the height of the tree is : %d\n",height(root));
    printf("the edges present in the longest path are : %d",height(root)-1);
    
    return 0;
}