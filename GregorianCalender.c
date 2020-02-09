#include<stdio.h>
int main()
{
	int refy = 1900, y, lp=0, day = 0, diff, t_day = 0;
	char weekday[10][10] = { "Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday","Sunday" };
	scanf("%d", &y);
	diff = y - refy;
	while (refy < y) {
		if (refy % 4 == 0) {
			if (refy % 100 == 0) {
				if (refy % 400 == 0) {
					lp++;
				}
				
			}
			else {
				lp++;
			}
		}
		
		refy++;
	}
	t_day = (diff - lp) * 365 + lp * 366;
	day = t_day % 7;
	printf("On %d's January 1st it is %s.",y, weekday[day]);
	return 0;
}
