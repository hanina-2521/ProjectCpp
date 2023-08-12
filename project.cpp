#include<bits/stdc++.h>
using namespace std;
ofstream output;
string s1="Bangladeshi";
enum {sz=10000};

////Use of Class////
class pay
{

private:

    int payment;

public:

////Use of Constructor///
    pay () : payment(0)
    {

    }
    void getpayment()
    {

        cin>>payment;

    }

    void putpayment()
    {

        cout<<payment<<endl;

    }
    int operator + (int);

};
int pay:: operator + (int payed)
{
    int tem;
    tem=payment+payed;
    return tem;
}

class Id
{

private:

/////Use of String/////
    string name;

    string nationality;

    string idnumber;

public:
    Id() : name("\0"),nationality("Bangladeshi"),idnumber("cos0000")
    {

    }
    void getname()
    {

        cin>>name;

    }

    void putname()
    {

        cout<<name<<endl;

    }

    void getnationality()
    {

        cin>>nationality;
    }

    void putnationality()
    {
        cout<<nationality<<endl;
    }
    void getidnumber()
    {
        cin>>idnumber;
    }

    void putidnumber()
    {
        cout<<idnumber<<endl;
    }

/////Use of Operator Overloading////
    bool operator ==(string);

};
bool Id::operator ==(string s1)
{
    if (nationality.compare(s1) != 0)
        return false;

    else
        return true;

}


class contact
{
private:

    string email;

    long long phone;

public:
    contact(): email("abc@gmail.com"),phone(01000000000)
    {

    }
    void getemail()
    {
        cin>>email;
    }

    void putemail()
    {
        cout<<email<<endl;
    }
    void getphone()
    {
        cin>>phone;
    }

    void putphone()
    {
        cout<<phone<<endl;
    }
};
class gains
{

public:

///Use of Pure Virtual Funtion///

    virtual int getgain()=0;

    virtual void putgain()=0;
};

/////Use of Inheritance/////
class cosplay: public pay,public Id,public contact
{

private:

    string cosplay_character_name;

    int point;

public:


    void input_the_cosplayed_character()
    {
        cout<<"Cosplayed character: ";

        cin>>cosplay_character_name;
    }
    void output_the_cosplayed_character()
    {
        cout<<"Cosplayed character: ";

        cout<<cosplay_character_name<<endl;
    }

    void input_the_cosplayed_point()
    {

        cout<<"The point cosplayer get from cosplay: ";

        cin>>point;

    }
    int output_the_cosplayed_point()
    {

        cout<<"The point cosplayer get from cosplay: ";

        cout<<point<<endl;

        int tem;

        tem=point;

        return tem;
    }

};



class stall_owner:public Id,public gains,public contact
{
private:
    string stall_name;

    string stall_type;

    int gain;

public:


    void getstallname()
    {

        cout<<" Stall Name: ";

        cin>>stall_name;

    }
    void getstalltype()
    {
        cout<<" Stall Type: ";

        cin>>stall_type;
    }

    void putstallname()
    {
        cout<<"stall Name: ";

        cout<<stall_name<<endl;
    }

    void putstalltype()
    {
        cout<<"Stall Type: ";

        cout<<stall_type<<endl;
    }
    int getgain()
    {
        int tem;

        cin>>gain;

        tem=gain;

        return tem;

    }
    void putgain()
    {

        cout<<gain<<endl;

    }

};


class manga_artist:public Id,public contact
{
    int customer_number;

    int cost_of_art[1000];

public:

    void getcustomer_number()
    {

        cout<<"Number of Customer: ";

        cin>>customer_number;

    }
    void putcustomer_number()
    {

        cout<<"Number of Customer: ";

        cout<<customer_number<<endl;

    }

    int total_gain()
    {
        int total=0,i;

        for(i=1; i<=customer_number; i++)
        {

            cin>>cost_of_art[i];

            total+=cost_of_art[i];

        }

        return total;
    }
};


