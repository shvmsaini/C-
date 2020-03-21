#include<stdio.h>
#include <conio.h>

void printarray(int[]);
void swap(int *a, int *b) {
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
/* void getkey(int arr[]) {
	int temp,flag;
	char a = getchar();
	switch (a) {
	case 'a': {
		for (int i = 0; i < 16; i++) {
			if (arr[i] == ' ') {
				flag = i;
			}
		}
		swap(&arr[flag], &arr[flag+1]);
		printarray(arr);
		break;
	}
	case 'd': {
				for (int i = 0; i < 16; i++) {
					if (arr[i] == ' ') {
						flag = i;
					}
				}
				swap(&arr[flag - 1], &arr[flag]);
				printarray(arr);
				break;
			  }
	case 's': {
			for (int i = 0; i < 16; i++) {
				if (arr[i] == ' ') {
					flag = i;
				}
			}
			swap(&arr[flag - 4], &arr[flag]);
			printarray(arr);
			break; }
	case 'w': {
		for (int i = 0; i < 16; i++) {
			if (arr[i] == ' ') {
				flag = i;
			}
		}
		swap(&arr[flag + 4], &arr[flag]);
		printarray(arr);
		break; 
	}
	}
	
	
} */
void getkey(int arr[]) {
	int ch, flag;
	if ((ch = _getch()) != 27) /* 27 = Esc key */
	{
		
		if (ch == 0 || ch == 224) {
			switch (_getch()) {
			case 75: {
				for (int i = 0; i < 16; i++) {
					if (arr[i] == ' ') {
						flag = i;
					}
				}
				swap(&arr[flag], &arr[flag + 1]);
				printarray(arr);
				break;
			}
			case 77: {
				for (int i = 0; i < 16; i++) {
					if (arr[i] == ' ') {
						flag = i;
					}
				}
				swap(&arr[flag - 1], &arr[flag]);
				printarray(arr);
				break;
			}
			case 80: {
				for (int i = 0; i < 16; i++) {
					if (arr[i] == ' ') {
						flag = i;
					}
				}
				swap(&arr[flag - 4], &arr[flag]);
				printarray(arr);
				break; }
			case 72: {
				for (int i = 0; i < 16; i++) {
					if (arr[i] == ' ') {
						flag = i;
					}
				}
				swap(&arr[flag + 4], &arr[flag]);
				printarray(arr);
				break;
			}
			}


		}

	}
}
void printarray(int arr[]) {
	int count = 0;
	for (int i = 0; i < (16); i++) {
		printf("%3d ", arr[i]);
		if (count == 3) {
			printf("\n");
			count = 0;
			continue;
		}
		count += 1;
	}
	printf("\n");
}
int equality(int a[], int b[]) {
	int i = 0;
	while (a[i] == b[i]) {
		i++;
	}
	
	if (i == 17 || i == 18) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int arrright1[16]  = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,' ' };
	int arrright2[16] = { ' ',1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	int arr[16] = { 1,' ',2,3,4,5,6,7,8,9,10,11,12,13,14,15 };

	printarray(arr);
	while (equality(arr ,arrright1)==0 && equality(arr, arrright2)==0) {
		getkey(arr);
	}
	printf("\n*************** you did it *****************");
	return 0;
}
