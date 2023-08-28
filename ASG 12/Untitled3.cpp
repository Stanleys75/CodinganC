#include<stdio.h>

int count;	
void mergesort(int arr[], int left, int right){
  
  	
    if(left==right){
        return;
    }
    
  
    int middle = (right+left)/2;
    
    mergesort(arr,left,middle);
    mergesort(arr,middle+1,right);
    
    int tempArr[right-left];
    int tempIndex = 0;
    
    int leftIndex = left;
    int leftLimit = middle;
    int rightIndex = middle+1;
    int rightLimit = right;
    
 
    while(leftIndex <= leftLimit & rightIndex <= rightLimit){
        if(arr[leftIndex] < arr[rightIndex]){
            tempArr[tempIndex] = arr[leftIndex];
            leftIndex++;
            tempIndex++;
        } else {
            tempArr[tempIndex] = arr[rightIndex];
            rightIndex++;
            tempIndex++;
        }
    }
    
    while(leftIndex <= leftLimit){
        tempArr[tempIndex] = arr[leftIndex];
        leftIndex++;
        tempIndex++;
    }
        while(rightIndex <= rightLimit){
        tempArr[tempIndex] = arr[rightIndex];
        rightIndex++;
        tempIndex++;
    }
    
    tempIndex = 0;
    
    for(int i = left; i<= right; i++){
        arr[i] = tempArr[tempIndex];
        tempIndex++;
    }
    
   
}



int main(){
	int n;
    int arr[100001];
    
    
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
    	scanf("%d", &arr[i]);
	}
	
    mergesort(arr,0,n);
    for(int i=1;i<=n;i++){
    	if(arr[i] != arr[i+1]){
    		count++;
		}
	} 
    printf("%d\n",count);
    
    return 0;
}
