#include<iostream>
using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];

int total=0;

void enter()

{

		int ch=0;

			cout<<"How many students do u want to enter: "<<endl;

			cin>>ch;

			if(total==0)

			{

			total=ch+total;

			for(int i=0;i<ch;i++)

			{

				cout<<"\nEnter the data of student "<<i+1<<endl<<endl;

				cout<<"Enter name ";

				cin>>arr1[i];

				cout<<"Enter roll no ";

				cin>>arr2[i];

				cout<<"Enter course ";

				cin>>arr3[i];

				cout<<"Enter semester ";

				cin>>arr4[i];

				cout<<"Enter contact ";

				cin>>arr5[i];

				

			}

	    	}

	    	else

	    	{

	    		

	    		for(int i=total;i<ch+total;i++)

			{

				cout<<"\nEnter the data of student "<<i+1<<endl<<endl;

				cout<<"Enter name ";

				cin>>arr1[i];

				cout<<"Enter roll no ";

				cin>>arr2[i];

				cout<<"Enter course ";

				cin>>arr3[i];

				cout<<"Enter semester ";

				cin>>arr4[i];

				cout<<"Enter contact ";

				cin>>arr5[i];

			}

			total=ch+total;

			}

	

}

void show()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		for(int i=0;i<total;i++)

	    		{

	    		cout<<"\nData of Student "<<i+1<<endl<<endl;

	    		cout<<"Name "<<arr1[i]<<endl;

	    		cout<<"Roll no "<<arr2[i]<<endl;

	    		cout<<"Course "<<arr3[i]<<endl;

	    		cout<<"Semester "<<arr4[i]<<endl;

	    		cout<<"Contact "<<arr5[i]<<endl;

	    	    }

	    	}

}

void search()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

	string rollno;

				cout<<"Enter the Roll no of student"<<endl;

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						cout<<"Name "<<arr1[i]<<endl;

	    	        	cout<<"Roll no "<<arr2[i]<<endl;

	    		        cout<<"Course "<<arr3[i]<<endl;

	    		        cout<<"Semester "<<arr4[i]<<endl;

	    	        	cout<<"Contact "<<arr5[i]<<endl;

					}

				}

			}

}

void update()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		string rollno;

				cout<<"Enter the roll no of student for whom you want to update data"<<endl;

				cin>>rollno;

					for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						cout<<"\nPrevious data"<<endl<<endl;

						cout<<"Data of Student "<<i+1<<endl;

						cout<<"Name "<<arr1[i]<<endl;

	    	        	cout<<"Roll no "<<arr2[i]<<endl;

	    		        cout<<"Course "<<arr3[i]<<endl;

	    		        cout<<"Class "<<arr4[i]<<endl;

	    	        	cout<<"Contact "<<arr5[i]<<endl;

	    	        	cout<<"\nEnter new data"<<endl<<endl;

							cout<<"Enter name ";

				            cin>>arr1[i];

				            cout<<"Enter Roll no ";

				            cin>>arr2[i];

			             	cout<<"Enter course ";

				            cin>>arr3[i];

				            cout<<"Enter class ";

				            cin>>arr4[i];

				            cout<<"Enter contact ";

				            cin>>arr5[i];

					}

				}

			}

		}


void deleterecord()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		int a;

	        	cout<<"Press 1 to delete all record"<<endl;

				cout<<"Press 2 to delete record of a specific student"<<endl;

				cin>>a;

				if(a==1)

				{

					total=0;

					cout<<"All record is deleted."<<endl;

				}

				else if(a==2)

				{

				string rollno;

				cout<<"Enter the roll no of student whose record you want to delete"<<endl;

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						for(int j=i;j<total;j++)

						{

						arr1[j]=arr1[j+1];

						arr2[j]=arr2[j+1];

					    arr3[j]=arr3[j+1];

						arr4[j]=arr4[j+1];

						arr5[j]=arr5[j+1];

				     	}

					total--;

					cout<<"Your required record is deleted"<<endl;

					}

				}

				}

				 

			

			else 

			{

				cout<<"Invalid input";

			}

}

}

main()

{

	int value;

	while(true)

	{

	cout<<"\nEnter 1 to Enter data"<<endl;

	cout<<"Enter 2 to Show data"<<endl;

	cout<<"Enter 3 to Search data"<<endl;

	cout<<"Enter 4 to Update data"<<endl;

	cout<<"Enter 5 to Delete data"<<endl;

	cout<<"Enter 6 to Exit"<<endl;

	cin>>value;

	switch(value)

	{

		case 1:

			enter();

			break;

		case 2:

			show();

			break;

		case 3:

			search();

			break;

		case 4:

			update();

			break;

		case 5:

			deleterecord();

			break;

		case 6:

			exit(0);

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

}

}

