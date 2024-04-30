#include <iostream>
#include <string>
#include<cmath>
using namespace std;

////////////// AIRPORT DATABASE SYSTEM ///////////////
/*struct Airport
{
    string name;       //pppp
    string city;       //cairo
    string country;    //egypt
    string IATA;

};

struct Flight
{
    int flight_number;     //897A
    string departure_airport;   //cairo
    string arrival_airport;    //london
};

struct Passenger
{
    string first_name;      //arwa
    string last_name;       //ahmed
    string Email;

    int passport_number;    //85928
    int flight_number;     //988r

    //string departure_airport;   
    //string arrival_airport;
};

struct Passenger_ticket
{
    string name;
    string passport_number;
    string flight_number;
    string departure_airport;
    string arrival_airport;
    string departure_time;
    string arrival_time;
    string departure_date;
    string arrival_date;
    string price;
    string seat_number;
    string gate_number;
    string baggage_number;
};

//struct Flight_ticket
int main()
{
    Airport passenger;
    passenger.name="ppppp";
    passenger.city="cairo";
    passenger.IATA="ppp";
    passenger.country="egypt";
    cout<<passenger.name<<endl;
    cout<<passenger.city<<endl;
    cout<<passenger.IATA<<endl;
    cout<<passenger.country<<endl;
}
*/
/*void MAIN_FUNCTION();
void add_flight();
void add_passenger();
class passengers
{
public:
    string name;
    int passport_number;
    int flight_number;
    int seat_number;
    string nationlity;
    passengers(string name,int passport_number, int flight_number,int seat_number,string nationlity)
    {
        this -> name=name;
        this -> passport_number=passport_number;
        this -> flight_number=flight_number;
        this -> seat_number=seat_number;
        this -> nationlity=nationlity;
    }
    void show(int j)
    {
        cout<<" -----------  passenger information ------------";
        cout<<"Name "<<j+1<<" : "<<name<<endl;
        cout<<"Passport Number "<<j+1<<" : "<<passport_number<<endl;
        cout<<"Flight Number "<<j+1<<" : "<<flight_number<<endl;
        cout<<"Seat Number "<<j+1<<" : "<<seat_number<<endl;
        cout<<"Nationlity "<<j+1<<" : "<<nationlity<<endl;
    }   
};
class Flights
{
public:
    int number;
    string destination_country;
    string departure_country;
    string date;
    
    Flights(int number,string destination_country,string departure_country,string date)
    {
        this -> number=number;
        this -> destination_country=destination_country;
        this -> departure_country=departure_country;
        this -> date=date;
    }
    void show(int j)
    {
        cout<<" ----------- flight information ------------";
        cout<<"Number "<<j+1<<" : "<<number<<endl;
        cout<<"Destination Country "<<j+1<<" : "<<destination_country<<endl;
        cout<<"Departure Country "<<j+1<<" : "<<departure_country<<endl;
        cout<<"Date "<<j+1<<" : "<<date<<endl;
    }   
};
struct airport
{
    string name;       //pppp
    string city;       //cairo
    string country;    //egypt
    int no_of_per_day;
    int no_of_per_week;
};
struct meals
{
    string type;
    int price;
    int time;
};
int main()
{
    airport A1,A2,A3;
    A1.name="SPX";
    A1.city="Cairo";
    A1.country="Egypt";
    A1.no_of_per_day=10;
    A1.no_of_per_week=70;
    
    // second one
    A2.name="LXR";
    A2.city="Luxor";
    A2.country="Egypt";
    A2.no_of_per_day=5;
    A2.no_of_per_week=35;

    //third one
    A3.name="HRG";
    A3.city="Hurgada";
    A3.country="Egypt";
    A3.no_of_per_day=7;
    A3.no_of_per_week=49;

    meals M1,M2,M3;

    //FIRST ONE
    M1.type="breakfast";
    M1.price=10;
    M1.time=7;

    //SECOND ONE
    M2.type="Lanch";
    M2.price=20;
    M2.time=3;

    //THIRD ONE
    M3.type="dinner";
    M3.price=30;
    M3.time=9;

    cout<<"Here are our airports : "<<endl;
        cout<<"--------------------------------------------------------"<<endl;
        cout<<A1.name<<" "<<A1.city<<" "<<A1.country<<" "<<A1.no_of_per_day<<" "<<A1.no_of_per_week<<endl;
        cout<<A2.name<<" "<<A2.city<<" "<<A2.country<<" "<<A2.no_of_per_day<<" "<<A2.no_of_per_week<<endl;
        cout<<A3.name<<" "<<A3.city<<" "<<A3.country<<" "<<A3.no_of_per_day<<" "<<A3.no_of_per_week<<endl;
        
    cout<<"Here are some details about our airports : "<<endl;
        cout<<A1.name<<" services "<<M1.type<<" "<<"At time "<<M1.time<<" "<<"with price "<<M1.price<<"EGP"<<endl;
        cout<<A1.name<<" services "<<M2.type<<" "<<"At time "<<M2.time<<" "<<"with price "<<M2.price<<"EGP"<<endl;
        cout<<A1.name<<" services "<<M3.type<<" "<<"At time "<<M3.time<<" "<<"with price "<<M3.price<<"EGP"<<endl;
    MAIN_FUNCTION();
}

void MAIN_FUNCTION()
{
    int choice;
    do{
    cout<<"----------------- system options --------------------"<<endl;
    cout<<"1. add passenger"<<endl;
    cout<<"2. add flight"<<endl;
    cout<<"3. exit"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    cout<<"-----------------------"<<endl;

    switch(choice)
    {
        case 1:
            add_passenger();
            break;
        case 2:
            add_flight();
            break;
        case 3:
            break;
        default:
            cout<<"invalid choice"<<endl;
            MAIN_FUNCTION();
            
    }
    } while(choice!=3);
}

void add_passenger()
{
    string names[100];
    int passport_numbers[100];
    int flight_numbers[100];
    int seat_numbers[100];
    string nationlities[100];
    int passengernum;
    cout<<"-----------------------"<<endl;
    cout<<"Enter the number of passengers  : ";
    cin>>passengernum;
    cout<<"-----------------------"<<endl;
    for(int i=0;i<passengernum;i++)
    {
        cout<<"Enter name "<<i+1<<" : "<<endl;
        cin>>names[i];
        cout<<"Enter passport number "<<i+1<<" : "<<endl;
        cin>>passport_numbers[i];
        cout<<"Enter flight number "<<i+1<<" : "<<endl;
        cin>>flight_numbers[i];
        cout<<"Enter seat number "<<i+1<<" : "<<endl;
        cin>>seat_numbers[i];
        cout<<"Enter nationlity "<<i+1<<" : "<<endl;
        cin>>nationlities[i];
        cout<<"-----------------------"<<endl;
    }
    
    for(int j=0;j<passengernum;j++)
    {
        passengers passenger(names[j],passport_numbers[j],flight_numbers[j],seat_numbers[j],nationlities[j]);
        passenger.show(j);
    }
}

void add_flight()
{
    int numbers[100];
    string destination_countries[100];
    string departure_countries[100];
    string dates[100];
    int flightnum;
    cout<<"-----------------------"<<endl;
    cout<<"Enter the number of flights  : "<<endl;
    cin>>flightnum;
    cout<<"-----------------------"<<endl;
    for(int i=0;i<flightnum;i++)
    {
        cout<<"Enter number "<<i+1<<" : "<<endl;
        cin>>numbers[i];
        cout<<"Enter destination country "<<i+1<<" : "<<endl;
        cin>>destination_countries[i];
        cout<<"Enter departure country "<<i+1<<" : "<<endl;
        cin>>departure_countries[i];
        cout<<"Enter date "<<i+1<<" : "<<endl;
        cin>>dates[i];
        cout<<"-----------------------"<<endl;
    }
    for(int j=0;j<flightnum;j++)
    {
        Flights flight(numbers[j],destination_countries[j],departure_countries[j],dates[j]);
        flight.show(j);
    }
}*/
void MAIN_FUNCTION();
void add_flight();
void add_passenger();
class passengers
{
public:
    string name;
    int passport_number;
    int flight_number;
    int seat_number;
    string nationlity;
    passengers(string name,int passport_number, int flight_number,int seat_number,string nationlity)
    {
        this -> name=name;
        this -> passport_number=passport_number;
        this -> flight_number=flight_number;
        this -> seat_number=seat_number;
        this -> nationlity=nationlity;
    }
    void show(int j)
    {
        cout<<" -----------  passenger "<<j+1<<" information ------------";
        cout<<"Name "<<j+1<<" : "<<name<<endl;
        cout<<"Passport Number "<<j+1<<" : "<<passport_number<<endl;
        cout<<"Flight Number "<<j+1<<" : "<<flight_number<<endl;
        cout<<"Seat Number "<<j+1<<" : "<<seat_number<<endl;
        cout<<"Nationlity "<<j+1<<" : "<<nationlity<<endl;
    }
};
class Flights
{
public:
    int number;
    string destination_country;
    string departure_country;
    string date;

