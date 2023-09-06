//count the nodes of a binary tree
int countrec(node *p){
    int x,y;
    if(p!=NULL){
        x = count(p->leftchild);
        y = count(p->rightchild);
        return x+y+1;
    }
    return 0;
}