//Depth of a tree
int height(node *p){
    int x,y;
    if(p!=NULL){
        x = height(p->leftchild);
        y = height(p->rightchild);
        if(x>y)  //x count the nodes of left subtree and y count the nodes of the righ subrtree
        return x+1;
        else
        return y+1;
    }
}