    Flights(int number,string destination_country,string departure_country,string date)
    {
        this -> number=number;
        this -> destination_country=destination_country;
        this -> departure_country=departure_country;
        this -> date=date;
    }
    void show(int j)
    {
        cout<<" ----------- flight "<<j+1<<" information ------------"<<endl;
        cout<<"flight Number "<<j+1<<" : "<<number<<endl;
        cout<<"Destination Country "<<j+1<<" : "<<destination_country<<endl;
        cout<<"Departure Country "<<j+1<<" : "<<departure_country<<endl;
        cout<<"Date "<<j+1<<" : "<<date<<endl;
    }
};
struct airport
{
    string name;       //pppp
    string city;       //cairo
    string country;    //egypt
    int no_of_per_day;
    int no_of_per_week;
};
struct meals
{
    string type;
    int price;
    int time;
};
int main()
{
    airport A1,A2,A3;
    A1.name="SPX";
    A1.city="Cairo";
    A1.country="Egypt";
    A1.no_of_per_day=10;
    A1.no_of_per_week=70;

    // second one
    A2.name="LXR";
    A2.city="Luxor";
    A2.country="Egypt";
    A2.no_of_per_day=5;
    A2.no_of_per_week=35;

    //third one
    A3.name="HRG";
    A3.city="Hurgada";
    A3.country="Egypt";
    A3.no_of_per_day=7;
    A3.no_of_per_week=49;

    meals M1,M2,M3;

    //FIRST ONE
    M1.type="breakfast";
    M1.price=10;
    M1.time=7;

    //SECOND ONE
    M2.type="Lanch";
    M2.price=20;
    M2.time=3;

    //THIRD ONE
    M3.type="dinner";
    M3.price=30;
    M3.time=9;

        cout<<"Welcome MR/MRS . we are here to help you choose a suitable airport and Here are our options : "<<endl;
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"Name of airport : "<<A1.name<<endl<<"City : "<<A1.city<<endl<<"Country : "<<A1.country<<endl<<"Number of flights per day : "<<A1.no_of_per_day<<endl<<"Number of flights per week : "<<A1.no_of_per_week<<endl;
        cout<<"********************************************************"<<endl;
        cout<<"Name of airport : "<<A2.name<<endl<<"City : "<<A2.city<<endl<<"Country : "<<A2.country<<endl<<"Number of flights per day : "<<A2.no_of_per_day<<endl<<"Number of flights per week : "<<A2.no_of_per_week<<endl;
         cout<<"********************************************************"<<endl;
        cout<<"Name of airport : "<<A3.name<<endl<<"City : "<<A3.city<<endl<<"Country : "<<A3.country<<endl<<"Number of flights per day : "<<A3.no_of_per_day<<endl<<"Number of flights per week : "<<A3.no_of_per_week<<endl;

        cout<<"--------------------------------------------------------"<<endl;
        cout<<"Here are some details about airports : "<<endl;
        cout<<"--------------------------------------------------------"<<endl;
        cout<<"Airport "<<A1.name<<" services "<<M1.type<<" "<<"At time "<<M1.time<<" "<<"with price "<<M3.price<<"EGP"<<endl;
        cout<<"Airport "<<A1.name<<" services "<<M2.type<<" "<<"At time "<<M2.time<<" "<<"with price "<<M2.price<<"EGP"<<endl;
        cout<<"Airport "<<A1.name<<" services "<<M3.type<<" "<<"At time "<<M3.time<<" "<<"with price "<<M1.price<<"EGP"<<endl;
        cout<<"********************************************************"<<endl;
        cout<<"Airport "<<A2.name<<" services "<<M1.type<<" "<<"At time "<<M1.time<<" "<<"with price "<<M2.price<<"EGP"<<endl;
        cout<<"Airport "<<A2.name<<" services "<<M2.type<<" "<<"At time "<<M2.time<<" "<<"with price "<<M3.price<<"EGP"<<endl;
        cout<<"Airport "<<A2.name<<" services "<<M3.type<<" "<<"At time "<<M3.time<<" "<<"with price "<<M1.price<<"EGP"<<endl;
        cout<<"********************************************************"<<endl;
        cout<<"Airport "<<A3.name<<" services "<<M1.type<<" "<<"At time "<<M1.time<<" "<<"with price "<<M1.price<<"EGP"<<endl;
        cout<<"Airport "<<A3.name<<" services "<<M2.type<<" "<<"At time "<<M2.time<<" "<<"with price "<<M2.price<<"EGP"<<endl;
        cout<<"Airport "<<A3.name<<" services "<<M3.type<<" "<<"At time "<<M3.time<<" "<<"with price "<<M3.price<<"EGP"<<endl;
        cout<<"********************************************************"<<endl;
    MAIN_FUNCTION();
}