int main()
{
    int i,nc,nm,ns,j,k,tem,nv,payment1=0,gain1=0,sold_ticket,price_per_ticket,gain2=0,sponsor_number;
    int gain3=0,payed[1000],net_income,payment2=0;
    bool fgc[1000]= {0};
    string sponsor1,sponsor2,sponsor3;

    pair<int,int>p;

    ///Use of Vctor///
    vector<cosplay>cosplayer(sz);

    vector<stall_owner>stal(sz);

    vector<manga_artist>manga(sz);

    priority_queue<pair<int,int> >q;

    cout<<"                              ";

    cout<<"##########THE MANAGEMENT SYSTEM OF DHAKA COMICON###########"<<endl<<endl;

    cout<<"Name of the Sponsors :"<<endl;

    cin>>sponsor1>>sponsor2>>sponsor3;

    cout<<"Number of Ticket Sold: ";

    cin>>sold_ticket;

    cout<<"Price Per Ticket: ";

    cin>>price_per_ticket;

    cout<<"Decoration Cost: ";

    cin>>payment2;

        gain1=sold_ticket*price_per_ticket;
    // cout<<endl;

    cout<<"The number of  cosplayer :"<<endl;

    cin>>nc;

    cout<<"The number of Stall Owner :"<<endl;

    cin>>ns;

    cout<<"The number of Manga Artist :"<<endl;

    cin>>nm;

    cout<<"***Take Data of a Cosplayer***"<<endl<<endl;

    for(i=1; i<=nc; i++)
    {

        cout<<"Name: ";
        cosplayer[i].getname();

        cout<<"Nationality: ";
        cosplayer[i].getnationality();

        cout<<"Id Number: ";
        cosplayer[i].getidnumber();

        cout<<"E-mail Id: ";
        cosplayer[i].getemail();

        cout<<"Phone Number: ";
        cosplayer[i].getphone();

        cosplayer[i].input_the_cosplayed_character();

        cosplayer[i].input_the_cosplayed_point();

        if(cosplayer[i]==s1)
        {
            fgc[i]=1;
        }

        if(fgc[i]!=1)
        {

            cout<<"Payment: ";
            cosplayer[i].getpayment();
            payment1=cosplayer[i]+payment1;


        }

    }
    cout<<"***Take Data of Stall Owner***"<<endl<<endl;

    for(i=1; i<=ns; i++)
    {
        cout<<"owner's Name: ";
        stal[i].getname();

        cout<<"Id Number: ";
        stal[i].getidnumber();

        cout<<"E-mail Id: ";
        stal[i].getemail();

        cout<<"Phone Number: ";
        stal[i].getphone();

        cout<<"Gained Money: ";
        tem=stal[i].getgain();

        stal[i].getstallname();

        stal[i].getstalltype();

        gain2=gain2+tem;

    }
    cout<<"***Take Data of Manga Artist***"<<endl<<endl;

    for(i=1; i<=nm; i++)
    {
        cout<<"Name: ";
        manga[i].getname();

        cout<<"Nationality: ";
        manga[i].getnationality();

        cout<<"Id Number: ";
        manga[i].getidnumber();

        cout<<"E-mail Id: ";
        manga[i].getemail();

        cout<<"Phone Number: ";
        manga[i].getphone();

        manga[i].getcustomer_number();

        tem=manga[i].total_gain();

        payed[i]=tem/2;

        gain3+=(tem-payed[i]);

    }

    cout<<"***Display Data of a Cosplayer***"<<endl<<endl;

    for(i=1; i<=nc; i++)
    {
        cout<<"Name: ";
        cosplayer[i].putname();

        cout<<"Nationality: ";
        cosplayer[i].putnationality();

        cout<<"Id Number: ";
        cosplayer[i].putidnumber();

        cout<<"E-mail Id: ";
        cosplayer[i].putemail();

        cout<<"Phone Number: ";
        cosplayer[i].putphone();

        tem= cosplayer[i].output_the_cosplayed_point();
        p.first=tem;
        p.second=i;
        q.push(p);
        if(fgc[i]!=1)
        {

            cout<<"Payment: ";
            cosplayer[i].putpayment();

        }
        else
        {
            cout<<"Will not payed"<<endl;
        }

    }
    cout<<endl;

    cout<<"***Display Data of Stall***"<<endl<<endl;
    for(i=1; i<=ns; i++)
    {
        cout<<"owner's Name: ";
        stal[i].putname();

        cout<<"Id Number: ";
        stal[i].putidnumber();

        cout<<"E-mail Id: ";
        stal[i].putemail();

        cout<<"Phone Number: ";
        stal[i].putphone();

        cout<<"Gained Money: ";
        stal[i].putgain();

        stal[i].putstallname();

        stal[i].putstalltype();
    }
    cout<<endl;

    cout<<"***Display Data of Manga Artist***"<<endl<<endl;
    for(i=1; i<=nm; i++)
    {

        cout<<"Name: ";
        manga[i].getname();

        cout<<"Nationality: ";
        manga[i].getnationality();

        cout<<"Id Number: ";
        manga[i].getidnumber();

        cout<<"E-mail Id: ";
        manga[i].getemail();

        cout<<"Phone Number: ";
        manga[i].getphone();

        cout<<"Payment: ";
        cout<<payed[i]<<endl;


    }

    net_income=gain1+gain2+gain3-payment1-payment2;

    cout<<"The Champion of the Cosplay Contest: ";
    p = q.top();
    q.pop();
    tem =p.second;
    cosplayer[tem].putname();
    cosplayer[tem].putidnumber();

    while(p==q.top()&&q.size()!=0)
    {
        p=q.top();
        q.pop();
        tem=p.second;
        cosplayer[tem].putname();
        cosplayer[tem].putidnumber();
    }
    cout<<endl;
    cout<<"Profit from the Comicon: "<<net_income<<endl;

    return 0;
}
