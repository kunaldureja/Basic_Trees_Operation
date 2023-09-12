void inorederdisplay(node *t2){
    if(t2!=NULL){
        inorederdisplay(t2->leftchild);
        cout<<t2->element;
        inorederdisplay(t2->rightchild);
    }
}

void iterinorderdisplay(node *t3){
    stack<node*>stk;
    while(t3!=NULL || !stk.empty()){
        if(t3!=NULL){
            stk.push(t3);
            t3 = t3->leftchild;
        }
        else{
            t3 = stk.top();
            stk.pop();
            cout<<t3->element;
            t3 = t3->rightchild;
        }
    }
}
