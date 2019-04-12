#include <stdio.h>
#include <conio.h>
#define max 20
	int menurep()
		{
			int rep;
			int flag;
				printf("\n 1.return to menu \n 2.exit\n");
					scanf("%d",&rep);
					if(rep == 1)
						{
							return flag == 1; }
					else if(rep = 2)
						{
							return flag == 0;}
					else
						{
							printf("\n Please only enter either y or n \n");
							menurep();
						}
		}
		void insertArray(int a[],int n)
	{
		int i;
		printf("\n Enter the elements of an array :- \n");
		for(i=0;i<n;i++)
			{
				printf("\n Enter Element %d = ",i+1);
				scanf("%d",&a[i]);
			}
			menurep();
	}
		void displayArray(int a[],int n)
	{
		int i;
		if(a[max] == NULL)
		{
			printf("\n Please first enter an array  \n");
			menurep();
		}
		else{
				for(i=0;i<n;i++)
			{
				printf("\n %d",a[i]);	
			}	
		}
		
	}
		void insertatpos(int a[],int n,int pos,int num)
	{
		int i;
		if(pos>n)
			{
				printf("\n %d position does\'t exist in an array\n Array size = %d",pos,n);
				menurep();
			}
		else if(a[max] == NULL )
			{
				printf("\n Please first enter an array  \n");
			menurep();
			}
		else{
			for(i=n-1;i>=pos;i--)
				{
					a[i+1] = a[i];
				}
				a[pos] = num;
				n = n + 1;
				printf("\n Array Updated");
			displayArray(a,n);	
		}
	}
	
		void delatpos(int a[],int n,int pos)
			{
				int i;
		if(pos>n)
			{
				printf("\n %d position does\'t exist in an array\n Array size = %d",pos,n);
				menurep();
			}
		else if(a[max] == NULL )
			{
				printf("\n Please first enter an array  \n");
			menurep();
			}
			else{
				for(i=pos;i<=n;i++)
					{
						a[i] = a[i+1];
					}
					n -= 1;
						printf("\n Array Updated");
			displayArray(a,n);
			}
			}
		void search(int a[],int n,int num)
	{
			int i;
		 if(a[max] == NULL )
			{
				printf("\n Please first enter an array  \n");
			menurep();
			}
		else
			{
				for(i=0;i<n;i++)
					{
						if(num == a[i])
							{
								printf("\n Element found at position %d",i+1);
							}
					}
			}
	}




int main()
	{
		int n,choice,flag=1,pos,num;
		int a[20];
		do{
				printf("\n *****Menu***** \n");
		printf("\n 1. Enter an array");
		printf("\n 2. Show an array");
		printf("\n 3. Insert an element in position");
		printf("\n 4. Delete an element in position");
		printf("\n 5. Search an array");
		printf("\n 6. Exit");
		printf("\n Enter your choice = ");
		scanf("%d",&choice);
				switch(choice)
			{
				case 1:
					printf("\n Enter a size of an array = ");
					scanf("%d",&n);
					insertArray(a,n);
					break;
				case 2:
					printf("\n Array :- \n");
					displayArray(a,n);
					menurep();
					break;
					case 3:
						printf("\n Enter a position = ");
						scanf("%d",&pos);
						pos=pos-1;
						printf("\n Enter an element = ");
						scanf("%d",&num);
						insertatpos(a,n,pos,num);
						break;
					case 4:
						printf("\n Enter a position = ");
						scanf("%d",&pos);
						pos = pos-1;
						delatpos(a,n,pos);
					case 5:
						printf("enter search item = ");
						scanf("%d",&num);
						search(a,n,num);
				case 6:
					flag = 0;
					break;
				default:
					printf("\n Error 404 \n Something went wrong ! \n");
					break;
			}
	
		}while(choice<=5 && flag == 1);
	return 0;
	}
