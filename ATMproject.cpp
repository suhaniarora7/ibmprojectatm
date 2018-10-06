#include<iostream>

#include<cstdio>

#include<conio.h>

#include<string>

using namespace std;


int ch;                                  // for input

int password;                            //entered by user

int cardNo;     

                          

int counterA1=0;                         //counter to count no. of attempts A has made

int counterA2=3;                         //counter to tell user how much attempts A is left with


int counterB1=0;                         //counter to count no. of attempts B has made

int counterB2=3;                         //counter to tell user how much attempts B is left with


int cashA=1234;                          //for

int cash1;                               //user

string password1="4321";                      //first 

int cardA=1234;                             //card no. of user A


int cashB=5678;                           //for

int cash2;                                // user

string password2="8765";                       // second

int cardB=5678;                           //card no. of user B


string password3="1111";                       //password of ADMIN

int cardC=0000;                               //card no. of admin


string s="xxxx";                         //to store card number



void delay(void)                             // function made to delay  

{ for(int i=0;i<10000;i++)                   // to thank user before

for(int j=0;j<100000;j++)                    // he/she  exit ATM 

 {

  }

}



// The basic first page 


int main(int argc,char** argv)                        

      {   

lbl1:    cout<<"\n\n \t\t\t\tWELCOME TO CBI !!"<<endl;

	     cout<<"\nPlease enter your card number :";

         cin>>cardNo;

		  

       	//For first user

	

	    if(cardNo==cardA)

lbl2: { cout<<"\n\nHello Rahul !"<<endl;

       cout<<"please enter your password :";

       

        s[0]=getch();

	    cout<<"x";

    	s[1]=getch();

	    cout<<"x";

        s[2]=getch();

    	cout<<"x";

	    s[3]=getch();

	    cout<<"x";

       

       if(s==password1  && counterA1<3)

          {cout<<"\n\nPLease select the option :"<<endl;

	       cout<<"1. Balance Check"<<"\t";

           cout<<"2. Cash withdrawal"<<endl;

   	       cout<<"3. EXIT"<<"\t\t\t";

   	       cout<<"4. Change Password"<<endl<<endl;;

   	       cin>>ch;

   	       if(ch==1)

   	       { if(cashA>0)

			  {cout<<"\nYour balance is Rs."<<cashA<<endl;

		       }

		      else

		      { cout<<"\nYour balance is Rs."<<0<<endl;

			   }

   	        }

           else if(ch==2)

	        {cout<<"Enter the amount of cash you want to withdraw :";

	         cin>>cash1;

	         if(cashA>=cash1)

	         { cout<<"\nPlease collect your cash !!";

	            cashA=cashA-cash1;

	           }

	          else

			  { cout<<"\n\nInsuffcient balance !!"<<endl;

			     }  

	         

		     }	

	      else if(ch==3)

	      {  cout<<"\n\n\nTHANKYOU FOR VISITING !!"<<endl;

		     cout<<"\nHAVE A NICE DAY :)"<<endl;

		     delay();

		     system("cls");

		     goto lbl1;

	       }

	       else if(ch==4)

	       {   cout<<"\n\nPlease enter new password :";

               s[0]=getch();

	           cout<<"x";

               s[1]=getch();

	           cout<<"x";

               s[2]=getch();

               cout<<"x";

	           s[3]=getch();

	           cout<<"x";

	           

	           password1=s;

		   }

		   

	      else

	       { cout<<"\nwrong input"<<endl;

	         goto lbl1;

	       }

	       cout<<"\n\nDo you want to visit your base page again ?"<<endl;

	       cout<<"1. YES"<<"\t";

	       cout<<"2. NO"<<endl;

	       cin>>ch;

	       if(ch==1)

	       {goto lbl2;

		   }

		   else

bye1:		   { cout<<"\n\n\nTHANKYOU FOR VISITING !!"<<endl;

		     cout<<"\nHAVE A NICE DAY :)"<<endl;

		     delay();

		     system("cls");

		     goto lbl1;

		   }

       }

       

       else if(counterA1>=2)

       {cout<<"\n\n---------------- YOUR CARD IS BLOCKED -----------------------"<<endl;

        goto bye1;

	   }

       

       else

	   {

       	cout<<"\n\nWRONG PASSWORD !!"<<endl;

       	cout<<"You have "<<--counterA2<<" chances left"<<endl;

       	counterA1++;

       	goto lbl2;

	   }

	}

     	

     	

     	//For second user

     	

     	

     	else if(cardNo==cardB)

lbl3:{ cout<<"\n\nHello ROHIT !"<<endl;

       cout<<"please enter your password :";

       

        s[0]=getch();

	    cout<<"x";

    	s[1]=getch();

	    cout<<"x";

        s[2]=getch();

    	cout<<"x";

	    s[3]=getch();

	    cout<<"x";

       

       if(s==password2 && counterB1<3)

       

        {  cout<<"\n\nPLease select the option :"<<endl;

	       cout<<"\n1. Balance Check"<<"\t";

           cout<<"2. Cash withdrawal"<<endl;

   	       cout<<"3. EXIT"<<"\t\t\t";

   	       cout<<"4. Change Password"<<endl;

   	       cin>>ch;

   	       if(ch==1)

   	        {

			  if(cashB>0)

			  {cout<<"\nYour balance is Rs."<<cashB<<endl;

		       }

		      else

		      { cout<<"\nYour balance is Rs."<<0<<endl;

			   }

			   

			}

           else if(ch==2)

	       {cout<<"Enter the amount of cash you want to withdraw :";

	        cin>>cash2;

	        if(cashB>=cash2)

	        {

			 cout<<"\nPlease collect your cash !!";

			 cashB=cashB-cash2;

	          }

			 else

			 {  cout<<"\n\nInsuffcient Balance !!"<<endl;

			  } 

			  

		     }	

	       else if(ch==3)

	       { 

bye2:	         cout<<"\n\n\nTHANKYOU FOR VISITING !!"<<endl;

		     cout<<"\nHAVE A NICE DAY :)"<<endl;

		     delay();

		     system("cls");

		     goto lbl1;

	        }

	        else if(ch==4)

	       {   cout<<"\n\nPlease enter new password :";

               s[0]=getch();

	           cout<<"x";

               s[1]=getch();

	           cout<<"x";

               s[2]=getch();

               cout<<"x";

	           s[3]=getch();

	           cout<<"x";

	           

	           password2=s;

		   }

			

	       else

	       {cout<<"wrong input"<<endl;

	       goto lbl1;

	        }

	       cout<<"\n\nDo you want to visit your base page again ?"<<endl;

	       cout<<"1. YES"<<"\t";

	       cout<<"2. NO"<<endl;

	       cin>>ch;

	       if(ch==1)

	       {goto lbl3;

		   }

		   else

		   { cout<<"\n\n\nTHANKYOU FOR VISITING !!"<<endl;

		     cout<<"\nHAVE A NICE DAY :)"<<endl;

		     delay();

		     system("cls");

		     goto lbl1;

		   }

         

		 }

	      

	      else if(counterB1>=2)

       {cout<<"\n\n---------------- YOUR CARD IS BLOCKED -----------------------"<<endl;

        goto bye2;

	   }

       

       else

	    {

         	cout<<"\n\nWRONG PASSWORD !!"<<endl;

       	    cout<<"You have "<<--counterB2<<" chances left"<<endl;

       	    counterB1++;

       	    goto lbl3;

	     }

	     

     	}

     	

     	

     	//For ADMIN

     	

     	    else if(cardNo==cardC)

lbl4:        {cout<<"\nHello ADMIN";

     	      cout<<"\nPlease enter your password :";

     	      

     	    s[0]=getch();

	        cout<<"x";

            s[1]=getch();

	        cout<<"x";

            s[2]=getch();

    	    cout<<"x";

	        s[3]=getch();

	        cout<<"x";

     	      

     	       if(s==password3)

     	       { cout<<"\nYou are in !!";

		          }

		       else

		       {  cout<<"\nYou entered wrong password";

		        goto lbl4;

		       }

     	  }

	

	

	//For any other wrong input

	

	else

	{   cout<<"\n\nWRONG INPUT !!!!";

    	goto lbl1;

	}

	

	return 0;

	 

}

