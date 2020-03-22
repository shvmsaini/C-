#include<stdio.h>
#include <conio.h>
int count = 0;
void printarray(int arr[]) {
	printf("\n"); 
	int count = 0;
	for (int i = 0; i < (16); i++) {
		if (arr[i] == ' ') {
			printf("   ");
			
			if (count == 3) {
				printf("\n");
				count = 0;
				continue;
			}
			count += 1;
			continue;
		}
		printf("%3d", arr[i]);
		if (count == 3) {
			printf("\n");
			count = 0;
			continue;
		}
		count += 1;
	}
	printf("\n");
}
void swap(int *a, int *b) { //swapping the numbers
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
int getkey(int arr[]) { // using arrowkeys scancodes
	int ch, flag;
	if ((ch = _getch()) != 27) /* 27 = Esc key */
	{
		if (ch == 'q' || ch == 'Q') {
			return 0;

		}
		if (ch == 0 || ch == 224) {
			switch (_getch()) {
				
			case 75: { // <--(left)
				for (int i = 0; i < 16; i++) {
					if (arr[i] == ' ') {
						flag = i;
					}
				}
				if (flag + 1 < 16) {
					swap(&arr[flag], &arr[flag + 1]);
					count++;
					
				}
				else {
					printf(" Not valid\n");
					break;
				}
				printarray(arr);
				break;
			}
			case 77: { // --> (right)
				for (int i = 0; i < 16; i++) {
					if (arr[i] == ' ') {
						flag = i;
					}
				}
				if (flag - 1 < 16) {
					swap(&arr[flag - 1], &arr[flag]);
					count++;
				}
				else {
					printf(" Not valid\n");
					break;
				}
				printarray(arr);
				break;
			}
			case 80: { // (down)
				for (int i = 0; i < 16; i++) {
					if (arr[i] == ' ') {
						flag = i;
					}
				}
				if (flag-4 < 16 && flag-4>-1) {
					swap(&arr[flag - 4], &arr[flag]);
					count++;
				}
				else {
					printf(" Not valid\n");
					break;
				}
				printarray(arr);
				break; }
			case 72: {  // up
				for (int i = 0; i < 16; i++) {
					if (arr[i] == ' ') {
						flag = i;
					}	
				}
				if (flag+4 < 16 && flag + 4 > -1) {
					swap(&arr[flag + 4], &arr[flag]);
					count++;
				}
				else {
					printf(" Not valid\n");
					break;
				}
				printarray(arr);
				break;
			}
			}


		}

	}
	else {
		
		return 0;
	}
	
}
int equality(int a[], int b[]) { //checking if two arrays are equal
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
int puzzle() {
	int arrright1[16] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,' ' };
	int arrright2[16] = { ' ',1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	int arr[16] = { 1,' ',2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	printf("\nUse arrow keys to move the tiles surrounding the space tile and arrange the numbers in ascending order.\nPress Q or ESC to quit.\n");
	printarray(arr);
	while (equality(arr, arrright1) == 0 && equality(arr, arrright2) == 0) {

		if (getkey(arr) == 0) {
			return 0;
		}
	}
	printf("\n*************** You won *****************\n\tTotal Moves = %d\n", count);
}
int main() { //driver code
	char choice = 'y';
	while (choice == 'y') {
		
		if (puzzle() == 0) {
			return 0;
		}
		count = 0;
		printf("\nDo you want to try again? Press y for yes or any other key for no : ");
		
		scanf_s("%c", &choice);
		getchar(); //scanf leaves a newline in buffer , now getchar will be able to eat the buffer 
	
	}
	return 0;
}
