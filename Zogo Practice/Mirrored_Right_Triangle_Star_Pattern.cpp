/*  hints : ---------"Display Mirror Right Angle Triangle star and Numbers Pattern " -------------------

 			i)  Total no. of rows = total no. of rows 
 			ii) to print space, row_no = (total no. of rows - row_no)
 			iii) to print stars , no. of star= row_no 
*/

#include<stdio.h>
int main()
{
	int i,j,no_of_rows,space,symbols,row_no;
	printf("Enter the number of rows :");
	scanf("%d",&no_of_rows);
	for(row_no=1;row_no<=no_of_rows;row_no++)
	{
		//calculate and print spaces
		for(space=1;space<=(no_of_rows-row_no);space++)
		{
			//printf("  ");    //two space  to print * 
			printf("   ");	//three spaces will print two digits number
		}
		//calculate and print * symbols
		for(symbols=1;symbols<=row_no;symbols++)
		{
			//printf("* "); // to print star you put * and 1 space 
			printf("%2d ",row_no); //to print two digits you write 2d and 1 space 
		}
		printf("\n");
	}
	
}
