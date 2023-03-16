#include<stdio.h>
int linearSearch(int array[],int n,int search)
{
    int i;
    for (i=0;i<n;i++){
        if (search==array[i])
            return i;
    }
    return -1;
};

int main(void)
{
    int array[]={12,34,436,8672,311435,58454,24,65};
    int n=sizeof(array);
    int x=311435;
    int result=linearSearch(array,n,x);
    if (result==-1)
        printf("not found");
    else    
        printf("the element is at %d index and at %d position",result,result+1);
}