//A level order travsersal of the tree

void levelorder(node *t){
    queue<node*>q1;
    while(t!=NULL || !q1.empty()){
        cout<<t->element<<" ";
        if(t->leftchild!=NULL){
            q1.push(t->leftchild);
        }
        if(t->rightchild!=NULL){
            q1.push(t->rightchild);
        }
        t = q1.front();
        q1.pop();
    }
}