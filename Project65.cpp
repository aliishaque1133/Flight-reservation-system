#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int glob=0; 
int global=10;

class d_booking 
{
protected:
    int pnr;
    char f_d[10],toja[7],tojd[7]; 
    long int doj;
    int choice,src,dest;
public:
    void d_pnr()
    {
        glob++; 
        pnr=glob;
    }
    int j_detail() 
    {
        cout << "\nEnter DateOfJourney(DDMMYY)." << "Please enter a valid date." <<  endl;
        cin >> doj;
			cout << "\1.Islamabad(1) \t\2.Lahore(2) \t\3.Karachi(3) \t\4.Skardu(4)" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> src;
        cout << "\tEnter destination" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.AirSail)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "\2.Air Blue)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "\3.PIA(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.AirSial)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "\2.Air Blue(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "\3.PIA(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

        else if((src==1 && dest==4) || (src==4 && dest==1))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.AirSail)\t08:00\t\t11:05\t\tRs.4000\t\tRefundable\n";
            cout << "\2.Air Blue(2)\t14:00\t\t17:05\t\tRs.4250\t\tRefundable\n";
            cout << "\3.PIA(3)\t19:00\t\t22:05\t\tRs.6100\t\tRefundable\n";
        }

        else if((src==2 && dest==3) || (src==3 && dest==2))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.AirSial)\t08:00\t\t11:05\t\tRs.5400\t\tRefundable\n";
            cout << "\2.AirBlue(2)\t14:00\t\t17:05\t\tRs.2500\t\tRefundable\n";
            cout << "\3.PIA(3)\t19:00\t\t22:05\t\tRs.2890\t\tRefundable\n";
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.AirSial(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "\2.Air Blue(2)\t14:00\t\t17:05\t\tRs.4500\t\tRefundable\n";
            cout << "\3.PIA(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))
         {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.AirSial(1)\t08:00\t\t11:05\t\tRs.5800\t\tRefundable\n";
            cout << "\2.Air Blue(2)\t14:00\t\t17:05\t\tRs.5508\t\tRefundable\n";
            cout << "\3.PIA(3)\t19:00\t\t22:05\t\tRs.6050\t\tRefundable\n";
        }
        else if(src==dest)
        {
            cout << "\nSource and destination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }

    }

    int  select_flight() 
    {   cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice) 
		{
          case 1:
                cout << "\nFlight selected:"<<endl;
                cout << "AirSial"<<endl;
                strcpy(f_d,"AirSial");
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00");
                strcpy(toja,"11:05");
                break;
          case 2:
                cout << "\nFlight selected:"<<endl;
                cout << "Air Blue"<<endl;
                strcpy(f_d,"Air Blue");
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");
                strcpy(toja,"17:05");
                break;
          case 3:
                cout << "\nFlight selected:" << endl;
                cout << "Go Air" << endl;
                strcpy(f_d,"Go Air");
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");
                strcpy(toja,"22:05");
                break;
          default:
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();
        }
    }
};

class i_booking
{
protected:
    int pnri;
    char f_i[10],tojai[7],tojdi[7];
    long int doji;
    int srci,desti,choicei;
public:
    void i_pnr()
    {
        global++;
        pnri=global;
    }
    
    int j_detaili()
    {
        cout << "Enter DateOfJourney(DDMMYY)." << "Please enter a valid date." << endl;;
        cin >> doji;
        cout << "\1.London(1) \2.Dubai(2) \3.Abu Dhabi(3) \4.Singapore(4) \5.NewYork(5) " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> srci;
        cout << "\nEnter destination" ;
        cin >> desti;
        cout << "\t \t \tFlights Found" << endl << endl;

        if((srci==1 && desti==3) || (srci==3 && desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.24000\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.25500\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.21300\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.24650\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.52500\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.59420\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.64892\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.17800\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.14900\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.18700\tRefundable\n";
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.32000\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.38500\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs41259\tRefundable\n";        }

        else if(srci==2 && desti==5 || (srci==5 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.82500\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.87550\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs81478\tRefundable\n";

        }
        else if(srci==desti)
        {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            return j_detaili();
        }
        else
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
        }

    }

    int select_flighti()
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)
        {
        case 1:
            cout << "\nFlight selected:" <<endl;
            cout << "Vistara" << endl;
            strcpy(f_i,"Vistara");
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");
            strcpy(tojai,"14:05");
            break;
        case 2:
               cout << "\nFlight selected:" << endl;
               cout << "Fly Dubai" << endl;
               strcpy(f_i,"Fly Dubai");
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");
                strcpy(tojai,"18:05");
                break;
        case 3:
            cout << "\nFlight selected:" << endl;
            cout << "Emirates" << endl;
            strcpy(f_i,"Emirates");
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");
            strcpy(tojai,"22:05");
            break;
        default:
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }
};


class passenger: public d_booking,public i_booking
{
protected:
    char f_name[20],l_name[20],email[50];
    int age,gender;
    long int c_no;
public:
    void p_detail(int x)
    {   if(x==1)
        { j_detail();
          select_flight();
        }
          else
          {  j_detaili();
             select_flighti();
          }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> f_name;
        cout << "Last Name:";
        cin >> l_name;
    }
    int gender_check()
    {
        cout << "\nGender:\nMale-press:1::\nFemale-press:2::";
        cin >> gender;
        if(gender>2)
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();
        }
    }
       void more_details()
       {
        cout << "Age:";
        cin >> age;
        cout << "Email Id:";
        cin >> email;
        cout << "Contact no.(6 digits):";
        cin >> c_no;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;      
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c_no << endl;
    }


