

void main(void)
  {
    int x,y;
    void abc(int &,int &);
    .....
    .....
    abc(x,y);
    .....               //change in x and y can be seen
    .....
  }

void abc(int &a,int &b) //Call by reference
  {
    .....
    .....
  }


void main(void)
  {
    int x,y;
    void abc(int,int);
    .....
    .....
    abc(x,y);
    .....             //change in x and y can not be seen
    .....
  }

void abc(int a,int b) //Call by value
  {
    .....
    .....
  }


void main(void)
  {
    int x,y;
    void abc(int *,int *);
    .....
    abc(&x,&y);
    .....               //change in x and y can be seen
    .....
  }

void abc(int *a,int *b) //Call by name or call by address as a value
  {
    .....
    .....
  }








