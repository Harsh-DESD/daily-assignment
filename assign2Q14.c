#include<stdio.h>
int main()
{	int emp_id, deptno;
	char dsgncode;
	char* dept_name;
	char* designation;

	scanf("%d", &emp_id);
	scanf("%d", &deptno);
	scanf("%*c%c", &dsgncode);
/*
	printf("Employee with employee id %d is working in ", emp_id);

	switch(deptno)
	{	case 10:printf("\"Marketing\" department as ");
		break;
		
		case 20:printf("\"Management\" department as ");
		break;

		case 30:printf("\"Sales\" department as ");
		break;

		case 40:printf("\"Desiging\" department as ");
		break;

		default:printf("\"invalid\" department as ");
		break;
	}

	switch(dsgncode)
	{	case 'M' : printf("\"Manager\"");
		break;

		case 'S' : printf("\"Supervisor\"");
		break;

		case 's' : printf("\"Security officer\"");
		break;

		case 'C' : printf("\"Clerk\"");
		break;

		default : printf("\"invalid\"");
		break;
	}
*/
	switch(deptno) {
		case 10 : dept_name = "Marketing";
				  break;
		case 20 : dept_name = "Management";
				  break;
		case 30 : dept_name = "Sales";
			      break;
		case 40 : dept_name = "Desiging";
				  break;
		default : printf("invalid deptno");

	}

	switch(dsgncode){
		case 'M' : designation = "Manager";
			      break;
		case 'S' : designation = "Supervisor";
				  break;
		case 's' : designation = "Security officer";
				  break;
		case 'C' : designation = "Clerk";
			      break;
		default : printf("invalid dsdncode");
				  break;
	}

	printf("Employee with emp id %d is woking in %s department as %s", emp_id, dept_name, designation);

	return 0;

}
