void recpreorder(node *t){
    if(t!=NULL){
        cout<<t->data;
        preorder(t->left);
        preorder(t->right);
    }    
}
void iterpreorder(node *t){
    stack<int>s1;
    while(t!=NULL || !s1.empty()){
        if(t!=NULL){
            cout<<t->data;
            s1.push(t);
            t = t->left;
        }
        else{
            t = s1.top();
            s1.pop();
            t  = t->right;
        }
    }
}
