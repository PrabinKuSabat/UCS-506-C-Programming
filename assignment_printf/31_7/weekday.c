/*
	Written By:-	Prabin Kumar Sabat
	Date:-		Mon Jul 31 2023
	Task:-		To print the day of week name
	Guided By:-	Darsan Sir
*/

# include <stdio.h>

void main()
{
	printf ("Enter the day number please:");
	printf ("(Number should be in between 1 to 7.) \n ");
	int day_no;
	scanf (" %d",&day_no);
	if (day_no >= 0 && day_no <= 7 )
	{
		switch (day_no)
		{
			case 1:
				printf("It's Monday! \n ");
				break;
			case 2:
				printf("It's Tuesday! \n ");
				break;
			case 3:
				printf("It's Wednesday! \n ");
				break;
			case 4:
				printf("It's Thursday! \n ");
				break;
			case 5:
				printf("It's Friday! \n ");
				break;
			case 6:
				printf("It's Saturday! \n ");
				break;
			default:
				printf("It's Sunday! \n ");
		}
	}
	else
		printf("Error: Incorrect Input! \n ");
}