     int getpnr()
        {
            return pnr;
        }

     int getpnri()
     {
         return pnri;
     }

     void disp()
     {
         cout<<"PNR:" << pnr << endl;
         cout<<"Flight:" << f_d << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doj << endl;
         cout<<"Departure Time:" << tojd << endl;
         cout<<"Arrival Time:" << toja;
     }

      void dispi()
     {
         cout<<"PNR:" << pnri << endl;
         cout<<"Flight:" << f_i << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doji << endl;
         cout<<"Departure Time:" << tojdi << endl;
         cout<<"Arrival Time:" << tojai;
     }
};



class payment
{
protected:
    long
    int choice1,bank,card,date,cvv,user_id;
    char password[10];
public:
    void pay_detail()
    {     cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n\1.Debit Card(1) \n\2.Credit Card(2) \n\3.Net Banking(3)";
        cout << "\n\nEnter your choice";
        cin >> choice1;
        switch(choice1)
        {
        case 1:
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2:
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3:
            cout << "Banks Available: \1.West Pac Bank(1) \2.Nabil Bank(2) \3.Standard Chartered Bank(3) \4.AMP Bank(4) \5.Others(5)";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default:
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }

};

void createfile(passenger p)
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
}

void cancelticket(int x)
{  passenger p;
    int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);
   ofstream fin("domestic1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnr()!=x)
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.disp();
         cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded: Rs 1000\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"Ticket not found\n";
   fout.close();
   fin.close();
   remove("domestic.txt");
   rename("domestic1.txt","domestic.txt");
}

void checkticket(int x)
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnr()==x)
     {p.disp();
      cout<<"\nYour ticket"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close();
   if(f==0)
   cout<<"Ticket not found"<<endl;

}
void createfilei(passenger p)
{  ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}
void cancelticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);
   ofstream fin("international1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnri()!=x)
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.dispi();
         cout<<"Your Above ticket is being deleted:\n"<<"Amount refunded: Rs 1000\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"\nTicket not found\n";
   fout.close();
   fin.close();
   remove("international.txt");
   rename("international1.txt","international.txt");
}
void checkticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnri()==x)
     {p.dispi();
      cout<<"\nYour ticket"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close();
   if(f==0)
   cout<<"Ticket not found"<<endl;

}




int main()
{

    class d_booking d1;
    class i_booking i1;
    class passenger p1;
    class payment p2;
    int ch,ch1,n;
    char input;
    do
    {
    	system("CLS");
    cout << "\n\n \t\tWelcome To Flight Reservation System" << endl << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>\n";
    cout << "\t   Book your Flight tickets at affordable prices!" << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>";
    
    cout << "\n\n\t\t\t\1.Book Flight(1) \n\t\t\t\2.Cancel Fight(2) \n\t\t\t\3.Check Ticket(3) \n\t\t\t\4.Exit(4)" << endl;
    cout << "\n\t\t Please enter your choice:";
    cin >> ch;
      switch(ch)
      {
          case 1:
          system("CLS");
              cout << "\n\n\1.Domestic Fights(1) \n\2.International Flights(2)" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> ch1;
              switch(ch1)
              {
                   case 1:
                        p1.d_pnr();
                        p1.p_detail(1);
                        p1.gender_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        createfile(p1);
                        break;
                   case 2: 
                           p1.p_detail(2);
                           p1.i_pnr();
                           p1.gender_check();
                           p1.more_details();
                           p2.pay_detail();
                           p1.dispi();
                           createfilei(p1);
                           break;
                   default:
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:
              
              system("CLS");
              cout << "\1.Domestic Fights(1) \n\2.International Flights(2)" << endl;
                 cout << "\nPlease enter your option" << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "Please enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);
                }
                 else if(ch1==2)
               {  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  cancelticketi(n);
               }
               else
               {
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
          case 3:
          system("CLS");
                  cout << "\1.Domestic Fights(1) \n\2.International Flights(2)" << endl;
                  cout << "\nPlease enter your option" << endl;
                  cin >> ch1;
                  if(ch1==1)
                  {cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);}
                  else if(ch1==2)
                  {  cout << "Please enter your PNR no.:" << endl;
                     cin>>n;
                     checkticketi(n);
                  }
                   else
               {
                   cout << "Wrong input entered.\nTry again\n\n\n";
                   return main();
               }
               break;
            case 4:
			system("CLS");
			
			return 0; 
          default:
            cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
            return main();
      }
    cout<<"\n\n\nDo you wish to continue:(y/Y)" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');
return 0;
}



