#include<iostream>
using namespace std;
struct node
{
    int n;
    struct node *next;

};
struct node *head=NULL;

void addElement(int no)
{
    //node to store and other to traversal
    node *temp,*key;
    key=head;
    temp=new node();
    temp->n=no;
    temp->next=NULL;

    if (head==NULL)
    {
        head=temp;
    }
    else
    {
        while(key->next!=NULL)
        {
           key=key->next;
        }
     key->next=temp;
    }
}
void prinlink()
{
    struct node *key;
    key=head;
    while(key!=NULL)
    {
        cout<<key->n<<endl;
        key=key->next;
    }
}
//to find the most duplicated value in the linked list
int countlist()
{
    struct node *key;
    key=head;
    int c=0;
    while(key!=NULL)
    {
        c++;
        key=key->next;
    }
    return c;
}
void MostDuplicatet()
{
    int arr1[100],arr2[100];
int count,i=0;
node *key,*ptr;
key=head;
while(key!=NULL)
{
    count=0;
    int val=key->n;
    arr1[i]=val;
    ptr=head;
    while(ptr!=NULL)
    {
        if(val==ptr->n)
        {
            count++;

        }
        ptr=ptr->next;
    }
    key=key->next;
    arr2[i++]=count;
}
   int max_=arr2[0],index=0;
for(int j=0;j<i;j++)
{
    if(max_<arr2[j])
    {
        max_=arr2[j];
        index=j;
    }
}
cout<<"most duplicated number is "<<arr1[index]<<" and number of duplication is  "<<max_<<endl;
}
int  main()
{
    cout<<"Enter number of elements you want to add"<<endl;
    int num;cin>>num;
    cout<<"Enter "<<num<<" numbers "<<endl;
    for(int i=0;i<num;i++)
    {
        int x;cin>>x;
        addElement(x);
    }
    //to print linkedlist elements
   // prinlink();
   //to print number of elements in linkedlist
   //cout<<countlist()<<endl;
    MostDuplicatet();

    return 0;
}
