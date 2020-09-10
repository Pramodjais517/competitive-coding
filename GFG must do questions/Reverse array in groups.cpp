node* rev(node* head,int k)
{
    node* next = head;
    node* prev = NULL;
    node* curr = head;
    int cnt = k;
    while(k>0 and next !=NULL)
    {
       next = curr->next;
       curr->next = prev;
       prev = curr;
       curr = next;
       k--;
    }
    if(head != NULL)
    head->next = rev(next,cnt);
    return prev;
}
node *reverse (node *head, int k)
{ 
    // Complete this method
    return rev(head,k);
}

