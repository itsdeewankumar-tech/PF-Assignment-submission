#include <stdio.h>
int main(){
	int x_coordinate;
	int y_coordinate;
	printf("This program will Identify points in which Quadrant point lie \nFirst Enter the x coordinate : ");
	scanf("%d",&x_coordinate);
	printf("\nNow Enter the y coordinate : ");
	scanf("%d",&y_coordinate);
	if(x_coordinate>0 && y_coordinate>0)
	{
		printf("The Point (%d,%d) Lies in Quadrant I",x_coordinate,y_coordinate);
	}
	if(x_coordinate<0 && y_coordinate>0)
	{
		printf("The Point (%d,%d) Lies in Quadrant II ",x_coordinate,y_coordinate);
	}
		if(x_coordinate<0 && y_coordinate<0)
	{
		printf("The Point (%d,%d) Lies in Quadrant III ",x_coordinate,y_coordinate);
	}
		if(x_coordinate>0 && y_coordinate<0)
	{
		printf("The Point (%d,%d) Lies in Quadrant IV ",x_coordinate,y_coordinate);
	}
	return 0;
}

