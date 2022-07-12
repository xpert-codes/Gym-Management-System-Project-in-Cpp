#include<iostream>
#include<conio.h>
#include<string.h>
#include<string>
#include<cstring>
#include<windows.h>
using namespace std;

int login()
{
	string pass;
	char ch, fname[20];
	int i;
	pass = "";
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tGYM MANAGEMENT SYSTEM" << endl;
	cout << "\t\t\t\t\t\t\t\t\t------------------------------" << endl;
	cout << "\n\t\t\t\t\t\t\t\t\tLOGIN\n";
	cout << "\t\t\t\t\t\t\t\t\t------------------------------\n\n";
	cout << "\t\t\t\t\t\t\t\t\tEnter Password: ";
	ch = getch();
	while(ch != 13)
	{
    	pass.push_back(ch);
    	cout << '*';
    	ch = getch();
	}
	if(pass == "ahmad")
	{
		system("cls");
		//cout << endl << endl;
    	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t  Access Granted!  ";
    	Sleep(1000);
   		system ("CLS");
   	}
	else
	{
		//cout << endl << endl;
		system("cls");
    	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tAccess Aborted" << endl;
		cout << "\t\t\t\t\t\t\t\t\tPlease Try Again" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
		getch();
 		system("CLS");
    	login();
	}
}


class declaration
{
	public:
	string id, name, age, address, contact, designation, experience;
	string status;
	declaration () : status("Not Paid") {} //constructor
};


class count
{
	public:
	int counter;
	count () : counter(0) {} //constructor
	
};


class member : public count, public declaration{
	public:
	declaration m[10];
	int en;
	string back;
	int memberid;
	int status1;
	int status2;
	int fee;
	int mem_fee;
	
	member () : fee(0), memberid(0), status1(0), status2(0), mem_fee(0) {} //constructor


