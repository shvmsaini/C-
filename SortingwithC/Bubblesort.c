#include<stdio.h>
void swap(int* item1, int* item2) {
	int temp;
	temp = *item1;
	*item1 = *item2;
	*item2 = temp;

}
void bubblesort(int arr[], int n) {
	int flag;
	for (int i = 0; i < n -1; i++) { 
		flag = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}

}
void printarray(int a[],int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}
int main() {
	int ar[] = { 1,4,12,2,8 }; // 5 elements
	int n = sizeof(ar) / sizeof(ar[0]); // 20/4 = 5
	bubblesort(ar, n);
	printarray(ar,n);
	return 0;
}
or in python 3
	
	from array import *
	x=int(input("how many elements"))
	arr=array['i',[]]
	for i in range(x):
	   arr.append(int(input())
	
	print("Your array",arr)
		     
#buuble sort
	flag=False
	for i in range(x-1):
	    for j in range(x-1-i):
		      if arr[j]>arr[j+1]:
		      	t=arr[j]
			arr[j]=arr[j+1]
			arr[j+1]=t
			flag=True
	    if flag==False:
		      break
	    else:
		      flag==False
	
print("Sorted array", arr)
		     
		      
