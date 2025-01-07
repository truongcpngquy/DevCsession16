#include<stdio.h>


void printArray(int* arr, int size) {
	
	 int n;
	 int found=0; 
	  printf("Nhap phan tu can tim: ");
      scanf("%d",&n); 
     for (int i=0; i<size; i++) {
      if(arr[i]==n){
	  printf("Phan tu can tim o vi tri thu : %d",i);
	  found=1;
	  break; 
		}		
    }
    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
   		}	
}

int main() 
{
    int array[] = {12,3,4,5,6,7};
    int size=sizeof(array)/sizeof(array[0]); 

    
    printArray(array, size);

    return 0;
}