	void get_data()
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tHow many members do you want to add: ";
		cin >> en;
		system("cls");
		for(int i = 0; i < en; i++)
		{
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tAlot unique ID to member " << i + 1 << ": ";
			cin.ignore();
			getline(cin, m[memberid].id);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tName                      : ";
			getline(cin, m[memberid].name);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tAge                       : ";
			getline(cin, m[memberid].age);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tAddress                   : ";
			getline(cin, m[memberid].address);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tContact                   : ";
			getline(cin, m[memberid].contact);
			memberid++;
			counter++;
			back:
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tProceed Forward[Y/N]      : ";
			cin >> back;
			if(back == "Y" || back == "y")
			{
				cout << endl << endl;
				cout << "\t\t\t\t\t\t\t\tYou filled all Entries of " << i + 1 << "/" << en << " member successfully...";
				getch();
				cout << endl;
			}
			else if(back =="N" || back == "n")
			{
				break;
			}
			else
			{
				cout << "\n\t\t\t\t\t\t\t\tWrong Input";
				goto back;
			}
		}
	}
		

	void show_data()
	{
		system("cls");
        string n;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the member's ID  to display Record: ";
    	cin >> n;
    	system("cls");
        if(n == "0")
        {
        	system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
            cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
        }
    	else
    	{
        	int i;
        	for(i = 0; i < memberid; i++)
        	{
        		status1 = 0;
        	    if(n == m[i].id)
        	    {
        	        status1 = 1; //here 1 is considered as bool true
        	        break;
        	    }    
        	}// for loop closed
        	
        		if(status1) //if true
            	{
        		    cout << "\n\n\n\n\n\n\n\n\n\n";
        		    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        		    cout << "\t\t\t\t\t\t\t\tMembers's ID                 :" << m[i].id << endl << endl;
        	    	cout << "\t\t\t\t\t\t\t\tMembers's Name               :" << m[i].name << endl << endl;
        	    	cout << "\t\t\t\t\t\t\t\tMember's Age                 :" << m[i].age << endl << endl;
        	    	cout << "\t\t\t\t\t\t\t\tMember's Address             :" << m[i].address << endl << endl;
        	    	cout << "\t\t\t\t\t\t\t\tMembers's Contact            :" << m[i].contact << endl << endl;
        	    	cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        	    	cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
        		}
            	else
   		    	{
        		    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tNo such ID in database" << endl;
        	    	cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
            	}
        }
        getch();
	}
    	
		
	void member_data()
   	{
      	//int i;
      	if(memberid == 0)
      	{
      		system("cls");
      		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!" << endl;
      		cout << "\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
    	}
	 	else
		{
    		cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
    		cout << "\t\t\t\t\t\t\t\t\t  Details Of All The Members In The GYM" << endl << endl;
    	    cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;

        	cout << "\t\t\t\t\t\tID" << "\t\t\t" << "NAME" << "\t\t\t" << "AGE" << "\t\t\t" << "Contact";
       		cout << endl << endl;
       		
       		for(int i = 0; i < memberid; i++)
       		{
        		cout << "\t\t\t\t\t\t" << m[i].id << "\t\t\t" << m[i].name << "\t\t\t" << m[i].age << "\t\t\t" << m[i].contact << endl << endl;
        		
        	}
        	cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
       		cout<<"\n\t\t\t\t\t\tPress any key to choose another option...";
       	}
        getch();
    }
    	

   	void total_members()
    {
        system("cls");
        int i = counter;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t-----------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tTotal Members in GYM: " << i << endl << endl;
        cout << "\t\t\t\t\t\t\t\t-----------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
        getch();
    }


    void record_fee()
    {
        system("cls");
        string n;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the member's ID  to Record Fee> ";
    	cin >> n;
        if(n == "0")
        {
        	system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!"<< endl;
            cout << "\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
        }
    	else
    	{
        	int i;
        	for(i = 0; i < memberid; i++)
        	{
        		status2 = 0;
        	    if(n == m[i].id)
        	    {
        	        status2 = 1; //here 1 is considered as bool true
        	        break;
        	    }    
        	}// for loop closed
        	
        		if(status2) //if true
            	{
        		    fee++;
        	    	mem_fee += 500;
        	    	m[i].status = "Paid";
        	    	system("cls");
        		    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tFee Paid...";
        		}
            	else
   		    	{
   		    		system("cls");
        		    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tNo such ID in database " << endl;
        	    	cout << "\t\t\t\t\t\t\tPress any key to choose another option...";
            	}
        }
        getch();
	}


	void show_fee()
	{
		//int i;
      	if(memberid == 0)
      	{
      		system("cls");
      		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!" << endl;
      		cout << "\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
    	}
	 	else
		{
			system("cls");
    		cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
    		cout << "\t\t\t\t\t\t\t\t\tFee Record Of All The Members In The GYM" << endl << endl;
    	    cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\tTotal Members: " << counter << endl << endl;
			cout << "\t\t\t\t\t\tMembers that paid fee: " << fee << endl << endl;
			cout << "\t\t\t\t\t\tID" << "\t\t\t" << "NAME" << "\t\t\t" << "Contact" << "\t\t\t" << "Status";
       		cout << endl << endl;

       		for(int i = 0; i < memberid; i++)
       		{
        		cout << "\t\t\t\t\t\t" << m[i].id << "\t\t\t" << m[i].name << "\t\t\t" << m[i].contact << "\t\t" << m[i].status << endl;
        	}
        	cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
       		cout<<"\n\t\t\t\t\t\tPress any key to choose another option...";
       	}
        getch();
	}

    
};



