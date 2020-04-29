void addatafter()
{
  struct node *temp,*p;
  int loc,i=1;
  printf("Enter location");
  scanf("%d\n",&loc);
  len=length();
  if(loc > len)
  {
    printf("Invalid location");
  }
  else
  {
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=10;
    temp->left=NULL;
    temp->right=NULL;
  }
}
