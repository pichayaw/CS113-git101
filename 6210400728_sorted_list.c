//6210400728 Pichaya Wongchana//
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *x;
};
int main()
{
    int input,count=1;
    struct node *list,*fi;
    while (1)
    {  
        scanf("%d",&input);
        if (input == -1)
        {
            break;
        }
        list = (struct node *)malloc(sizeof(struct node));
        if(count==1){
            list -> num= input;
            list -> x= NULL;
            fi = list;
            count++;
        }else{
        list-> num= input;
        list-> x = fi;
        fi= list;
        
        for (struct node *sort = list;sort -> x != NULL;sort=sort -> x)
        {
            int y;
            if (sort -> num>(sort -> x) -> num)
            {
                y = (sort -> num);
                sort-> num = (sort-> x) -> num;
                (sort-> x) -> num= y;

            }
        }
        }
    }
    while (list!= NULL)
    {
        printf("%d\n",list-> num);
        list = list-> x;
    }
}