class employe : public count , public declaration
{
	public:
	declaration e[10];
	int i, en;
	string back;
	int pay;
	int employeid;
	int status3;
	int status4;
	//int emp_pay;
	int emp_pay_given;
	employe () : pay(0), employeid(0), status3(0), status4(0), emp_pay_given(0) {} // constructor
	void get_data()
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tHow many employes do you want to add: ";
		cin >> en;
		system("cls");
		for(i = 0; i < en; i++)
		{
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tAlot unique ID to employe " << i + 1 << ": ";
			cin.ignore();
			getline(cin, e[employeid].id);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tName                       : ";
			getline(cin, e[employeid].name);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tAge                        : ";
			getline(cin, e[employeid].age);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tDesignation                : ";
			getline(cin, e[employeid].designation);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tExperience                 : ";
			getline(cin, e[employeid].experience);
			employeid++;
			counter++;
			cout << endl << endl;
			back1:
			cout << "\t\t\t\t\t\t\t\tProceed Forward[Y/N]       : ";
			cin >> back;
			if(back == "Y" || back == "y")
			{
				cout << endl << endl;
				cout << "\t\t\t\t\t\t\t\tYou filled all Entries of " << i + 1 << "/" << en << " employee successfully...";
				getch();
				cout << endl;
			}
			else if(back =="N" || back == "n")
			{
				break;
			}
			else
			{
				cout << "\n\t\t\t\t\t\t\t\tWrong Input" << endl;
				goto back1;
			}
		}
	}
		

	void show_data()
	{
		system("cls");
		int i;
        string n;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the employe's ID  to display Record: ";
    	cin >> n;
    	system("cls");
        if(n == "0")
        {
        	system("cls");
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!"<< endl;
            cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
        }
        
    	else
    	{
        	//int status = 0;
        	for(i = 0; i < employeid; i++)
        	{
        		status3 = 0;
        	    if(n == e[i].id)
        	    {
        	        status3 = 1; //here 1 is considered as bool true
        	        break;
        	    }
        	    
        	}
        	if(status3) //if true
            {
        	    cout << "\n\n\n\n\n\n\n\n\n\n";
        	    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t<1> Employe's ID                 :" << e[i].id << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t<2> Employe's Name               :" << e[i].name << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t<3> Employe's Age                :" << e[i].age << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t<4> Employe's Designation        :" << e[i].designation << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t<5> Employe's Experience         :" << e[i].experience << endl << endl;
        	    cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        	    cout << "\n\t\t\t\t\t\t\t\tPress any key to choose another option...";
        	}
            else
   		    {
        	    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tNo such ID in database " << endl;
        	    cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
            }
        }
        getch();
	}
    	    	
		
	void employe_data()
   	{
      	int i;
      	if(employeid == 0)
      	{
      		system("cls");
      		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!" << endl;
      		cout << "\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
    	}
	 	else
		{
			cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t---------------------------------------------------------------------------------------" << endl << endl;
    		cout << "\t\t\t\t\t\t\t\t\tDetails Of All The Employes In The GYM" << endl << endl;
    	    cout << "\t\t\t\t\t\t---------------------------------------------------------------------------------------" << endl << endl;
    		
        	cout << "\t\t\t\t\t\tID" << "\t\t\t" << "NAME" << "\t\t\t" << "AGE" << "\t\t\t" << "DESIGNATION";
       		cout << endl << endl;

       		for(i = 0; i < employeid; i++)
       		{
        		cout << "\t\t\t\t\t\t" << e[i].id << "\t\t\t" << e[i].name << "\t\t\t" << e[i].age << "\t\t\t" << e[i].designation << endl << endl;
        		
        	}
        	cout << "\t\t\t\t\t\t---------------------------------------------------------------------------------------" << endl << endl;
       		cout << "\t\t\t\t\t\tPress any key to choose another option...";
       	}
        getch();
    }
    	

   	void total_employes()
    {
        system("cls");
        int i = counter;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t-----------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tTotal Members in GYM: " << i << endl << endl;
        cout << "\t\t\t\t\t\t\t\t-----------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
        getch();
    }
    

    void record_pay()
    {
        system("cls");
        string n;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the employe's ID  to Record payment: ";
    	cin >> n;
        if(n == "0")
        {
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!" << endl;
            cout << "\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
        }
    	else
    	{
        	int i;
        	for(i = 0; i < employeid; i++)
        	{
        		status4 = 0;
        	    if(n == e[i].id)
        	    {
        	        status4 = 1; //here 1 is considered as bool true
        	        break;
        	    }    
        	}// for loop closed
        	
        		if(status4) //if true
            	{
        		    pay++;
        	    	//emp_pay -= 500;
        	    	emp_pay_given += 500;
        	    	e[i].status = "Paid";
        		    system("cls");
        		    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tPay Given...";
        		}
            	else
   		    	{
        		    system("cls");
        		    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tNo such ID in database " << endl;
        	    	cout << "\t\t\t\t\t\t\tPress any key to choose another option...";
            	}
        }
        getch();
	}


	void show_pay()
	{
		//int i;
      	if(employeid == 0)
      	{
      		system("cls");
      		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!" << endl;
      		cout << "\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
    	}
	 	else
		{
			system("cls");
			//int j = fee;
			cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
    		cout << "\t\t\t\t\t\t\t\t\tPay Record Of All The Employes In The GYM" << endl << endl;
    	    cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\tTotal Employes: " << counter << endl << endl;
			cout << "\t\t\t\t\t\tEmployes that Received Pay:" << pay << endl << endl;
        	cout << "\t\t\t\t\t\tID" << "\t\t\t" << "NAME" << "\t\t\t" << "Designation" << "\t\t\t" << "Status";
       		cout << endl << endl;

       		for(int i = 0; i < employeid; i++)
       		{
        		cout << "\t\t\t\t\t\t" << e[i].id << "\t\t\t" << e[i].name << "\t\t\t" << e[i].designation << "\t\t\t" << e[i].status << endl;
        	}
        	cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
       		cout<<"\n\t\t\t\t\t\tPress any key to choose another option...";
       	}
        getch();
	}
    
};

