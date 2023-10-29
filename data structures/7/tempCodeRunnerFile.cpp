void Delete(int x,int n){
    node *temp = head;
    node *prev;
    if(temp == NULL){
        return;
    }
    if(x == 1){
        head = temp->next; 
        free(temp);     
        return;
   }
   for(int i=1 ; i!=x ; i++){
    prev = temp;
    temp = temp->next;
    }

   if(temp == NULL)
   {
      cout<<"No Element present\n";
      return;
   }
   else
   {
      prev->next = temp->next;
      free(temp);
   }
    
}