void MAIN_FUNCTION()
{
    int choice;
    do{
    cout<<"----------------- system options --------------------"<<endl;
    cout<<"1. add passenger"<<endl;
    cout<<"2. add flight"<<endl;
    cout<<"3. exit"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    cout<<"-----------------------"<<endl;

    switch(choice)
    {
        case 1:
            add_passenger();
            break;
        case 2:
            add_flight();
            break;
        case 3:
            break;
        default:
            cout<<"invalid choice"<<endl;
            MAIN_FUNCTION();

    }
    } while(choice!=3);
}

void add_passenger()
{
    string names[100];
    int passport_numbers[100];
    int flight_numbers[100];
    int seat_numbers[100];
    string nationlities[100];
    int passengernum;
    cout<<"-----------------------"<<endl;
    cout<<"Enter the number of passengers  : ";
    cin>>passengernum;
    cout<<"-----------------------"<<endl;
    for(int i=0;i<passengernum;i++)
    {
        cout<<"Enter the passenger's name "<<i+1<<" : ";
        cin>>names[i];
        cout<<"Enter passport number of passenger "<<i+1<<" : ";
        cin>>passport_numbers[i];
        cout<<"Enter flight number of passenger "<<i+1<<" : ";
        cin>>flight_numbers[i];
        cout<<"Enter seat number of passenger "<<i+1<<" : ";
        cin>>seat_numbers[i];
        cout<<"Enter nationlity of passenger "<<i+1<<" : ";
        cin>>nationlities[i];
        cout<<"-----------------------"<<endl;
    }

    for(int j=0;j<passengernum;j++)
    {
        passengers passenger(names[j],passport_numbers[j],flight_numbers[j],seat_numbers[j],nationlities[j]);
        passenger.show(j);
    }
}

void add_flight()
{
    int numbers[100];
    string destination_countries[100];
    string departure_countries[100];
    string dates[100];
    int flightnum;
    cout<<"-----------------------"<<endl;
    cout<<"Enter the number of flights  : ";
    cin>>flightnum;
    cout<<"-----------------------"<<endl;
    for(int i=0;i<flightnum;i++)
    {
        cout<<"Enter code of flight's number "<<i+1<<" : ";
        cin>>numbers[i];
        cout<<"Enter the destination country of flight number "<<i+1<<" : ";
        cin>>destination_countries[i];
        cout<<"Enter the  departure country of flight number "<<i+1<<" : ";
        cin>>departure_countries[i];
        cout<<"Enter the date of flight number  "<<i+1<<" : ";
        cin>>dates[i];
        cout<<"-----------------------"<<endl;
    }
    for(int j=0;j<flightnum;j++)
    {
        Flights flight(numbers[j],destination_countries[j],departure_countries[j],dates[j]);
        flight.show(j);
    }
}