class feedback
{
	public:
	int luv;
	int sat;
	int nt_sat;
	int poor;
	string input;
	feedback() :  luv(0), sat(0), nt_sat(0), poor(0) {}
	
	void get_feeback()
	{
	
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tPlease inform us with your valuable feedback...";
		getch();
		feed:
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
    	cout << "\t\t\t\t\t\t\t<1> I loved your management and machinery               " << endl << endl;
    	cout << "\t\t\t\t\t\t\t<2> I am satisfied with your management and machinery   " << endl << endl;
    	cout << "\t\t\t\t\t\t\t<3> I am not satified with your management and machinery" << endl << endl;
    	cout << "\t\t\t\t\t\t\t<4> Your Management and machinery is very poor          " << endl << endl;
		cout << "\t\t\t\t\t\t\t<5> Go Back                                   " << endl << endl;
		cout << "\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
    	cout << "\t\t\t\t\t\t\tEnter your choice:     ";
    	cin >> input;
    
		if(input == "1")
		{
			luv = luv + 1;
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tThanks! We value your feedback...";
			getch();
		}
		else if(input == "2")
		{
			sat = sat + 1;
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tThanks! We value your feedback...";
			getch();
		}
		else if(input == "3")
		{
			nt_sat = nt_sat + 1;
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tThanks! We value your feedback...";
			getch();
		}
		else if(input == "4")
		{
			poor = poor + 1;
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tThanks! We value your feedback...";
			getch();
		}
		else if(input == "5")
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tWe value your feedback! Please visit again...";
			getch();
		}
		else
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
    		cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
			getch();
			goto feed;
		}
	
	}
	void show_feedback()
	{
		if(luv == 0 && sat == 0 && nt_sat == 0 && poor == 0)
		{
			system("cls");
      		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!" << endl;
      		cout << "\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
      		getch();
		}
		else
		{
			if(luv > sat && luv > nt_sat && luv > poor)
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t-------------------------------------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\tMaximum people are loving your management and machinery..." << endl << endl;
				cout << "\t\t\t\t\t\t\t-------------------------------------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
			}
			else if(sat > luv && sat > nt_sat && sat > poor)
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t-------------------------------------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\tMaximum people are Just satisfied with your management and machinery..." << endl << endl;
				cout << "\t\t\t\t\t\t\t-------------------------------------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
			}
			else if(nt_sat > luv && nt_sat > sat && nt_sat > poor)
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t-------------------------------------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\tMaximum people are not satisfied with your management and machinery..." << endl << endl;
				cout << "\t\t\t\t\t\t\t-------------------------------------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
			}
			else if(poor > luv && poor > sat && poor > nt_sat)
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t-------------------------------------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\tYou need to do more, your management and machinery is POOR in quality..." << endl << endl;
				cout << "\t\t\t\t\t\t\t-------------------------------------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
			}
			else
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t-------------------------------------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\tNot able to show a defined result! Need more feedback..." << endl << endl;
				cout << "\t\t\t\t\t\t\t-------------------------------------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
			}
		}	
	}
};


