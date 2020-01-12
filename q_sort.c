#include<stdio.h>
#include<stdlib.h>
int comparator(const void* p,const void* q){
        int l=*(const int *)p;
        int r=*(const int *)q;
        return l-r;
}
int main(){
        int arr[]={1,2,35,54,5};
        int size=sizeof(arr)/sizeof(arr[0]);
        qsort((void*)arr,size,sizeof(arr[0]),comparator);
        for(int i=0;i<size;i++){
                printf("%d   ",arr[i]);
        }
        printf("\n");
        return 0;
}

