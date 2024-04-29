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
int main()
{
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


}