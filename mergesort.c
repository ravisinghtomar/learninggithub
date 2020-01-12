#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void merge(int arr[],int l,int m ,int r){
        int n1=m-l+1;
        int n2=r-m;
        int L[n1],R[n2];
        for(int i=0;i<n1;i++){
                L[i]=arr[i+l];
        }
        for(int j=0;j<n2;j++){
                R[j]=arr[m+j+1];
        }
        int i=0;
        int j=0;
        int k=l;
        while(i<n1&&j<n2){
                if(L[i]<=R[j]){
                        arr[k]=L[i];
                        i++;
                }
                else{
                        arr[k]=R[j];
                        j++;
                }
                k++;
        }
        while(i<n1){
                arr[k]=L[i];
                i++;
                k++;
        }
        while(j<n2){
                arr[k]=R[j];
                j++;
                k++;
        }
}
void mergesort(int arr[],int l,int r){
        if(l<r)
        {
                int m=(l+r)/2;
                mergesort(arr,l,m);
                mergesort(arr,m+1,r);
                merge(arr,l,m,r);
        }
}
int main(){
	int arr[10];
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
        int size=(sizeof(arr)/sizeof(arr[0]));
        mergesort(arr,0,size-1);
        for(int i=0;i<size;i++){
                printf("%d  ",arr[i]);
        }
        printf("\n");
        return 0;
}
                           
