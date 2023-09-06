//Depth of a tree
int height(node *p){
    int x,y;
    if(p!=NULL){
        x = height(p->leftchild);
        y = height(p->rightchild);
        if(x>y)
        return x+1;
        else
        return y+1;
    }
}