class time
{
	private:
		string mon, tue, wed, thurs, satur, sun;
		int chk;
	public:
		time() : chk(0) {}
		
	void get_time()
		{
			chk++;
			monday:
			system("cls");
			cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tFor Monday" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<1> Chest Workout     \t<2> Dumble rows" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<3> Abs workout       \t<4> Glutes/Squarts" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<5> Weightlose workout\t<6> Leg workout" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tEnter your choise:     ";
			cin >> mon;
			if(mon == "1")
			{
				mon = "Chest day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(mon == "2")
			{
				mon = "Dumble rows day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(mon == "3")
			{
				mon = "Abs day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(mon == "4")
			{
				mon = "Glutes day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(mon == "5")
			{
				mon = "Weightlose day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(mon == "6")
			{
				mon = "Leg day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else 
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
    			cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
				goto monday;
			}
			tuesday:
			system("cls");
			cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tFor Tuesday" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<1> Chest Workout     \t<2> Dumble rows" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<3> Abs Workout       \t<4> Glutes/Squarts" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<5> Weightlose Workout\t<6> Leg Workout" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tEnter your choise:     ";
			cin >> tue;
			if(tue == "1")
			{
				tue = "Chest day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(tue == "2")
			{
				tue = "Dumble rows day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(tue == "3")
			{
				tue = "Abs day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(tue == "4")
			{
				tue = "Glutes day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(tue == "5")
			{
				tue = "Weightlose day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(tue == "6")
			{
				tue = "Leg day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else 
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
    			cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
				goto tuesday;
			}
			wednesday:
			system("cls");
			cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tFor Wednesday" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<1> Chest Workout     \t<2> Dumble rows" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<3> Abs Workout       \t<4> Glutes/Squarts" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<5> Weightlose Workout\t<6> Leg day" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tEnter your choise:     ";
			cin >> wed;
			if(wed == "1")
			{
				wed = "Chest day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(wed == "2")
			{
				wed = "Dumble rows day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(wed == "3")
			{
				wed = "Abs day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(wed == "4")
			{
				wed = "Glutes day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(wed == "5")
			{
				wed = "Weightlose day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(wed == "6")
			{
				wed = "Leg day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else 
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
    			cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
				goto wednesday;
			}
			thursday:
			system("cls");
			cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tFor Thursday" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<1> Chest Workout     \t<2> Dumble rows" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<3> Abs Workout       \t<4> Glutes/Squarts" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<5> Weightlose Workout\t<6> Leg Workout" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tEnter your choise:     ";
			cin >> thurs;
			if(thurs == "1")
			{
				thurs = "Chest day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(thurs == "2")
			{
				thurs = "Dumble rows day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(thurs == "3")
			{
				thurs = "Abs day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(thurs == "4")
			{
				thurs = "Glutes day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(thurs == "5")
			{
				thurs = "Weightlose day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(thurs == "6")
			{
				thurs = "Leg day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else 
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
    			cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
				goto thursday;
			}
			saturday:
			system("cls");
			cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tFriday is Off" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tFor Saturday" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<1> Chest Workout     \t<2> Dumble rows" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<3> Abs Workout       \t<4> Glutes/Squarts" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<5> Weightlose Workout\t<6> Leg Workout" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tEnter your choise:     ";
			cin >> satur;
			if(satur == "1")
			{
				satur = "Chest day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(satur == "2")
			{
				satur = "Dumble rows day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(satur == "3")
			{
				satur = "Abs day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(tue == "4")
			{
				satur = "Glutes day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(satur == "5")
			{
				satur = "Weightlose day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(satur == "6")
			{
				satur = "Leg day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else 
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
    			cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
				goto saturday;
			}
			sunday:
			system("cls");
			cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\tFor Sunday" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<1> Chest Workout     \t<2> Dumble rows" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<3> Abs Workout       \t<4> Glutes/Squarts" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<5> Weightlose Workout\t<6> Leg Workout" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tEnter your choise:     ";
			cin >> sun;
			if(sun == "1")
			{
				sun = "Chest day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(sun == "2")
			{
				sun = "Dumble rows day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(sun == "3")
			{
				sun = "Abs day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(sun == "4")
			{
				sun = "Glutes day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(sun == "5")
			{
				sun = "Weightlose day";
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tSaved...";
				Sleep(500);
			}
			else if(sun == "6")
			{
				sun = "Leg day";
				system("cls");
			}
			else 
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
    			cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
				goto sunday;
			}
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSchedule has been Resetted...";
			getch();
		}
	void show_time()
	{
		if(chk == 0)
		{
			system("cls");
			
			cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t\t\tNo record to show" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
			getch();
		}
		else
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tGYM Schedule" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tMonday           :" << mon << endl << endl;
			cout << "\t\t\t\t\t\t\t\tTuesday          :" << tue << endl << endl;
			cout << "\t\t\t\t\t\t\t\tWednesday        :" << wed << endl << endl;
			cout << "\t\t\t\t\t\t\t\tThursday         :" << thurs << endl << endl;
			cout << "\t\t\t\t\t\t\t\tFriday is Off" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tSaturday         :" << satur << endl << endl;
			cout << "\t\t\t\t\t\t\t\tSunday           :" << sun << endl << endl;
			cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
			getch();
			
		}
	}
};


int main()
{
    system("color 71");
    string ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9;
    string choise;
    member m1;
    employe e1;
    feedback f1;
    time t1;
    
system("cls");
cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
cout << "\t\t\t\t\t@@|                                        WELCOME TO                                     |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                   GYM MANAGEMENT SYSTEM                               |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
cout << "\t\t\t\t\t@@|                                            Made by Muhammad Ahmad Saleem              |@@\n";
cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";

cout << "Press any key to choose another option...";
getch();
system("cls");

    login();
    system("cls");
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||                                                  | 12% ....";
							Sleep(500);
							system("cls");
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading |||||||||||||||||||||||||||||||||                       | 61% ....";
							Sleep(500);
							system("cls");
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||        | 95% ....";
							Sleep(500);
							system("cls");
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading ||||||||||||||||||||||||||||||||||||||||||||||||||||||||| 100% ....";
							Sleep(2000);
    
	mainmenu:
    cout << endl << endl;
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the GYM Management System ***" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<1> Menu" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<2> Schedule" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<3> Help" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t<4> Exit" << endl << endl;
    cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t\t\t\tEnter Your Choice:     ";
    cin >> ch1;
    cout << endl << endl << endl;

    if(ch1 == "1")
    {	
		menu:
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Main Menu ***" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<1> Enter into Member's DataBase" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<2> Enter into Employes's DataBase" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<3> Enter in Monetary Database" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<4> Take Feedback" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t<5> View Feedback" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<6> Go Back" << endl << endl;
        cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
        cout << "\t\t\t\t\t\t\t\tEnter Your choice:     ";
        cin >> ch2;
        
        	if(ch2 == "1")
           	{
           		memberdatabase:
           		system("cls");
            	cout << "\n\n";
            	cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome To Members's DataBase ***" << endl << endl;
            	cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
            	cout << "\t\t\t\t\t\t\t\t<1> Add New Member's Information              " << endl << endl;
            	cout << "\t\t\t\t\t\t\t\t<2> Display Member's Information              " << endl << endl;
            	cout << "\t\t\t\t\t\t\t\t<3> Detail OF ALL The Members In The GYM      " << endl << endl;
            	cout << "\t\t\t\t\t\t\t\t<4> Total Number of Members in GYM            " << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<5> Go Back                                   " << endl << endl;
				cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
            	cout << "\t\t\t\t\t\t\t\tEnter your choice:     ";
            	cin >> ch3;
               	
               	if(ch3 == "1")
               	{
               		system("cls");
              		m1.get_data();
               		goto memberdatabase;
				}
			
               	else if(ch3 == "2")
               	{
           			system("cls");
          	        m1.show_data();
			    	cout << "\n";
                	goto memberdatabase;
                }
                
                else if(ch3 == "3")
                {
					system("cls");
                    m1.member_data();
                    goto memberdatabase;
				}
					
                else if(ch3 == "4")
                {
                    m1.total_members();
                    goto memberdatabase;
                }
                	
                else if(ch3 == "5")
				{
                   	goto menu;
				}
				
                else
				{
					system("cls");
                    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
   					cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
					getch();
                    goto memberdatabase;
                }
            	
            }
            
            else if(ch2 == "2")
            {
           		employedatabase:
           		system("cls");
               	cout << "\n\n";
               	cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome To Employe's DataBase ***" << endl << endl;
               	cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
               	cout << "\t\t\t\t\t\t\t\t<1> Add New Employe's Information             " << endl << endl;
               	cout << "\t\t\t\t\t\t\t\t<2> Display Employe's Information             " << endl << endl;
               	cout << "\t\t\t\t\t\t\t\t<3> Detail OF ALL The Employes In The GYM     " << endl << endl;
               	cout << "\t\t\t\t\t\t\t\t<4> Total Number of Employes in GYM           " << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<5> Go Back                                   " << endl << endl;
				cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
               	cout << "\t\t\t\t\t\t\t\tEnter your choice:     ";
               	cin >> ch4;
               	
               	if(ch4 == "1")
               	{
               		system("cls");
              		e1.get_data();
               		goto employedatabase;
				}
			
               	else if(ch4 == "2")
               	{
           			system("cls");
          	        e1.show_data();
			    	cout << "\n";
                	goto employedatabase;
                }
                
                else if(ch4 == "3")
                {
					system("cls");
                    e1.employe_data();
                    goto employedatabase;
				}
					
                else if(ch4 == "4")
                {
                    e1.total_employes();
                    goto employedatabase;
                }
                	
                else if(ch4 == "5")
				{
                   	goto menu;
				}
					
                else
				{
					system("cls");
                    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
    				//cout << endl;
   					cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
					getch();
                    goto employedatabase;
                }
            	
            }
            
            else if(ch2 == "3")
            {
            	
				get_data:
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome To Monetary DataBase ***    "<< endl << endl;
				cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<1> Record fee(member database)" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<2> View Recorded Fee(member database)" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<3> View members details(member database)" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<4> Record Payment(employe database)" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<5> View Recorded Payment(employe database)" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<6> View employes details(employe database)" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<7> Check and Balance(Over view)" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<8> Go back" << endl << endl;
				cout << "\t\t\t\t\t\t\t\tEnter your choise:     ";
				cin >> ch5;
		
				if(ch5 == "1")
				{
					system("cls");
					m1.record_fee();
					goto get_data;
				}
		
				else if(ch5 == "2")
				{
					system("cls");
					m1.show_fee();
					goto get_data;
				}
			
				else if(ch5 == "3")
				{
					system("cls");
					m1.member_data();
					goto get_data;
				}
				else if(ch5 == "4")
				{
					system("cls");
					e1.record_pay();
					goto get_data;
				}
				else if(ch5 == "5")
				{
					system("cls");
					e1.show_pay();
					goto get_data;
				}
				else if(ch5 == "6")
				{
					system("cls");
					e1.employe_data();
					goto get_data;
				}
				else if(ch5 == "7")
				{
					if(m1.mem_fee != 0)
					{
						system("cls");
						cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
						cout << "\t\t\t\t\t\t\t\tTotal Members: " << m1.counter << endl << endl;
						cout << "\t\t\t\t\t\t\t\tMembers that paid fee: " << m1.fee << endl << endl;
						cout << "\t\t\t\t\t\t\t\tTotal Fee Received: " << m1.mem_fee << endl << endl;
						cout << "\t\t\t\t\t\t\t\tTotal Employes: " << e1.counter << endl << endl;
						cout << "\t\t\t\t\t\t\t\tEmployes that Received Pay:" << e1.pay << endl << endl;
						cout << "\t\t\t\t\t\t\t\tTotal Payment Given: " << e1.emp_pay_given << endl << endl;
						int total = m1.mem_fee - e1.emp_pay_given;
						cout << "\t\t\t\t\t\t\t\tTotal Money Earned: " << total << endl << endl;
						if(total > 0)
						{
							cout << "\t\t\t\t\t\t\t\tWOW!!! You are in Profit!" << endl << endl;
						}
						else
						{
							cout << "\t\t\t\t\t\t\t\tAlas!!! You are in Loss!" << endl << endl;
						}
						cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
						cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
        				getch();
					}
					else
					{
						system("cls");
      					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!" << endl;
      					cout << "\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
      					getch();
					}
					goto get_data;
				}
				else if(ch5 == "8")
				{
					system("cls");
					goto menu;
				}
		
				else
				{
					system("cls");
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
    				//cout << endl;
    				cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
					getch();
					goto get_data;
				}
            	goto menu;
			}
			else if(ch2 == "4")
			{
				system("cls");
				f1.get_feeback();
				goto menu;
			}
			else if(ch2 == "5")
			{
				system("cls");
				f1.show_feedback();
				goto menu;
			}
            else if(ch2 == "6")
    		{
    			goto mainmenu;
			}
			else
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
    			//cout << endl;
    			cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
				goto menu;
			}
	}	


	else if(ch1 == "2")
	{
		schedule:
		t1.show_time();
		cout << "\n\n\t\t\t\t\t\t\t\t<1> Reset Schedule" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<2> Go back" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t---------------------------------------------" << endl << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your choise:     ";
		cin >> ch6;
		if(ch6 == "1")
		{
			t1.get_time();
			goto mainmenu;
		}
		else if(ch6 == "2")
		{
			goto mainmenu;
		}
		else
		{
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
    		cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
			getch();
			goto schedule;
		}
	}

	else if(ch1 == "3")
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\t\t\t\t   ----------------------------------------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t\t   The most important thing to note while running this software is that first of all enter into main menu   " << endl;
		cout << "\t\t\t\t   and start with entering the members and than afterwards you can register the employes. This is a data    " << endl;
		cout << "\t\t\t\t   recording system in which you can easily record data of members and employes also if you enter into the  " << endl;
		cout << "\t\t\t\t   monetary database where you can also record the fee received from the members and calculate all the fee  " << endl;
		cout << "\t\t\t\t   received. This system also allows you to record the pay schedle of the employes that to which employe you" << endl;
		cout << "\t\t\t\t   have made the payment and which are left. At the end it also shows you that how much you have received   " << endl;
		cout << "\t\t\t\t   income from the members and how much you have paid. Than it shows the message that either you are in     " << endl;
		cout << "\t\t\t\t   Profit or Loss" << endl << endl;
		cout << "\t\t\t\t   ----------------------------------------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t\t   Press any key to choose another option...";
		getch();
		goto mainmenu;
	}

 	else if(ch1 == "4")
 	{
 	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout<<"\t\t\t\t\t@@|                                THANK YOU FOR USING                                    |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                               GYM MANAGEMENT SYSTEM                                   |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
	cout<<"\t\t\t\t\t@@|                                                 Muhammad Ahmad Saleem                 |@@\n";
	cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
	cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
 	}
 	
else
{
	system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
    //cout << endl;
    cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
	getch();
    goto mainmenu;
}
return 0;
}
//A small attempt by Ahmad Saleem, don't forget to subscribe
