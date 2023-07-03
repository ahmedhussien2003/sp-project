#include <iostream>
#include<vector>
#include <string>
#include<fstream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

using namespace std;
using namespace sf;
int USER = 0;
int NUM = 0;
int passengerindex = 0;
struct PAGE1 {
    Sprite background;
    Sprite Block;
    Text get_started;
};
struct PAGE2 {
    Sprite background;
    Sprite Email;
    Sprite pass;
    Sprite login;
    Sprite logup;
    Text Login;
};
struct PAGE3 {
    Sprite background;
    Sprite Block1;
    Sprite Block2;
    Sprite Block3;
    Sprite Block4;
    Sprite Block5;
    Sprite Block6;
    Sprite Block7;
    Sprite Block8;
    Sprite Block9;
    Sprite Block10;
    Sprite box;
    Text signup;
    Text Fail;
};
struct PAGE4
{

    Sprite bg4;
    Sprite FlightSchedule;
    Sprite MyTrips;
    Sprite NewReservation;
    Sprite ProtocolsandContactInfo;
    Sprite Exit;
    Text FlightSchedulebutton;
    Text MyTripsbutton;
    Text NewReservationbutton;
    Text ProtocolsandContactInfobutton;
    Text Exitbutton;

};
struct PAGE5 {
    Sprite background;
    Sprite Block;
    Text back;
};
struct PAGE6
{
    Sprite bg6;
    Sprite beginbutton;
    Text beginButton;
};
struct PAGE7 {
    Sprite background;
    Sprite block[5];
    Sprite back_b;
    Text back_t;
    Text dep[5];
    Text arv[5];
    Text date[5];
    Text th1[5];
    Text th2[5];
    Text tm2[5];
    Text level[5];
    Text num[5];
    Text price[5];
};
struct PAGE8 {
    Sprite background;
    Sprite Block1;
    Sprite Block2;
    Sprite Block3;
    Sprite Block4;
    Text Back;
    Text Multicity;
    Text Oneway;
    Text Round;
};
struct PAGE9
{
    Sprite background;
    Sprite begin;
    Text Begin;
};
struct PAGE10
{
    Sprite background;
    Text Begin;
    Sprite Block;

};
struct PAGE11
{
    Sprite bg11;
    Sprite beginbutton;
    Text beginButton;
};
struct PAGE12 {
    Sprite background;
    Sprite button1;
    Text buttontext1;
    Sprite button2;
    Text buttontext2;
    Sprite button3;
    Text buttontext3;
    Sprite button4;
    Text buttontext4;
    Sprite day;
    Sprite month;
    Sprite year;
    Sprite From;
    Sprite To;
    Text Fail;
    Text from_country12;
    Text to_country12;

};
struct PAGE13
{
    Sprite background;
    Sprite from;
    Sprite to;
    Sprite day;
    Sprite mounth;
    Sprite year;
    Sprite day1;
    Sprite mounth1;
    Sprite year1;
    Sprite business;
    Text Business;
    Sprite economy;
    Text Economy;
    Sprite next;
    Text Next;
    Sprite back;
    Text Back;
    Text from_country13;
    Text to_country13;

};
struct PAGE14
{
    Sprite background;
    Sprite flightnumbox;
    Sprite frombox;
    Sprite tobox;
    Sprite daybox;
    Sprite monthbox;
    Sprite yearbox;
    Sprite ecoclass;
    Sprite busclass;
    Sprite next_b;
    Sprite back_b;
    Text next_t;
    Text back_t;
    Text eco;
    Text bus;
    Text from_country;
    Text to_country;
    Sprite block[5];
    Text contient[5];
};
struct PAGE15
{

    Sprite bg15;
    Sprite nextbutton;
    Sprite backbutton;
    Sprite inputbutton;
    Text nextButton;
    Text backButton;
    Text inputButton;
    Text fail;

};
struct PAGE16
{
    Sprite bg16;
    Sprite firstname;
    Sprite lastname;
    Sprite title;
    Sprite passportid;
    Sprite day;
    Sprite month;
    Sprite year;
    Sprite female;
    Sprite male;
    Sprite nextbutton;
    Sprite backbutton;
    Text femaleButton;
    Text maleButton;
    Text nextButton;
    Text backButton;
    Text fail;
};
struct PAGE17
{
    Sprite background;
    Sprite smapbusiness;
    Sprite seats_b[4][5];
    Sprite next;
    Text Next;
    Sprite fail;
    Text Fail;

    //error;

};
struct PAGE18
{
    Sprite background;
    Sprite smapeconomy;
    Sprite seats_e[4][15];
    Sprite next;
    Text Next;
    Sprite fail;
    Text Fail;
};
struct PAGE19
{
    Sprite background;
    Text Digital;
    Sprite Block1;
    Sprite Block2;
    Sprite Block3;
    Text cash;
    Text Back;

};
struct PAGE20
{
    Sprite background;
    Sprite Block1;
    Sprite Block2;
    Text Back;
    Text Pay;
    Sprite Block3;
    Sprite Block4;
    Sprite Block5;
    Text Fail;
};
struct PAGE21 {

    Sprite background;
    Sprite Block1;
    Text Add1;
    Sprite Block2;
    Text Add2;
    Sprite Block3;
    Text Back;
};
struct PAGE22
{
    Sprite background;
    Sprite done;
    Text DONE;
};
struct PAGE23
{
    Sprite background;
    Sprite block[10];
    Sprite back_b;
    Text back_t;
    Text num[10];
    Text flightnum[10];
    Text from[10];
    Text to[10];
    Text date[10];
    Text Class[10];
    Sprite edit[10];
};
struct PAGE24 {
    Sprite background;
    Sprite clas;
    Sprite seat;
    Sprite home;
    Sprite remove;
    Sprite cancle;
    Sprite back;
    Text Clas;
    Text Seat;
    Text Home;
    Text Remove;
    Text Cancle;
    Text Back;
};
struct PAGE25 {
    Sprite background;
    Sprite Block1;
    Text Next;
};
struct PAGE26
{

    Sprite background;
    Sprite block[7];
    Sprite back_b;
    Text back_t;
    Text num[7];
    Text flightnum[7];
    Text from[7];
    Text to[7];
    Text date[7];
    Text Class[7];
    Text name[7];
    Text passportid[7];
    Text seat[7];
    Sprite edit[7];
};
struct PAGE27 {
    Sprite background;
    Sprite button1;
    Text buttontext1;
    Sprite button2;
    Text buttontext2;
};
struct PAGE28
{
    Sprite background;
    Sprite next;
    Text Next;
};
struct PAGE29
{
    Sprite background;
    Sprite begin;
    Text Begin;
    Sprite exit;
    Text Exit;
};
struct PAGE30 {
    Sprite background;
    Sprite button1;
    Text buttontext1;
    Sprite button2;
    Text buttontext2;
    Sprite button3;
    Text buttontext3;
    Sprite button4;
    Text buttontext4;
};
struct PAGE31 {
    Sprite background;
    Sprite from;
    Sprite hou;
    Sprite min;
    Sprite num;
    Sprite to;
    Sprite price;
    Sprite depa;
    Sprite next;
    Sprite back;
    Text Next;
    Text Back;
    Text from_country31;
    Text to_country31;
};
struct PAGE32
{
    Sprite background;
    Sprite next;
    Text Next;
};
struct PAGE33
{
    Sprite background;
    Sprite block[100];
    Sprite back_b;
    Text back_t;
    Text dep[100];
    Text arv[100];
    Text date[100];
    Text th1[100];
    Text th2[100];
    Text tm2[100];
    Text level[100];
    Text num[100];
    Text price[100];
};
struct PAGE34 {
    Sprite background;
    Sprite Block1;
    Text Back;
    Text Price;
    Text Departure;
    Sprite Button1;
    Sprite Button2;
};
struct PAGE35
{
    Sprite background;
    Sprite sset;
    Sprite back;
    Text Back;
    Sprite next;
    Text Next;
};
struct PAGE36
{
    Sprite background;
    Sprite sdtime;
    Sprite back;
    Text Back;
    Sprite next;
    Text Next;
};
struct PAGE37 {
    Sprite background;
    Sprite button1;
    Text buttontext1;
};
struct PAGE38 {
    Sprite bg38;
    Sprite block[5];
    Sprite back_b;
    Text back_t;
};
//////////////
struct SPLIT12
{
    Sprite background;
    Sprite block[5];
    Text contient[5];
};
struct COUNTRY12
{
    Sprite background;
    Sprite block[4];
    Text countries[4];
};

struct SPLIT13
{
    Sprite background;
    Sprite block[5];
    Text contient[5];
};
struct COUNTRY13
{
    Sprite background;
    Sprite block[4];
    Text countries[4];
};

struct SPLIT
{
    Sprite background;
    Sprite block[5];
    Text contient[5];
};
struct COUNTRY
{
    Sprite background;
    Sprite block[4];
    Text countries[4];
};

struct SPLIT31
{
    Sprite background;
    Sprite block[5];
    Text contient[5];
};
struct COUNTRY31
{
    Sprite background;
    Sprite block[4];
    Text countries[4];
};

//////////////
struct Date
{
    int Day;
    int Month;
    int Year;
};
struct user {
    string email, password, confirmPass, firstName, lastName, surname, phoneNum, nationality, kind;
    Date data;
}user1{ "0","0","0","0","0","0","0","0","0" };
struct pass
{
    string first_name;
    string last_name;
    string title;
    string passport_id;
    string gender;
    string seats;
    Date birthdate;
}passenger1{ "0","0","0","0","0","0" };
struct Data
{
    string from;
    string to;
    int price;
    int th1;
    int th2;
    int tm2;
    int passengers_number;
    string flight_num;
    string level;
    string user;
    Date myDate{};
    vector<pass> passengers;
}flight1{ "0","0",0,0,0,0,0,"0","0","0" };
struct countries_offers
{
    string dep;
    string arv;
    int t_h;
    int t_m;
    int price;
};
struct countries_offers2 {
    string dep;
    string arv;
    string num;
    int th1;
    int th2;
    int tm2;
    int price;
    int seats;
    int duration;
};



RenderWindow window(VideoMode(1900, 1080), "DESTINYA", Style::Default);

RectangleShape MouseRect(Vector2f(10, 30));

Texture bg1, bg2, bg3, background4, bg5, background6, bg7, bg8, bg9, bg10, background11, bg12, bg13, bg14, background15, background16, bg17, bg18, bg19, bg20, bg21, bg22, bg23, bg24, bg25, bg26, bg27, bg28, bg29, bg30, bg31, bg32, bg33, bg34, bg35, bg36, bg37, bg38, inputbox, transbox, desbox, newoffersblock, tripsblock, passengersblock, block, add, edit, del, dep, price, seatsbg18;

Font f1, f2, f3, f4;

void textureAndFonts();
void drawpage1(PAGE1 page1);
void setpage1(PAGE1& page1, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page_2(PAGE2 page2);
void set_page_2(PAGE2& page2, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void drawpage3(PAGE3 page3);
void setpage3(PAGE3& page3, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void Draw_page_4(PAGE4 page4);
void Set_page_4(PAGE4& page4, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void drawpage5(PAGE5 page5);
void setpage5(PAGE5& page5, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void Set_page_6(PAGE6& page6, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void setpage7(PAGE7& page7, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void drawpage8(PAGE8 page8);
void setpage8(PAGE8& page8, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page_9(PAGE9 page9);
void set_page_9(PAGE9& page9, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void drawpage10(PAGE10 page10);
void setpage10(PAGE10& page10, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void Draw_page_11(PAGE11 page11);
void Set_page_11(PAGE11& page11, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void drawpage12(PAGE12 page12);
void setpage12(PAGE12& page12, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page_13(PAGE13 page13);
void set_page_13(PAGE13& page13, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page14(PAGE14 page14);
void set_page14(PAGE14& page14, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void Draw_page_15(PAGE15 page15);
void Set_page_15(PAGE15& page15, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void Draw_page_16(PAGE16 page16);
void Set_page_16(PAGE16& page16, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page_17(PAGE17 page17);
void set_page_17(PAGE17& page17, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page_18(PAGE18 page18);
void set_page_18(PAGE18& page18, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void drawpage19(PAGE19 page19);
void setpage19(PAGE19& page19, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void drawpage20(PAGE20 page20);
void setpage20(PAGE20& page20, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void drawpage21(PAGE21 page21);
void setpage21(PAGE21& page21, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page_22(PAGE22 page22);
void set_page_22(PAGE22& page22, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void setpage23(PAGE23& page23, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page_24(PAGE24 page24);
void set_page_24(PAGE24& page24, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void drawpage25(PAGE25 page25);
void setpage25(PAGE25& page25, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void setpage26(PAGE26& page26, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void drawpage27(PAGE27 page27);
void setpage27(PAGE27& page27, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page_28(PAGE28 page28);
void set_page_28(PAGE28& page28, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page_29(PAGE29 page29);
void set_page_29(PAGE29& page29, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void drawpage30(PAGE30 page30);
void setpage30(PAGE30& page30, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page_31(PAGE31 page31);
void set_page_31(PAGE31& page31, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page_32(PAGE32 page32);
void set_page_32(PAGE32& page32, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
int setpage33(PAGE33& page33, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void drawpage34(PAGE34 page34);
void setpage34(PAGE34& page34, int i, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page_35(PAGE35 page35);
void set_page_35(PAGE35& page35, int i, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_page_36(PAGE36 page36);
void set_page_36(PAGE36& page36, int i, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void drawpage37(PAGE37 page37);
void setpage37(PAGE37& page37, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void setpage38(PAGE38& page38, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_split12(SPLIT12 split);
int set_split12(SPLIT12& split12, int x, int y, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_country12(COUNTRY12 country12);
string set_country12(COUNTRY12& country12, int x, int y, int cont, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);

void draw_split13(SPLIT13 split13);
int set_split13(SPLIT13& split13, int x, int y, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_country13(COUNTRY13 country13);
string set_country13(COUNTRY13& country13, int x, int y, int cont, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);

void draw_split(SPLIT split);
int set_split(SPLIT& split, int x, int y, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_country(COUNTRY country);
string set_country(COUNTRY& country, int x, int y, int cont, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);

void draw_split31(SPLIT31 split31);
int set_split31(SPLIT31& split31, int x, int y, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void draw_country31(COUNTRY31 country31);
string set_country31(COUNTRY31& country31, int x, int y, int cont, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
////////////
void getdata2(countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
void senddata2(countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo);
int check(string email, string password, vector<user>& info);
int getindex2(countries_offers2 schedule2[]);

int main()
{
    textureAndFonts();
    PAGE1 page1;
    PAGE2 page2;
    PAGE3 page3;
    PAGE4 page4;
    PAGE5 page5;
    PAGE6 page6;
    PAGE7 page7;
    PAGE8 page8;
    PAGE9 page9;
    PAGE10 page10;
    PAGE11 page11;
    PAGE12 page12;
    PAGE13 page13;
    PAGE14 page14;
    PAGE15 page15;
    PAGE16 page16;
    PAGE17 page17;
    PAGE18 page18;
    PAGE19 page19;
    PAGE20 page20;
    PAGE21 page21;
    PAGE22 page22;
    PAGE23 page23;
    PAGE24 page24;
    PAGE25 page25;
    PAGE26 page26;
    PAGE27 page27;
    PAGE28 page28;
    PAGE29 page29;
    PAGE30 page30;
    PAGE31 page31;
    PAGE32 page32;
    PAGE33 page33;
    PAGE34 page34;
    PAGE35 page35;
    PAGE36 page36;
    PAGE37 page37;
    PAGE38 page38;
    ///////
    countries_offers offers1[5];
    countries_offers2 schedule2[100];
    vector< user>info;
    vector<Data>flightinfo;

    getdata2(offers1, schedule2, info, flightinfo);
    setpage1(page1, offers1, schedule2, info, flightinfo);
    //set_page_2(page2);
    //setpage3(page3, offers1, info);
    //Set_page_4(page4, offers1);
    //setpage5(page5,offers1);
    //Set_page_6(page6, offers1, schedule2, info, flightinfo);
    //setpage7(page7, offers1, schedule2, info, flightinfo);
    //setpage8(page8,offers1);
    //set_page_9(page9,offers1);
    //setpage10(page10,offers1);
    //Set_page_11(page11,offers1);
    //setpage12(page12, offers1, schedule2, info, flightinfo);
    //set_page_13(page13, offers1);
    //set_page14(page14,offers1);
     //Set_page_15(page15,offers1);
    //Set_page_16(page16, offers1);
    //set_page_17(page17, offers1, schedule2, info, flightinfo);
     //set_page_18(page18, offers1, schedule2, info, flightinfo);
    //setpage19(page19,offers1);
    //setpage20(page20,offers1);
    //setpage21(page21,offers1);
    //set_page_22(page22,offers1);
    //setpage23(page23, offers1, schedule2, info, flightinfo);
    //set_page_24(page24,offers1);
    //setpage26(page26, offers1, schedule2, info, flightinfo);
    //set_page_28(page28, offers1, schedule2, info, flightinfo);
    //set_page_29(page29,offers1);
    //setpage30(page30, offers1, schedule2, info, flightinfo);
    //set_page_31(page31, offers1, schedule2, info, flightinfo);
    //setpage33(page33, offers1, schedule2, info, flightinfo);
    //setpage34(page34,offers1);
    //set_page_35(page35,offers1);
    //set_page_36(page36,offers1);
    //setpage38(page38,offers1, schedule2, info, flightinfo);

    senddata2(offers1, schedule2, info, flightinfo);
    return 0;
}

void textureAndFonts()
{
    bg1.loadFromFile("D:/sfml pic/bg1.png");
    bg2.loadFromFile("D:/sfml pic/bg2.png");
    bg3.loadFromFile("D:/sfml pic/bg3.png");
    background4.loadFromFile("D:/sfml pic/bg4.png");
    bg5.loadFromFile("D:/sfml pic/bg5.png");
    background6.loadFromFile("D:/sfml pic/bg6.png");
    bg7.loadFromFile("D:/sfml pic/bg7.png");
    bg8.loadFromFile("D:/sfml pic/bg8.png");
    bg9.loadFromFile("D:/sfml pic/bg9.png");
    bg10.loadFromFile("D:/sfml pic/bg10.png");
    background11.loadFromFile("D:/sfml pic/bg11.png");
    bg12.loadFromFile("D:/sfml pic/bg12.png");
    bg13.loadFromFile("D:/sfml pic/bg13.png");
    bg14.loadFromFile("D:/sfml pic/bg14.png");
    background15.loadFromFile("D:/sfml pic/bg15.png");
    background16.loadFromFile("D:/sfml pic/bg16.png");
    bg17.loadFromFile("D:/sfml pic/bg17.png");
    bg18.loadFromFile("D:/sfml pic/bg18.png");
    bg19.loadFromFile("D:/sfml pic/bg19.png");
    bg20.loadFromFile("D:/sfml pic/bg20.png");
    bg21.loadFromFile("D:/sfml pic/bg21.png");
    bg22.loadFromFile("D:/sfml pic/bg22.png");
    bg23.loadFromFile("D:/sfml pic/bg23.png");
    bg24.loadFromFile("D:/sfml pic/bg24.png");
    bg25.loadFromFile("D:/sfml pic/bg25.png");
    bg26.loadFromFile("D:/sfml pic/bg26.png");
    bg27.loadFromFile("D:/sfml pic/bg27.png");
    bg28.loadFromFile("D:/sfml pic/bg28.png");
    bg29.loadFromFile("D:/sfml pic/bg29.png");
    bg30.loadFromFile("D:/sfml pic/bg30.png");
    bg31.loadFromFile("D:/sfml pic/bg31.png");
    bg32.loadFromFile("D:/sfml pic/bg32.png");
    bg33.loadFromFile("D:/sfml pic/bg33.png");
    bg34.loadFromFile("D:/sfml pic/bg34.png");
    bg35.loadFromFile("D:/sfml pic/bg35.png");
    bg36.loadFromFile("D:/sfml pic/bg36.png");
    bg37.loadFromFile("D:/sfml pic/bg37.png");
    bg38.loadFromFile("D:/sfml pic/bg38.png");

    inputbox.loadFromFile("D:/sfml pic/inputbox.png");
    transbox.loadFromFile("D:/sfml pic/transbox.png");
    desbox.loadFromFile("D:/sfml pic/desbox.png");
    newoffersblock.loadFromFile("D:/sfml pic/newoffersblock.png");
    tripsblock.loadFromFile("D:/sfml pic/tripsblock.png");
    passengersblock.loadFromFile("D:/sfml pic/passengersblock.png");
    block.loadFromFile("D:/sfml pic/block.png");
    add.loadFromFile("D:/sfml pic/add.png");
    edit.loadFromFile("D:/sfml pic/edit.png");
    del.loadFromFile("D:/sfml pic/delete.png");
    dep.loadFromFile("D:/sfml pic/pic1.png");
    price.loadFromFile("D:/sfml pic/pic2.png");
    seatsbg18.loadFromFile("D:/sfml pic/seatsbg18.png");

    f1.loadFromFile("C:/Windows/Fonts/arialbd.ttf");
    f2.loadFromFile("C:/Windows/Fonts/cambriai.ttf");
    f3.loadFromFile("C:/Windows/Fonts/andlso.ttf");
    f4.loadFromFile("C:/Windows/Fonts/times.ttf");
}

void drawpage1(PAGE1 page1) {
    window.draw(page1.background);
    window.draw(page1.Block);
    window.draw(page1.get_started);
}
void setpage1(PAGE1& page1, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo) {
    PAGE2 page2;
    page1.background.setTexture(bg1);
    page1.background.setScale(2, 2);
    page1.background.setPosition(0, 0);
    page1.background.setOrigin(0, 0);

    page1.Block.setTexture(block);
    page1.Block.setPosition(840, 850);
    page1.Block.setScale(1.8, 1.5);
    page1.Block.setOrigin(0, 0);

    page1.get_started.setFont(f4);
    page1.get_started.setCharacterSize(50);
    page1.get_started.setFillColor(Color(38, 34, 98));
    page1.get_started.setPosition(page1.Block.getPosition().x + 25, page1.Block.getPosition().y + 10);
    page1.get_started.setString("Get Started!");

    // Dynamic

    MouseRect.setFillColor(sf::Color::Black);
    Mouse ms;
    while (window.isOpen())
    {
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        Event event;

        if (MouseRect.getGlobalBounds().intersects(page1.Block.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            set_page_2(page2, offers1, schedule2, info, flightinfo);
        }

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.draw(MouseRect);
        drawpage1(page1);
        window.display();
    }
}

void draw_page_2(PAGE2 page2)
{
    window.draw(page2.background);
    window.draw(page2.Email);
    window.draw(page2.pass);
    window.draw(page2.login);
    window.draw(page2.Login);
    window.draw(page2.logup);

}
void set_page_2(PAGE2& page2, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;
    PAGE4 page4;
    PAGE3 page3;
    PAGE29 page29;
    page2.background.setTexture(bg2);
    page2.background.setScale(2.1, 2.1);
    page2.background.setPosition(-10, 0);
    page2.background.setOrigin(0, 0);

    page2.Email.setTexture(inputbox);
    page2.Email.setPosition(850, 432);
    page2.Email.setScale(2.6, 1.4);

    page2.pass.setTexture(inputbox);
    page2.pass.setPosition(850, 590);
    page2.pass.setScale(2.6, 1.4);

    page2.login.setTexture(inputbox);
    page2.login.setPosition(750, 750);
    page2.login.setScale(1.6, 1.4);

    page2.Login.setFont(f2);
    page2.Login.setFillColor(Color::Black);
    page2.Login.setCharacterSize(45);
    page2.Login.setPosition(860, 750);
    page2.Login.setString("log in");

    page2.logup.setTexture(inputbox);
    page2.logup.setPosition(1170, 860);
    page2.logup.setScale(.8, 1.4);
    page2.logup.setColor(Color(0, 0, 0, 0));

    //Dynamic///////////////////////////////
    string data[2];
    Text inputdata[2];
    int count = 0;
    inputdata[0].setPosition(page2.Email.getPosition().x + 20, page2.Email.getPosition().y + 10);
    inputdata[1].setPosition(page2.pass.getPosition().x + 20, page2.pass.getPosition().y + 10);

    for (int i = 0; i < 2; i++)
    {
        inputdata[i].setCharacterSize(32);
        inputdata[i].setFillColor(Color(0, 0, 0));
        inputdata[i].setFont(f2);
    }
    MouseRect.setFillColor(Color(0, 0, 0, 0));
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 2; i++)
        {
            inputdata[i].setString(data[i]);
        }
        if (MouseRect.getGlobalBounds().intersects(page2.logup.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage3(page3, offers1, schedule2, info, flightinfo);
        }
        //if (MouseRect.getGlobalBounds().intersects(page2.login.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        //{
        //    Set_page_4(page4, offers1);
        //}
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
            if (event.type == Event::TextEntered)
            {
                data[count] += static_cast<char>(event.text.unicode);
            }
            if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
            {
                count++;
                count %= 2;
            }
            if (Keyboard::isKeyPressed(Keyboard::BackSpace) && data[count].size() > 0)
            {
                data[count].resize(data[count].size() - 1);
            }

            if ((event.type == Event::KeyReleased && event.key.code == Keyboard::Enter && count == 0))
            {

                int x = check(data[0], data[1], info);
                if (x == 1)
                {
                    set_page_29(page29, offers1, schedule2, info, flightinfo);
                }
                else if (x == 2)
                {
                    Set_page_4(page4, offers1, schedule2, info, flightinfo);

                }
                else if (x == 3)
                {
                    for (int i = 0; i < 2; i++)

                        data[i].resize(0);
                }

            }
        }

        window.clear();
        draw_page_2(page2);
        for (int i = 0; i < 2; i++)
        {
            window.draw(inputdata[i]);
        }
        window.draw(MouseRect);
        window.display();
        draw_page_2(page2);
    }
}

void drawpage3(PAGE3 page3) {
    window.draw(page3.background);
    window.draw(page3.Block1);
    window.draw(page3.Block2);
    window.draw(page3.Block3);
    window.draw(page3.Block4);
    window.draw(page3.Block5);
    window.draw(page3.Block6);
    window.draw(page3.Block7);
    window.draw(page3.Block8);
    window.draw(page3.Block9);
    window.draw(page3.Block10);
    window.draw(page3.box);
    window.draw(page3.signup);
    window.draw(page3.Fail);
}
void setpage3(PAGE3& page3, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo) {

    PAGE4 page4;

    page3.background.setTexture(bg3);
    page3.background.setScale(2, 2.1);
    page3.background.setPosition(0, 0);
    page3.background.setOrigin(0, 0);

    page3.Block1.setTexture(block);
    page3.Block1.setPosition(560, 390);
    page3.Block1.setScale(3, 1.5);
    page3.Block1.setOrigin(0, 0);

    page3.Block2.setTexture(block);
    page3.Block2.setPosition(560, 500);
    page3.Block2.setScale(3, 1.5);
    page3.Block2.setOrigin(0, 0);

    page3.Block3.setTexture(block);
    page3.Block3.setPosition(560, 600);
    page3.Block3.setScale(3, 1.5);
    page3.Block3.setOrigin(0, 0);

    page3.Block4.setTexture(block);
    page3.Block4.setPosition(560, 700);
    page3.Block4.setScale(3, 1.5);
    page3.Block4.setOrigin(0, 0);

    page3.Block5.setTexture(block);
    page3.Block5.setPosition(560, 800);
    page3.Block5.setScale(3, 1.5);
    page3.Block5.setOrigin(0, 0);

    page3.Block8.setTexture(block);
    page3.Block8.setPosition(1510, 450);
    page3.Block8.setScale(1, 1.2);
    page3.Block8.setOrigin(0, 0);

    page3.Block7.setTexture(block);
    page3.Block7.setPosition(1310, 450);
    page3.Block7.setScale(1, 1.2);
    page3.Block7.setOrigin(0, 0);

    page3.Block6.setTexture(block);
    page3.Block6.setPosition(1100, 450);
    page3.Block6.setScale(1, 1.2);
    page3.Block6.setOrigin(0, 0);

    page3.Block9.setTexture(block);
    page3.Block9.setPosition(1140, 620);
    page3.Block9.setScale(3, 1.5);
    page3.Block9.setOrigin(0, 0);

    page3.Block10.setTexture(block);
    page3.Block10.setPosition(1140, 800);
    page3.Block10.setScale(3, 1.5);
    page3.Block10.setOrigin(0, 0);

    page3.box.setTexture(block);
    page3.box.setPosition(850, 950);
    page3.box.setScale(1.8, 1.5);
    page3.box.setOrigin(0, 0);

    page3.signup.setFont(f1);
    page3.signup.setCharacterSize(45);
    page3.signup.setFillColor(Color(38, 34, 98));
    page3.signup.setPosition(page3.box.getPosition().x + 50, page3.box.getPosition().y + 10);
    page3.signup.setString("Sign-up");

    page3.Fail.setFillColor(Color(255, 0, 0));
    page3.Fail.setFont(f1);
    //page3.Fail.setString("Passwords doesn't Match! (Please try again),,");
    page3.Fail.setPosition(page3.box.getPosition().x + 170, page3.box.getPosition().y - 50);
    page3.Fail.setCharacterSize(35);

    /////////////////////////////////////////////////////////////////////////////////////////////// Dynamic

    string data[10];
    Text input[10];
    int count = 0;
    input[0].setPosition(page3.Block1.getPosition().x + 50, page3.Block1.getPosition().y + 10);
    input[1].setPosition(page3.Block2.getPosition().x + 50, page3.Block2.getPosition().y + 10);
    input[2].setPosition(page3.Block3.getPosition().x + 50, page3.Block3.getPosition().y + 10);
    input[3].setPosition(page3.Block4.getPosition().x, page3.Block4.getPosition().y + 10);
    input[4].setPosition(page3.Block5.getPosition().x + 50, page3.Block5.getPosition().y + 10);
    input[5].setPosition(page3.Block6.getPosition().x + 50, page3.Block6.getPosition().y + 10);
    input[6].setPosition(page3.Block7.getPosition().x + 50, page3.Block7.getPosition().y + 10);
    input[7].setPosition(page3.Block8.getPosition().x + 60, page3.Block8.getPosition().y + 10);
    input[8].setPosition(page3.Block9.getPosition().x + 40, page3.Block9.getPosition().y + 10);
    input[9].setPosition(page3.Block10.getPosition().x + 50, page3.Block10.getPosition().y + 10);

    for (int i = 0; i < 10; i++)
    {
        input[i].setCharacterSize(35);
        input[i].setFillColor(Color(74, 127, 211));
        input[i].setFont(f1);
    }
    Mouse ms;
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 10; i++)
        {
            input[i].setString(data[i]);
        }
        if (MouseRect.getGlobalBounds().intersects(page3.box.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            for (int i = 0; i < 3; i++)
            {
                if (data[i].empty())
                {
                    page3.Fail.setString("The box is empty,please Enter data,,,");
                    data[i].resize(0);
                }
                else if (data[8] != data[9])
                {
                    page3.Fail.setString("Passwords doesn't Match! (Please try again),,");
                    data[i].resize(0);
                }
            }

            Set_page_4(page4, offers1, schedule2, info, flightinfo);
        }

        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed)
            {
                window.close();
            }
            if (event.type == Event::TextEntered)
            {
                if (count > 3 && count < 8)
                {
                    if (isdigit(static_cast<char>(event.text.unicode)))
                        data[count] += static_cast<char>(event.text.unicode);
                }
                else
                    data[count] += static_cast<char>(event.text.unicode);
            }
            if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
            {
                count++;
                count %= 10;
            }
            if (count > 3 && count < 8)
            {
                if (event.type == Event::KeyReleased && event.key.code == Keyboard::BackSpace && data[count].size() > 0)
                {
                    data[count].resize(data[count].size() - 1);
                }
            }
            else
                if (Keyboard::isKeyPressed(Keyboard::BackSpace) && data[count].size() > 0)
                {
                    data[count].resize(data[count].size() - 1);
                }

            if ((event.type == Event::KeyReleased && event.key.code == Keyboard::Enter && count == 0))
            {
                bool check = false;
                for (int i = 0; i < 10; i++)
                {
                    if (data[i].empty())
                        break;
                    else
                        check = true;
                }
                if (!check)
                {
                    // cout << check;
                    page3.Fail.setString("-invalied information,please try again,,,");
                    for (int i = 0; i < 10; i++)
                    {
                        data[i].resize(0);
                    }

                }
                else
                {
                    if (data[8] != data[9])
                    {
                        page3.Fail.setString("Passwords doesn't Match! (Please try again),,");
                        for (int i = 0; i < 10; i++)
                        {
                            data[i].resize(0);
                        }
                    }
                    else
                    {
                        data[0].resize(data[0].size() - 1);
                        data[1].resize(data[1].size() - 1);
                        data[2].resize(data[2].size() - 1);
                        data[3].resize(data[3].size() - 1);
                        data[4].resize(data[8].size() - 1);
                        data[5].resize(data[9].size() - 1);

                        user1.firstName = data[0];
                        user1.lastName = data[1];
                        user1.nationality = data[2];
                        user1.email = data[3];
                        user1.phoneNum = data[4];
                        user1.password = data[8];
                        user1.confirmPass = data[9];
                        user1.data.Day = stoi(data[5]);
                        user1.data.Month = stoi(data[6]);
                        user1.data.Year = stoi(data[7]);
                        user1.kind = "user";
                        USER = info.size() - 1;
                        info.push_back(user1);

                        Set_page_4(page4, offers1, schedule2, info, flightinfo);
                    }
                }
            }
        }
        window.clear();
        drawpage3(page3);
        for (int i = 0; i < 10; i++)
        {
            window.draw(input[i]);
        }
        window.display();
    }
}

void Draw_page_4(PAGE4 page4)
{
    window.draw(page4.bg4);
    window.draw(page4.FlightSchedule);
    window.draw(page4.MyTrips);
    window.draw(page4.NewReservation);
    window.draw(page4.ProtocolsandContactInfo);
    window.draw(page4.Exit);
    window.draw(page4.FlightSchedulebutton);
    window.draw(page4.MyTripsbutton);
    window.draw(page4.NewReservationbutton);
    window.draw(page4.ProtocolsandContactInfobutton);
    window.draw(page4.Exitbutton);
}
void Set_page_4(PAGE4& page4, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE5 page5;
    PAGE6 page6;
    PAGE8 page8;
    PAGE23 page23;
    //PAGE2 page2;
    cout << USER << endl;
    page4.bg4.setTexture(background4);
    page4.bg4.setScale(1.8, 1.8);
    page4.bg4.setPosition(1920 / 2, 1080 / 2);
    page4.bg4.setOrigin(page4.bg4.getLocalBounds().width / 2, page4.bg4.getLocalBounds().height / 2);

    page4.FlightSchedule.setTexture(transbox);
    page4.FlightSchedule.setOrigin(page4.FlightSchedule.getLocalBounds().width / 2, page4.FlightSchedule.getLocalBounds().height / 2);
    page4.FlightSchedule.setPosition(1920 / 2 - 370, 1080 / 2 - 220);
    page4.FlightSchedule.setScale(1.9, 1.9);
    page4.FlightSchedule.setColor(Color(0, 0, 0, 0));

    page4.MyTrips.setTexture(transbox);
    page4.MyTrips.setOrigin(page4.MyTrips.getLocalBounds().width / 2, page4.MyTrips.getLocalBounds().height / 2);
    page4.MyTrips.setPosition(1920 / 2 - 370, 1080 / 2 + 100);
    page4.MyTrips.setScale(1.9, 1.9);
    page4.MyTrips.setColor(Color(0, 0, 0, 0));

    page4.NewReservation.setTexture(transbox);
    page4.NewReservation.setOrigin(page4.NewReservation.getLocalBounds().width / 2, page4.NewReservation.getLocalBounds().height / 2);
    page4.NewReservation.setPosition(1920 / 2 + 300, 1080 / 2 - 220);
    page4.NewReservation.setScale(1.9, 1.9);
    page4.NewReservation.setColor(Color(0, 0, 0, 0));

    page4.ProtocolsandContactInfo.setTexture(transbox);
    page4.ProtocolsandContactInfo.setOrigin(page4.ProtocolsandContactInfo.getLocalBounds().width / 2, page4.ProtocolsandContactInfo.getLocalBounds().height / 2);
    page4.ProtocolsandContactInfo.setPosition(1920 / 2 + 340, 1080 / 2 + 100);
    page4.ProtocolsandContactInfo.setScale(1.9, 1.9);
    page4.ProtocolsandContactInfo.setColor(Color(0, 0, 0, 0));

    page4.Exit.setTexture(transbox);
    page4.Exit.setOrigin(page4.Exit.getLocalBounds().width / 2, page4.Exit.getLocalBounds().height / 2);
    page4.Exit.setPosition(1920 / 2 - 50, 1080 / 2 + 385);
    page4.Exit.setScale(1.9, 1.9);
    page4.Exit.setColor(Color(0, 0, 0, 0));

    page4.FlightSchedulebutton.setFont(f4);
    page4.FlightSchedulebutton.setString("Flight Schedule");
    page4.FlightSchedulebutton.setCharacterSize(60);
    page4.FlightSchedulebutton.setOrigin(page4.FlightSchedulebutton.getLocalBounds().width / 2, page4.FlightSchedulebutton.getLocalBounds().height / 2);
    page4.FlightSchedulebutton.setPosition(page4.FlightSchedule.getPosition().x - 30, page4.FlightSchedule.getPosition().y - 10);
    page4.FlightSchedulebutton.setFillColor(Color(0, 0, 0));

    page4.MyTripsbutton.setFont(f4);
    page4.MyTripsbutton.setString("New Reservation");
    page4.MyTripsbutton.setCharacterSize(60);
    page4.MyTripsbutton.setOrigin(page4.MyTripsbutton.getLocalBounds().width / 2, page4.MyTripsbutton.getLocalBounds().height / 2);
    page4.MyTripsbutton.setPosition(page4.MyTrips.getPosition().x - 10, page4.MyTrips.getPosition().y - 40);
    page4.MyTripsbutton.setFillColor(Color(0, 0, 0));

    page4.NewReservationbutton.setFont(f4);
    page4.NewReservationbutton.setString("My Trips");
    page4.NewReservationbutton.setCharacterSize(60);
    page4.NewReservationbutton.setOrigin(page4.NewReservationbutton.getLocalBounds().width / 2, page4.NewReservationbutton.getLocalBounds().height / 2);
    page4.NewReservationbutton.setPosition(page4.NewReservation.getPosition().x + 100, page4.NewReservation.getPosition().y - 10);
    page4.NewReservationbutton.setFillColor(Color(0, 0, 0));

    page4.ProtocolsandContactInfobutton.setFont(f4);
    page4.ProtocolsandContactInfobutton.setString("Protocols & Contact Info.");
    page4.ProtocolsandContactInfobutton.setCharacterSize(60);
    page4.ProtocolsandContactInfobutton.setOrigin(page4.ProtocolsandContactInfobutton.getLocalBounds().width / 2, page4.ProtocolsandContactInfobutton.getLocalBounds().height / 2);
    page4.ProtocolsandContactInfobutton.setPosition(page4.ProtocolsandContactInfobutton.getPosition().x + 1400, page4.ProtocolsandContactInfo.getPosition().y - 40);
    page4.ProtocolsandContactInfobutton.setFillColor(Color(0, 0, 0));

    page4.Exitbutton.setFont(f4);
    page4.Exitbutton.setString("EXIT");
    page4.Exitbutton.setCharacterSize(60);
    page4.Exitbutton.setOrigin(page4.Exitbutton.getLocalBounds().width / 2, page4.Exitbutton.getLocalBounds().height / 2);
    page4.Exitbutton.setPosition(page4.Exit.getPosition().x + 120, page4.Exit.getPosition().y - 25);
    page4.Exitbutton.setFillColor(Color(0, 0, 0));

    //dynamic
    MouseRect.setFillColor(sf::Color::Black);
    Mouse ms;
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page4.FlightSchedule.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            Set_page_6(page6, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page4.NewReservation.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage23(page23, offers1, schedule2, info, flightinfo);

        }
        if (MouseRect.getGlobalBounds().intersects(page4.MyTrips.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage8(page8, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page4.Exit.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            window.close();
        }
        if (MouseRect.getGlobalBounds().intersects(page4.ProtocolsandContactInfo.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage5(page5, offers1, schedule2, info, flightinfo);
        }
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }

        }
        window.draw(MouseRect);
        Draw_page_4(page4);
        window.display();
    }
}

void drawpage5(PAGE5 page5) {
    window.draw(page5.background);
    window.draw(page5.Block);
    window.draw(page5.back);
}
void setpage5(PAGE5& page5, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo) {

    PAGE4 page4;

    page5.background.setTexture(bg5);
    page5.background.setScale(2, 2);
    page5.background.setPosition(0, 0);
    page5.background.setOrigin(0, 0);

    page5.Block.setTexture(block);
    page5.Block.setPosition(1600, 950);
    page5.Block.setScale(1.3, 1.6);
    page5.Block.setOrigin(0, 0);

    page5.back.setFont(f1);
    page5.back.setString("Back");
    page5.back.setCharacterSize(45);
    page5.back.setPosition(page5.Block.getPosition().x + 45, page5.Block.getPosition().y + 15);
    page5.back.setFillColor(Color(38, 34, 98));

    // Dynamic

    MouseRect.setFillColor(sf::Color::Black);
    Mouse ms;
    while (window.isOpen())
    {
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        Event event;

        if (MouseRect.getGlobalBounds().intersects(page5.Block.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            Set_page_4(page4, offers1, schedule2, info, flightinfo);
        }

        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed)
            {
                window.close();
            }


        }
        window.draw(MouseRect);
        drawpage5(page5);
        window.display();


    }
}

void Draw_page_6(PAGE6 page6)
{
    window.draw(page6.bg6);
    window.draw(page6.beginbutton);
    window.draw(page6.beginButton);
}
void Set_page_6(PAGE6& page6, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE7 page7;

    page6.bg6.setTexture(background6);
    page6.bg6.setScale(1.9, 2);
    page6.bg6.setPosition(1920 / 2 - 10, 1080 / 2);
    page6.bg6.setOrigin(page6.bg6.getLocalBounds().width / 2, page6.bg6.getLocalBounds().height / 2);

    page6.beginbutton.setTexture(transbox);
    page6.beginbutton.setOrigin(page6.beginbutton.getLocalBounds().width / 2, page6.beginbutton.getLocalBounds().height / 2);
    page6.beginbutton.setPosition(1920 / 2 - 30, 1080 / 2 + 500);
    page6.beginbutton.setScale(1.7, 1.7);

    page6.beginButton.setFont(f2);
    page6.beginButton.setString("BEGIN");
    page6.beginButton.setCharacterSize(60);
    page6.beginButton.setOrigin(page6.beginbutton.getLocalBounds().width / 2, page6.beginbutton.getLocalBounds().height / 2);
    page6.beginButton.setPosition(page6.beginbutton.getPosition().x - 15, page6.beginbutton.getPosition().y - 15);
    page6.beginButton.setFillColor(Color(39, 34, 99));

    // Dynamic

    MouseRect.setFillColor(sf::Color::Black);
    Mouse ms;
    while (window.isOpen())
    {
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        Event event;

        if (MouseRect.getGlobalBounds().intersects(page6.beginbutton.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage7(page7, offers1, schedule2, info, flightinfo);
        }

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.draw(MouseRect);
        Draw_page_6(page6);
        window.display();
    }
}

void setpage7(PAGE7& page7, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE4 page4;
    PAGE15 page15;

    page7.background.setTexture(bg7);
    page7.background.setScale(2.18, 2.18);
    page7.background.setPosition(1920 / 2 - 10, 1080 / 2);
    page7.background.setOrigin(page7.background.getLocalBounds().width / 2, page7.background.getLocalBounds().height / 2);

    page7.back_b.setTexture(transbox);
    page7.back_b.setOrigin(page7.back_b.getLocalBounds().width / 2, page7.back_b.getLocalBounds().height / 2);
    page7.back_b.setPosition(1920 / 2 - 750, 1080 / 2 + 450);
    page7.back_b.setScale(1.7, 1.7);

    page7.back_t.setFont(f2);
    page7.back_t.setString("Back");
    page7.back_t.setCharacterSize(60);
    page7.back_t.setOrigin(page7.back_t.getLocalBounds().width / 2, page7.back_t.getLocalBounds().height / 2);
    page7.back_t.setPosition(page7.back_b.getPosition().x - 10, page7.back_b.getPosition().y - 15);
    page7.back_t.setFillColor(Color(39, 34, 99));

    const int SCROLLBAR_WIDTH = 20;
    const int SCROLLBAR_HEIGHT = 1070;
    const int SCROLLBAR_X = 1900 - SCROLLBAR_WIDTH;
    const int SCROLLBAR_Y = 0;
    sf::RectangleShape scrollbar(sf::Vector2f(SCROLLBAR_WIDTH, SCROLLBAR_HEIGHT));
    scrollbar.setPosition(SCROLLBAR_X, SCROLLBAR_Y);
    scrollbar.setFillColor(sf::Color::White);

    const int SLIDER_WIDTH = 20;
    const int SLIDER_HEIGHT = 100;
    const int SLIDER_X = 1900 - SLIDER_WIDTH;
    const int SLIDER_Y = SCROLLBAR_Y;
    sf::RectangleShape slider(sf::Vector2f(SLIDER_WIDTH, SLIDER_HEIGHT));
    slider.setPosition(SLIDER_X, SLIDER_Y);
    slider.setFillColor(Color(65, 95, 145));
    //first one ********************************************************************
    for (int i = 0; i < 5; i++)
    {
        page7.block[i].setTexture(newoffersblock);
        page7.block[i].setScale(1.7, 2.);
        page7.block[i].setPosition(100, ((250) + (275 * i)));
        page7.block[i].setColor(Color(255, 255, 255, 180));

        string price = to_string(offers1[i].price);
        string flight_num = to_string((2 * i) + 20);
        string date = to_string((2 * i) + 5);
        string th1 = to_string(offers1[i].t_h + i);
        string th2 = to_string((2 * offers1[i].t_h) + i);
        string tm2 = to_string(offers1[i].t_m);

        page7.dep[i].setFont(f4);
        page7.dep[i].setCharacterSize(42);
        page7.dep[i].setOrigin(page7.dep[i].getLocalBounds().width / 2, page7.dep[i].getLocalBounds().height / 2);
        page7.dep[i].setPosition(page7.block[i].getPosition().x + 528, page7.block[i].getPosition().y + 35);
        page7.dep[i].setString(offers1[i].dep);
        page7.dep[i].setFillColor(Color(0, 0, 0));

        page7.arv[i].setFont(f4);
        page7.arv[i].setCharacterSize(40);
        page7.arv[i].setOrigin(page7.arv[i].getLocalBounds().width / 2, page7.arv[i].getLocalBounds().height / 2);
        page7.arv[i].setPosition(page7.block[i].getPosition().x + 468, page7.block[i].getPosition().y + 105);
        page7.arv[i].setString(offers1[i].arv);
        page7.arv[i].setFillColor(Color(0, 0, 0));

        page7.price[i].setFont(f4);
        page7.price[i].setCharacterSize(40);
        page7.price[i].setOrigin(page7.price[i].getLocalBounds().width / 2, page7.price[i].getLocalBounds().height / 2);
        page7.price[i].setPosition(page7.block[i].getPosition().x + 1490, page7.block[i].getPosition().y + 105);
        page7.price[i].setString(price + " $");
        page7.price[i].setFillColor(Color(0, 0, 0));

        page7.num[i].setFont(f4);
        page7.num[i].setCharacterSize(45);
        page7.num[i].setOrigin(page7.price[i].getLocalBounds().width / 2, page7.price[i].getLocalBounds().height / 2);
        page7.num[i].setPosition(page7.block[i].getPosition().x + 270, page7.block[i].getPosition().y + 117);
        page7.num[i].setString("DS9" + flight_num);
        page7.num[i].setFillColor(Color(0, 0, 0));

        page7.date[i].setFont(f4);
        page7.date[i].setCharacterSize(42);
        page7.date[i].setOrigin(page7.date[i].getLocalBounds().width / 2, page7.date[i].getLocalBounds().height / 2);
        page7.date[i].setPosition(page7.block[i].getPosition().x + 240, page7.block[i].getPosition().y + 35);
        page7.date[i].setString(date + "/6/2023");
        page7.date[i].setFillColor(Color(0, 0, 0));

        page7.th1[i].setFont(f4);
        page7.th1[i].setCharacterSize(40);
        page7.th1[i].setOrigin(page7.th1[i].getLocalBounds().width / 2, page7.th1[i].getLocalBounds().height / 2);
        page7.th1[i].setPosition(page7.dep[i].getPosition().x + 680, page7.dep[i].getPosition().y);
        page7.th1[i].setString("(" + th1 + ":00)");
        page7.th1[i].setFillColor(Color(0, 0, 0));

        page7.th2[i].setFont(f4);
        page7.th2[i].setCharacterSize(40);
        page7.th2[i].setOrigin(page7.th2[i].getLocalBounds().width / 2, page7.th2[i].getLocalBounds().height / 2);
        page7.th2[i].setPosition(page7.arv[i].getPosition().x + 730, page7.arv[i].getPosition().y);
        page7.th2[i].setString("(" + th2 + ":" + tm2 + ")");
        page7.th2[i].setFillColor(Color(0, 0, 0));

        page7.level[i].setFont(f4);
        page7.level[i].setCharacterSize(37);
        page7.level[i].setOrigin(page7.level[i].getLocalBounds().width / 2, page7.level[i].getLocalBounds().height / 2);
        page7.level[i].setPosition(page7.block[i].getPosition().x + 1494, page7.block[i].getPosition().y + 35);
        if (i % 2 == 0)
            page7.level[i].setString("ECONOMY");
        else
            page7.level[i].setString("BUSINESS");
        page7.level[i].setFillColor(Color(0, 0, 0));
    }

    const float SCROLLBAR_RANGE = SCROLLBAR_HEIGHT - SLIDER_HEIGHT;
    float sliderPosition = 0;

    MouseRect.setFillColor(sf::Color::Black);
    Mouse ms;
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page7.back_b.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            Set_page_4(page4, offers1, schedule2, info, flightinfo);
        }
        for (int i = 0; i < 5; i++)
        {
            if (MouseRect.getGlobalBounds().intersects(page7.block[i].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                string flight_num = to_string((2 * i) + 20);

                flight1.from = offers1[i].dep;
                flight1.to = offers1[i].arv;
                flight1.price = offers1[i].price;
                flight1.myDate.Year = 2023;
                flight1.myDate.Month = 7;
                flight1.myDate.Day = ((2 * i) + 5);
                flight1.th1 = (offers1[i].t_h + i);
                flight1.th2 = ((2 * offers1[i].t_h) + i);
                flight1.tm2 = (offers1[i].t_m);
                flight1.flight_num = "DS9" + flight_num;
                if (i % 2 == 0)
                    flight1.level = "ECONOMY";
                else
                    flight1.level = "BUSINESS";
                cout << flight1.to << endl;
                Set_page_15(page15, offers1, schedule2, info, flightinfo);

            }
        }
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::MouseWheelScrolled)
            {
                if (event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel)
                {
                    //controll the speed
                    sliderPosition += event.mouseWheelScroll.delta * 10;
                    if (sliderPosition < 0)
                        sliderPosition = 0;
                    else if (sliderPosition > SCROLLBAR_RANGE)
                        sliderPosition = SCROLLBAR_RANGE;
                    float percentage = sliderPosition / SCROLLBAR_RANGE;
                    //second loop  *************************************************************************
                    for (int i = 0; i < 5; i++)
                    {
                        //controll the number 
                        page7.block[i].setPosition(100, ((250) + (275 * i)) + (9 * percentage) * (-70));//(200 / 2 - 1080 / 2));

                        page7.dep[i].setPosition(page7.block[i].getPosition().x + 528, page7.block[i].getPosition().y + 35);
                        page7.arv[i].setPosition(page7.block[i].getPosition().x + 468, page7.block[i].getPosition().y + 105);
                        page7.price[i].setPosition(page7.block[i].getPosition().x + 1490, page7.block[i].getPosition().y + 105);
                        page7.num[i].setPosition(page7.block[i].getPosition().x + 270, page7.block[i].getPosition().y + 117);
                        page7.date[i].setPosition(page7.block[i].getPosition().x + 240, page7.block[i].getPosition().y + 35);
                        page7.th1[i].setPosition(page7.dep[i].getPosition().x + 680, page7.dep[i].getPosition().y);
                        page7.th2[i].setPosition(page7.arv[i].getPosition().x + 730, page7.arv[i].getPosition().y);
                        page7.level[i].setPosition(page7.block[i].getPosition().x + 1494, page7.block[i].getPosition().y + 35);

                    }
                    slider.setPosition(SLIDER_X, SCROLLBAR_Y + sliderPosition);
                }
            }
            else if (event.type == sf::Event::MouseButtonPressed)
            {
                if (slider.getGlobalBounds().contains(sf::Vector2f(event.mouseButton.x, event.mouseButton.y)))
                {
                    sliderPosition = event.mouseButton.y - SCROLLBAR_Y - (SLIDER_HEIGHT / 2);
                    if (sliderPosition < 0)
                        sliderPosition = 0;
                    else if (sliderPosition > SCROLLBAR_RANGE)
                        sliderPosition = SCROLLBAR_RANGE;
                }
            }
        }
        window.draw(MouseRect);
        window.clear();
        window.draw(page7.background);
        for (int i = 0; i < 5; i++)
        {
            window.draw(page7.block[i]);
            window.draw(page7.dep[i]);
            window.draw(page7.arv[i]);
            window.draw(page7.price[i]);
            window.draw(page7.th1[i]);
            window.draw(page7.th2[i]);
            window.draw(page7.tm2[i]);
            window.draw(page7.date[i]);
            window.draw(page7.num[i]);
            window.draw(page7.level[i]);
        }
        window.draw(page7.back_b);
        window.draw(page7.back_t);
        window.draw(scrollbar);
        window.draw(slider);
        window.display();
    }
}

void drawpage8(PAGE8 page8) {
    window.draw(page8.background);
    window.draw(page8.Block1);
    window.draw(page8.Block2);
    window.draw(page8.Block3);
    window.draw(page8.Block4);
    window.draw(page8.Oneway);
    window.draw(page8.Back);
    window.draw(page8.Multicity);
    window.draw(page8.Round);
}
void setpage8(PAGE8& page8, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo) {

    PAGE4 page4;
    PAGE9 page9;
    PAGE10 page10;
    PAGE11 page11;

    page8.background.setTexture(bg8);
    page8.background.setScale(3, 2.5);
    page8.background.setPosition(0, 0);
    page8.background.setOrigin(0, 0);

    page8.Block1.setTexture(block);
    page8.Block1.setPosition(800, 790);
    page8.Block1.setScale(1.9, 1.5);
    page8.Block1.setOrigin(0, 0);

    page8.Back.setFont(f1);
    page8.Back.setCharacterSize(50);
    page8.Back.setFillColor(Color(38, 34, 98));
    page8.Back.setPosition(page8.Block1.getPosition().x + 100, page8.Block1.getPosition().y + 10);
    page8.Back.setString("Back");

    page8.Block2.setTexture(block);
    page8.Block2.setPosition(200, 550);
    page8.Block2.setScale(1.7, 1.8);
    page8.Block2.setOrigin(0, 0);

    page8.Oneway.setFont(f1);
    page8.Oneway.setCharacterSize(50);
    page8.Oneway.setFillColor(Color(38, 34, 98));
    page8.Oneway.setPosition(page8.Block2.getPosition().x + 30, page8.Block2.getPosition().y + 20);
    page8.Oneway.setString("One Way");

    page8.Block3.setTexture(block);
    page8.Block3.setPosition(800, 550);
    page8.Block3.setScale(1.9, 1.8);
    page8.Block3.setOrigin(0, 0);

    page8.Round.setFont(f1);
    page8.Round.setCharacterSize(50);
    page8.Round.setFillColor(Color(38, 34, 98));
    page8.Round.setPosition(page8.Block3.getPosition().x + 20, page8.Block3.getPosition().y + 20);
    page8.Round.setString("Round Trip");

    page8.Block4.setTexture(block);
    page8.Block4.setPosition(1400, 550);
    page8.Block4.setScale(1.7, 1.8);
    page8.Block4.setOrigin(0, 0);

    page8.Multicity.setFont(f1);
    page8.Multicity.setCharacterSize(50);
    page8.Multicity.setFillColor(Color(38, 34, 98));
    page8.Multicity.setPosition(page8.Block4.getPosition().x + 40, page8.Block4.getPosition().y + 20);
    page8.Multicity.setString("Multicity");

    // Dynamic
    MouseRect.setFillColor(sf::Color::Black);
    Mouse ms;

    while (window.isOpen())
    {
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        Event event;
        if (MouseRect.getGlobalBounds().intersects(page8.Block1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            Set_page_4(page4, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page8.Block2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage10(page10, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page8.Block3.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            set_page_9(page9, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page8.Block4.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            Set_page_11(page11, offers1, schedule2, info, flightinfo);
        }

        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed)
            {
                window.close();
            }


        }
        window.draw(MouseRect);
        window.clear();
        drawpage8(page8);
        window.display();


    }
}

void draw_page_9(PAGE9 page9)
{
    window.draw(page9.background);
    window.draw(page9.begin);
    window.draw(page9.Begin);
}
void set_page_9(PAGE9& page9, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;
    PAGE13 page13;

    page9.background.setTexture(bg9);
    page9.background.setScale(1.7, 1.7);
    page9.background.setPosition(-10, 0);
    page9.background.setOrigin(0, 0);

    page9.begin.setTexture(transbox);
    page9.begin.setPosition(868, 850);
    page9.begin.setScale(1.6, 1.6);

    page9.Begin.setFont(f2);
    page9.Begin.setFillColor(Color(39, 34, 99));
    page9.Begin.setCharacterSize(55);
    page9.Begin.setPosition(905, 855);
    page9.Begin.setString("BEGIN");
    //////////////////////////////////////
    while (window.isOpen())
    {
        Event event;
        MouseRect.setFillColor(Color(0, 0, 0, 0));
        MouseRect.setPosition(ms.getPosition().x - 5, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page9.begin.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            set_page_13(page13, offers1, schedule2, info, flightinfo);
        };
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.draw(MouseRect);
        window.display();
        draw_page_9(page9);
    }
}

void drawpage10(PAGE10 page10)
{
    window.draw(page10.background);
    window.draw(page10.Block);
    window.draw(page10.Begin);
}
void setpage10(PAGE10& page10, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE12 page12;
    page10.background.setTexture(bg10);
    page10.background.setScale(2, 2);
    page10.background.setPosition(0, 0);
    page10.background.setOrigin(0, 0);

    page10.Block.setTexture(transbox);
    page10.Block.setPosition(900, 800);
    page10.Block.setScale(1.7, 1.7);
    page10.Block.setOrigin(0, 0);

    page10.Begin.setFont(f2);
    page10.Begin.setCharacterSize(60);
    page10.Begin.setFillColor(Color(38, 34, 98));
    page10.Begin.setPosition(page10.Block.getPosition().x + 35, page10.Block.getPosition().y);
    page10.Begin.setString("BEGIN");

    MouseRect.setFillColor(sf::Color::Black);
    Mouse ms;
    while (window.isOpen())
    {
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        Event event;

        while (window.pollEvent(event))
        {
            if (MouseRect.getGlobalBounds().intersects(page10.Block.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                setpage12(page12, offers1, schedule2, info, flightinfo);
            }
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.draw(MouseRect);
        drawpage10(page10);
        window.display();
    }
}

void Draw_page_11(PAGE11 page11)
{
    window.draw(page11.bg11);
    window.draw(page11.beginbutton);
    window.draw(page11.beginButton);
}
void Set_page_11(PAGE11& page11, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE14 page14;

    page11.bg11.setTexture(background11);
    page11.bg11.setScale(2.3, 2.4);
    page11.bg11.setPosition(1920 / 2 - 10, 1080 / 2);
    page11.bg11.setOrigin(page11.bg11.getLocalBounds().width / 2, page11.bg11.getLocalBounds().height / 2);

    page11.beginbutton.setTexture(transbox);
    page11.beginbutton.setOrigin(page11.beginbutton.getLocalBounds().width / 2, page11.beginbutton.getLocalBounds().height / 2);
    page11.beginbutton.setPosition(1920 / 2 - 30, 1080 / 2 + 300);
    page11.beginbutton.setScale(1.7, 1.7);

    page11.beginButton.setFont(f2);
    page11.beginButton.setString("BEGIN");
    page11.beginButton.setCharacterSize(60);
    page11.beginButton.setOrigin(page11.beginbutton.getLocalBounds().width / 2, page11.beginbutton.getLocalBounds().height / 2);
    page11.beginButton.setPosition(page11.beginbutton.getPosition().x - 10, page11.beginbutton.getPosition().y - 15);
    page11.beginButton.setFillColor(Color(39, 34, 99));

    MouseRect.setFillColor(sf::Color::Black);
    Mouse ms;
    while (window.isOpen())
    {
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        Event event;

        while (window.pollEvent(event))
        {
            if (MouseRect.getGlobalBounds().intersects(page11.beginbutton.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                set_page14(page14, offers1, schedule2, info, flightinfo);
            }
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.draw(MouseRect);
        Draw_page_11(page11);
        window.display();
    }
}

void drawpage12(PAGE12 page12) {

    window.draw(page12.background);
    window.draw(page12.button1);
    window.draw(page12.button2);
    window.draw(page12.button3);
    window.draw(page12.button4);
    window.draw(page12.buttontext1);
    window.draw(page12.buttontext2);
    window.draw(page12.buttontext3);
    window.draw(page12.buttontext4);
    window.draw(page12.day);
    window.draw(page12.month);
    window.draw(page12.year);
    window.draw(page12.From);
    window.draw(page12.To);
    window.draw(page12.from_country12);
    window.draw(page12.to_country12);
    window.draw(page12.Fail);
}
void setpage12(PAGE12& page12, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE8 page8;
    SPLIT12 split12;
    COUNTRY12 country12;
    page12.background.setTexture(bg12);
    page12.background.setScale(1.8, 1.98);

    page12.button1.setTexture(transbox);
    page12.button1.setPosition(100, 950);
    page12.button1.setScale(1.5, 1.8);
    page12.button1.setOrigin(0, 0);

    page12.buttontext1.setFont(f2);
    page12.buttontext1.setString("Back");
    page12.buttontext1.setCharacterSize(55);
    page12.buttontext1.setPosition(page12.button1.getPosition().x + 45, page12.button1.getPosition().y + 15);
    page12.buttontext1.setFillColor(Color(38, 34, 98));

    page12.button2.setTexture(transbox);
    page12.button2.setPosition(1600, 950);
    page12.button2.setScale(1.5, 1.8);
    page12.button2.setOrigin(0, 0);

    page12.buttontext2.setFont(f2);
    page12.buttontext2.setString("Next");
    page12.buttontext2.setCharacterSize(55);
    page12.buttontext2.setPosition(page12.button2.getPosition().x + 45, page12.button2.getPosition().y + 15);
    page12.buttontext2.setFillColor(Color(38, 34, 98));

    page12.button3.setTexture(transbox);
    page12.button3.setPosition(620, 820);
    page12.button3.setScale(1.8, 1.6);
    page12.button3.setOrigin(0, 0);

    page12.buttontext3.setFont(f1);
    page12.buttontext3.setString("ECONOMY");
    page12.buttontext3.setCharacterSize(45);
    page12.buttontext3.setPosition(page12.button3.getPosition().x + 15, page12.button3.getPosition().y + 13);
    page12.buttontext3.setFillColor(Color(52, 77, 101));

    page12.button4.setTexture(transbox);
    page12.button4.setPosition(1000, 820);
    page12.button4.setScale(1.8, 1.6);
    page12.button4.setOrigin(0, 0);

    page12.buttontext4.setFont(f1);
    page12.buttontext4.setString("BUSINESS");
    page12.buttontext4.setCharacterSize(45);
    page12.buttontext4.setPosition(page12.button4.getPosition().x + 15, page12.button4.getPosition().y + 13);
    page12.buttontext4.setFillColor(Color(52, 77, 101));

    page12.day.setTexture(inputbox);
    page12.day.setPosition(550, 540);
    page12.day.setScale(0.9, 1.8);
    page12.day.setOrigin(0, 0);

    page12.month.setTexture(inputbox);
    page12.month.setPosition(870, 540);
    page12.month.setScale(0.9, 1.8);
    page12.month.setOrigin(0, 0);

    page12.year.setTexture(inputbox);
    page12.year.setPosition(1150, 540);
    page12.year.setScale(0.9, 1.8);
    page12.year.setOrigin(0, 0);

    page12.From.setTexture(desbox);
    page12.From.setPosition(225, 320);
    page12.From.setScale(1.8, 1.5);
    page12.From.setOrigin(0, 0);

    page12.To.setTexture(desbox);
    page12.To.setPosition(1200, 320);
    page12.To.setScale(1.8, 1.5);
    page12.To.setOrigin(0, 0);

    page12.Fail.setFillColor(Color(255, 0, 0));
    page12.Fail.setFont(f1);
    page12.Fail.setPosition(page12.button3.getPosition().x - 50, page12.button3.getPosition().y + 120);
    page12.Fail.setCharacterSize(45);

    // Dynamic
    MouseRect.setFillColor(Color(0, 0, 0, 0));
    string data[3];
    Text input[3];
    int count = 0;
    input[0].setPosition(page12.day.getPosition().x + 50, page12.day.getPosition().y);
    input[1].setPosition(page12.month.getPosition().x + 100, page12.month.getPosition().y);
    input[2].setPosition(page12.year.getPosition().x + 50, page12.year.getPosition().y);

    for (int i = 0; i < 3; i++)
    {
        input[i].setCharacterSize(45);
        input[i].setFillColor(Color(74, 127, 211));
        input[i].setFont(f1);
    }

    Mouse ms;
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page12.From.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            cout << page12.From.getPosition().x << endl;

            int x1 = set_split12(split12, page12.From.getPosition().x, page12.From.getPosition().y + 72, offers1, schedule2, info, flightinfo);
            string m1 = set_country12(country12, page12.From.getPosition().x, page12.From.getPosition().y + 72, x1, offers1, schedule2, info, flightinfo);

            page12.from_country12.setFont(f1);
            page12.from_country12.setString(m1);
            page12.from_country12.setFillColor(Color(39, 34, 99));
            page12.from_country12.setCharacterSize(25);
            page12.from_country12.setOrigin(page12.buttontext4.getLocalBounds().width / 2, page12.buttontext4.getLocalBounds().height / 2);
            page12.from_country12.setPosition(page12.From.getPosition().x + 110, page12.From.getPosition().y + 20);
        }
        if (MouseRect.getGlobalBounds().intersects(page12.To.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            cout << page12.To.getPosition().x << endl;

            int x2 = set_split12(split12, page12.To.getPosition().x, page12.To.getPosition().y + 72, offers1, schedule2, info, flightinfo);
            string m2 = set_country12(country12, page12.To.getPosition().x, page12.To.getPosition().y + 72, x2, offers1, schedule2, info, flightinfo);


            page12.to_country12.setFont(f1);
            page12.to_country12.setString(m2);
            page12.to_country12.setFillColor(Color(39, 34, 99));
            page12.to_country12.setCharacterSize(25);
            page12.to_country12.setOrigin(page12.buttontext4.getLocalBounds().width / 2, page12.buttontext4.getLocalBounds().height / 2);
            page12.to_country12.setPosition(page12.To.getPosition().x + 115, page12.To.getPosition().y + 20);
        }
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 3; i++)
        {
            input[i].setString(data[i]);
        }

        if (MouseRect.getGlobalBounds().intersects(page12.button1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage8(page8, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page12.button2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            for (int i = 0; i < 3; i++)
            {
                if (data[i].empty())
                {
                    page12.Fail.setString("-The box is empty,please Enter data,,,");
                    data[i].resize(0);
                }
            }
            // Classes
        }
        if (MouseRect.getGlobalBounds().intersects(page12.button3.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            page12.button3.setColor(Color(74, 127, 211));
            page12.button4.setColor(Color(255, 255, 255, 100));
        }
        if (MouseRect.getGlobalBounds().intersects(page12.button4.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            page12.button4.setColor(Color(74, 127, 211));
            page12.button3.setColor(Color(255, 255, 255, 100));
        }

        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed)
            {
                window.close();
            }
            if (event.type == Event::TextEntered)
            {
                data[count] += static_cast<char>(event.text.unicode);
            }
            if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
            {
                count++;
                count %= 3;
            }
            if (Keyboard::isKeyPressed(Keyboard::BackSpace) && data[count].size() > 0)
            {
                data[count].resize(data[count].size() - 1);
            }
        }
        window.clear();
        drawpage12(page12);
        for (int i = 0; i < 3; i++)
        {
            window.draw(input[i]);
        }
        window.draw(MouseRect);
        window.display();
        drawpage12(page12);

    }

}

void draw_page_13(PAGE13 page13)
{
    window.draw(page13.background);
    window.draw(page13.from);
    window.draw(page13.to);
    window.draw(page13.day);
    window.draw(page13.mounth);
    window.draw(page13.year);
    window.draw(page13.day1);
    window.draw(page13.mounth1);
    window.draw(page13.year1);
    window.draw(page13.economy);
    window.draw(page13.Economy);
    window.draw(page13.business);
    window.draw(page13.Business);
    window.draw(page13.next);
    window.draw(page13.Next);
    window.draw(page13.back);
    window.draw(page13.Back);

}
void set_page_13(PAGE13& page13, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;
    PAGE17 page17;
    PAGE8 page8;
    SPLIT13 split13;
    COUNTRY13 country13;

    page13.background.setTexture(bg13);
    page13.background.setScale(1.9, 1.9);
    page13.background.setPosition(-15, 0);
    page13.background.setOrigin(0, 0);

    page13.from.setTexture(desbox);
    page13.from.setPosition(250, 225);
    page13.from.setScale(1.8, 1.5);

    page13.to.setTexture(desbox);
    page13.to.setPosition(1240, 225);
    page13.to.setScale(1.8, 1.5);

    page13.day.setTexture(inputbox);
    page13.day.setPosition(725, 450);
    page13.day.setScale(1, 1.5);

    page13.mounth.setTexture(inputbox);
    page13.mounth.setPosition(1035, 450);
    page13.mounth.setScale(1, 1.5);

    page13.year.setTexture(inputbox);
    page13.year.setPosition(1300, 450);
    page13.year.setScale(1, 1.5);

    page13.day1.setTexture(inputbox);
    page13.day1.setPosition(740, 650);
    page13.day1.setScale(1, 1.5);

    page13.mounth1.setTexture(inputbox);
    page13.mounth1.setPosition(1035, 650);
    page13.mounth1.setScale(1, 1.5);

    page13.year1.setTexture(inputbox);
    page13.year1.setPosition(1300, 650);
    page13.year1.setScale(1, 1.5);

    page13.business.setTexture(transbox);
    page13.business.setPosition(1050, 840);
    page13.business.setScale(1.85, 1.6);
    page13.Business.setFont(f1);
    page13.Business.setFillColor(Color(52, 77, 101));
    page13.Business.setCharacterSize(45);
    page13.Business.setPosition(1070, 850);
    page13.Business.setString("BUSINESS");

    page13.economy.setTexture(transbox);
    page13.economy.setPosition(630, 840);
    page13.economy.setScale(1.85, 1.6);
    page13.Economy.setFont(f1);
    page13.Economy.setFillColor(Color(52, 77, 101));
    page13.Economy.setCharacterSize(45);
    page13.Economy.setPosition(650, 850);
    page13.Economy.setString("ECONOMY");

    page13.back.setTexture(transbox);
    page13.back.setPosition(127, 970);
    page13.back.setScale(1.5, 1.8);
    page13.Back.setFont(f2);
    page13.Back.setFillColor(Color(39, 34, 99));
    page13.Back.setCharacterSize(50);
    page13.Back.setPosition(180, 980);
    page13.Back.setString("Back");

    page13.next.setTexture(transbox);
    page13.next.setPosition(1650, 970);
    page13.next.setScale(1.5, 1.8);
    page13.Next.setFont(f2);
    page13.Next.setFillColor(Color(39, 34, 99));
    page13.Next.setCharacterSize(50);
    page13.Next.setPosition(1700, 980);
    page13.Next.setString("Next");

    /////////////////////////////////////////////////////////////////////////////////
    string data[6];
    Text inputdata[6];
    int count = 0;
    inputdata[0].setPosition(page13.day.getPosition().x + 80, page13.day.getPosition().y + 13);
    inputdata[1].setPosition(page13.mounth.getPosition().x + 80, page13.mounth.getPosition().y + 13);
    inputdata[2].setPosition(page13.year.getPosition().x + 60, page13.year.getPosition().y + 13);
    inputdata[3].setPosition(page13.day1.getPosition().x + 80, page13.day1.getPosition().y + 13);
    inputdata[4].setPosition(page13.mounth1.getPosition().x + 80, page13.mounth1.getPosition().y + 13);
    inputdata[5].setPosition(page13.year1.getPosition().x + 60, page13.year1.getPosition().y + 13);
    for (int i = 0; i < 6; i++)
    {
        inputdata[i].setCharacterSize(40);
        inputdata[i].setFillColor(Color(0, 0, 0));
        inputdata[i].setFont(f2);
    }
    MouseRect.setFillColor(Color(0, 0, 0, 0));
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page13.from.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            cout << page13.from.getPosition().x << endl;

            int x1 = set_split13(split13, page13.from.getPosition().x, page13.from.getPosition().y + 72, offers1, schedule2, info, flightinfo);
            string m1 = set_country13(country13, page13.from.getPosition().x, page13.from.getPosition().y + 72, x1, offers1, schedule2, info, flightinfo);

            page13.from_country13.setFont(f1);
            page13.from_country13.setString(m1);
            page13.from_country13.setFillColor(Color(39, 34, 99));
            page13.from_country13.setCharacterSize(30);
            page13.from_country13.setOrigin(page13.business.getLocalBounds().width / 2, page13.business.getLocalBounds().height / 2);
            page13.from_country13.setPosition(page13.from.getPosition().x - 170, page13.from.getPosition().y + 50);
        }
        if (MouseRect.getGlobalBounds().intersects(page13.to.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            cout << page13.to.getPosition().x << endl;

            int x2 = set_split13(split13, page13.to.getPosition().x, page13.to.getPosition().y + 72, offers1, schedule2, info, flightinfo);
            string m2 = set_country13(country13, page13.to.getPosition().x, page13.to.getPosition().y + 72, x2, offers1, schedule2, info, flightinfo);


            page13.to_country13.setFont(f1);
            page13.to_country13.setString(m2);
            page13.to_country13.setFillColor(Color(39, 34, 99));
            page13.to_country13.setCharacterSize(30);
            page13.to_country13.setOrigin(page13.business.getLocalBounds().width / 2, page13.business.getLocalBounds().height / 2);
            page13.to_country13.setPosition(page13.to.getPosition().x - 70, page13.to.getPosition().y - 15);
        }
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 6; i++)
        {
            inputdata[i].setString(data[i]);
        }
        if (MouseRect.getGlobalBounds().intersects(page13.back.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage8(page8, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page13.next.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            window.close();
        }


        if (MouseRect.getGlobalBounds().intersects(page13.economy.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            page13.economy.setColor(Color(134, 152, 187));
            page13.business.setColor(Color(249, 252, 255));
        }


        if (MouseRect.getGlobalBounds().intersects(page13.business.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {

            page13.business.setColor(Color(134, 152, 187));
            page13.economy.setColor(Color(249, 252, 255));


        }
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
            if (event.type == Event::TextEntered)
            {
                data[count] += static_cast<char>(event.text.unicode);
            }
            if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
            {
                count++;
                count %= 6;
            }
            if (Keyboard::isKeyPressed(Keyboard::BackSpace) && data[count].size() > 0)
            {
                data[count].resize(data[count].size() - 1);
            }
        }
        window.clear();
        draw_page_13(page13);
        for (int i = 0; i < 6; i++)
        {
            window.draw(inputdata[i]);
        }
        window.draw(MouseRect);
        window.display();
        draw_page_13(page13);
    }
}

void draw_page14(PAGE14 page14)
{
    window.draw(page14.background);
    window.draw(page14.flightnumbox);
    window.draw(page14.frombox);
    window.draw(page14.tobox);
    window.draw(page14.daybox);
    window.draw(page14.monthbox);
    window.draw(page14.yearbox);
    window.draw(page14.ecoclass);
    window.draw(page14.busclass);
    window.draw(page14.next_b);
    window.draw(page14.back_b);
    window.draw(page14.next_t);
    window.draw(page14.back_t);
    window.draw(page14.eco);
    window.draw(page14.bus);
    window.draw(page14.from_country);
    window.draw(page14.to_country);
    for (int i = 0; i < 5; i++)
    {
        window.draw(page14.block[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        window.draw(page14.contient[i]);
    }
}
void set_page14(PAGE14& page14, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    SPLIT split;
    COUNTRY country;
    PAGE8 page8;
    MouseRect.setFillColor(Color(0, 0, 0, 0));
    Mouse ms;

    page14.background.setTexture(bg14);
    page14.background.setScale(1.8, 1.9);
    page14.background.setPosition(1920 / 2 - 10, 1080 / 2);
    page14.background.setOrigin(page14.background.getLocalBounds().width / 2, page14.background.getLocalBounds().height / 2);

    page14.flightnumbox.setTexture(inputbox);
    page14.flightnumbox.setOrigin(page14.flightnumbox.getLocalBounds().width / 2, page14.flightnumbox.getLocalBounds().height / 2);
    page14.flightnumbox.setPosition(1920 / 2 - 330, 1080 / 2 - 220);
    page14.flightnumbox.setScale(1.8, 1.6);

    page14.frombox.setTexture(desbox);
    page14.frombox.setOrigin(page14.frombox.getLocalBounds().width / 2, page14.frombox.getLocalBounds().height / 2);
    page14.frombox.setPosition(1500 / 2 - 330, 1080 / 2 - 60);
    page14.frombox.setScale(1.5, 1.5);

    page14.tobox.setTexture(desbox);
    page14.tobox.setOrigin(page14.tobox.getLocalBounds().width / 2, page14.tobox.getLocalBounds().height / 2);
    page14.tobox.setPosition(1890 / 2 + 330, 1070 / 2 - 60);
    page14.tobox.setScale(1.7, 1.5);

    page14.daybox.setTexture(inputbox);
    page14.daybox.setOrigin(page14.daybox.getLocalBounds().width / 2, page14.daybox.getLocalBounds().height / 2);
    page14.daybox.setPosition(1920 / 2 - 250, 1080 / 2 + 100);
    page14.daybox.setScale(0.8, 1.6);

    page14.monthbox.setTexture(inputbox);
    page14.monthbox.setOrigin(page14.monthbox.getLocalBounds().width / 2, page14.monthbox.getLocalBounds().height / 2);
    page14.monthbox.setPosition(1920 / 2 + 200, 1080 / 2 + 100);
    page14.monthbox.setScale(0.8, 1.6);

    page14.yearbox.setTexture(inputbox);
    page14.yearbox.setOrigin(page14.yearbox.getLocalBounds().width / 2, page14.yearbox.getLocalBounds().height / 2);
    page14.yearbox.setPosition(1920 / 2 + 570, 1080 / 2 + 100);
    page14.yearbox.setScale(0.8, 1.6);

    page14.ecoclass.setTexture(transbox);
    page14.ecoclass.setOrigin(page14.ecoclass.getLocalBounds().width / 2, page14.ecoclass.getLocalBounds().height / 2);
    page14.ecoclass.setPosition(1920 / 2 - 260, 1080 / 2 + 240);
    page14.ecoclass.setScale(1.8, 1.6);

    page14.busclass.setTexture(transbox);
    page14.busclass.setOrigin(page14.busclass.getLocalBounds().width / 2, page14.busclass.getLocalBounds().height / 2);
    page14.busclass.setPosition(1920 / 2 + 260, 1080 / 2 + 240);
    page14.busclass.setScale(1.8, 1.6);

    page14.next_b.setTexture(transbox);
    page14.next_b.setOrigin(page14.next_b.getLocalBounds().width / 2, page14.next_b.getLocalBounds().height / 2);
    page14.next_b.setPosition(1920 / 2 + 750, 1080 / 2 + 450);
    page14.next_b.setScale(1.5, 1.8);

    page14.back_b.setTexture(transbox);
    page14.back_b.setOrigin(page14.back_b.getLocalBounds().width / 2, page14.back_b.getLocalBounds().height / 2);
    page14.back_b.setPosition(1920 / 2 - 750, 1080 / 2 + 450);
    page14.back_b.setScale(1.5, 1.8);

    page14.next_t.setFont(f2);
    page14.next_t.setString("Next");
    page14.next_t.setFillColor(Color(39, 34, 99));
    page14.next_t.setCharacterSize(50);
    page14.next_t.setOrigin(page14.next_t.getLocalBounds().width / 2, page14.next_t.getLocalBounds().height / 2);
    page14.next_t.setPosition(page14.next_b.getPosition().x, page14.next_b.getPosition().y - 15);

    page14.back_t.setFont(f2);
    page14.back_t.setString("Back");
    page14.back_t.setFillColor(Color(39, 34, 99));
    page14.back_t.setCharacterSize(50);
    page14.back_t.setOrigin(page14.next_t.getLocalBounds().width / 2, page14.next_t.getLocalBounds().height / 2);
    page14.back_t.setPosition(page14.back_b.getPosition().x, page14.back_b.getPosition().y - 15);

    page14.eco.setFont(f1);
    page14.eco.setString("ECONOMY");
    page14.eco.setFillColor(Color(52, 77, 101));
    page14.eco.setCharacterSize(45);
    page14.eco.setOrigin(page14.eco.getLocalBounds().width / 2, page14.eco.getLocalBounds().height / 2);
    page14.eco.setPosition(page14.ecoclass.getPosition().x, page14.ecoclass.getPosition().y - 15);

    page14.bus.setFont(f1);
    page14.bus.setString("BUSINESS");
    page14.bus.setFillColor(Color(52, 77, 101));
    page14.bus.setCharacterSize(45);
    page14.bus.setOrigin(page14.bus.getLocalBounds().width / 2, page14.bus.getLocalBounds().height / 2);
    page14.bus.setPosition(page14.busclass.getPosition().x, page14.busclass.getPosition().y - 15);
    ////////////////////////////////////////////
    string data[4];
    Text input[4];
    int count = 0;
    input[0].setPosition(page14.flightnumbox.getPosition().x - 40, page14.flightnumbox.getPosition().y - 25);
    input[1].setPosition(page14.daybox.getPosition().x - 10, page14.daybox.getPosition().y - 25);
    input[2].setPosition(page14.monthbox.getPosition().x - 10, page14.monthbox.getPosition().y - 25);
    input[3].setPosition(page14.yearbox.getPosition().x - 10, page14.yearbox.getPosition().y - 25);

    for (int i = 0; i < 4; i++)
    {
        input[i].setCharacterSize(45);
        input[i].setFillColor(Color(74, 127, 211));
        input[i].setFont(f1);
    }

    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page14.frombox.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            //cout << page14.frombox.getPosition().x << endl;
            int x1 = set_split(split, page14.frombox.getPosition().x, page14.frombox.getPosition().y + 72, offers1, schedule2, info, flightinfo);
            string m1 = set_country(country, page14.frombox.getPosition().x, page14.frombox.getPosition().y + 72, x1, offers1, schedule2, info, flightinfo);

            page14.from_country.setFont(f1);
            page14.from_country.setString(m1);
            page14.from_country.setFillColor(Color(39, 34, 99));
            page14.from_country.setCharacterSize(30);
            page14.from_country.setOrigin(page14.bus.getLocalBounds().width / 2, page14.bus.getLocalBounds().height / 2);
            page14.from_country.setPosition(page14.frombox.getPosition().x - 70, page14.frombox.getPosition().y - 8);
        }
        if (MouseRect.getGlobalBounds().intersects(page14.tobox.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            int x2 = set_split(split, page14.tobox.getPosition().x, page14.tobox.getPosition().y + 72, offers1, schedule2, info, flightinfo);
            string m2 = set_country(country, page14.tobox.getPosition().x, page14.tobox.getPosition().y + 72, x2, offers1, schedule2, info, flightinfo);

            page14.to_country.setFont(f1);
            page14.to_country.setString(m2);
            page14.to_country.setFillColor(Color(39, 34, 99));
            page14.to_country.setCharacterSize(30);
            page14.to_country.setOrigin(page14.bus.getLocalBounds().width / 2, page14.bus.getLocalBounds().height / 2);
            page14.to_country.setPosition(page14.tobox.getPosition().x - 70, page14.tobox.getPosition().y - 4);
        }
        for (int i = 0; i < 4; i++)
        {
            input[i].setString(data[i]);
        }
        if (MouseRect.getGlobalBounds().intersects(page14.back_b.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            /////
        }
        if (MouseRect.getGlobalBounds().intersects(page14.next_b.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            ////
        }

        // Classes

        if (MouseRect.getGlobalBounds().intersects(page14.ecoclass.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            page14.ecoclass.setColor(Color(74, 127, 211));
            page14.busclass.setColor(Color(255, 255, 255, 100));
        }
        if (MouseRect.getGlobalBounds().intersects(page14.busclass.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            page14.busclass.setColor(Color(74, 127, 211));
            page14.ecoclass.setColor(Color(255, 255, 255, 100));
        }

        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed)
            {
                window.close();
            }
            if (event.type == Event::TextEntered)
            {
                data[count] += static_cast<char>(event.text.unicode);
            }
            if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
            {
                count++;
                count %= 4;
            }
            if (Keyboard::isKeyPressed(Keyboard::BackSpace) && data[count].size() > 0)
            {
                data[count].resize(data[count].size() - 1);
            }
        }
        window.clear();
        draw_page14(page14);
        for (int i = 0; i < 4; i++)
        {
            window.draw(input[i]);
        }
        window.draw(MouseRect);
        window.display();
        draw_page14(page14);
    }
}

void Draw_page_15(PAGE15 page15)
{
    window.draw(page15.bg15);
    window.draw(page15.inputbutton);
    window.draw(page15.backbutton);
    window.draw(page15.nextbutton);
    window.draw(page15.nextButton);
    window.draw(page15.backButton);
    window.draw(page15.inputButton);
    window.draw(page15.fail);
}
void Set_page_15(PAGE15& page15, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;
    PAGE16 page16;
    PAGE19 page19;
    page15.bg15.setTexture(background15);
    page15.bg15.setScale(1.9, 2);
    page15.bg15.setPosition(1920 / 2, 1080 / 2);
    page15.bg15.setOrigin(page15.bg15.getLocalBounds().width / 2, page15.bg15.getLocalBounds().height / 2);

    page15.backbutton.setTexture(transbox);
    page15.backbutton.setOrigin(page15.backbutton.getLocalBounds().width / 2, page15.backbutton.getLocalBounds().height / 2);
    page15.backbutton.setPosition(1920 / 2 - 250, 1080 / 2 + 380);
    page15.backbutton.setScale(1.7, 1.7);

    page15.nextbutton.setTexture(transbox);
    page15.nextbutton.setOrigin(page15.nextbutton.getLocalBounds().width / 2, page15.nextbutton.getLocalBounds().height / 2);
    page15.nextbutton.setPosition(1920 / 2 + 250, 1080 / 2 + 380);
    page15.nextbutton.setScale(1.7, 1.7);

    page15.inputbutton.setTexture(inputbox);
    page15.inputbutton.setOrigin(page15.inputbutton.getLocalBounds().width / 2, page15.inputbutton.getLocalBounds().height / 2);
    page15.inputbutton.setPosition(1920 / 2 - 80, 1080 / 2 + 100);
    page15.inputbutton.setScale(1.9, 1.9);

    page15.nextButton.setFont(f4);
    page15.nextButton.setString("Next");
    page15.nextButton.setCharacterSize(60);
    page15.nextButton.setOrigin(page15.nextButton.getLocalBounds().width / 2, page15.nextButton.getLocalBounds().height / 2);
    page15.nextButton.setPosition(page15.nextbutton.getPosition().x + 5, page15.nextbutton.getPosition().y - 20);
    page15.nextButton.setFillColor(Color(39, 34, 99));

    page15.backButton.setFont(f4);
    page15.backButton.setString("Back");
    page15.backButton.setCharacterSize(60);
    page15.backButton.setOrigin(page15.backbutton.getLocalBounds().width / 2, page15.backbutton.getLocalBounds().height / 2);
    page15.backButton.setPosition(page15.backbutton.getPosition().x + 5, page15.backbutton.getPosition().y - 10);
    page15.backButton.setFillColor(Color(39, 34, 99));

    page15.inputButton.setFont(f4);
    page15.inputButton.setString("No. of Passengers :");
    page15.inputButton.setCharacterSize(60);
    page15.inputButton.setOrigin(page15.bg15.getLocalBounds().width / 2, page15.bg15.getLocalBounds().height / 2);
    page15.inputButton.setPosition(page15.bg15.getPosition().x - 330, page15.bg15.getPosition().y + 330);
    page15.inputButton.setFillColor(Color(39, 34, 99));

    page15.fail.setCharacterSize(25);
    page15.fail.setFillColor(Color(255, 0, 0));
    page15.fail.setFont(f1);
    page15.fail.setPosition(page15.inputbutton.getPosition().x - 200, page15.inputbutton.getPosition().y + 50);
    //////////////////////////////
    string data[1];
    Text inputdata[1];
    int count = 0;
    inputdata[0].setPosition(page15.inputbutton.getPosition().x - 50, page15.inputbutton.getPosition().y - 20);

    for (int i = 0; i < 1; i++)
    {
        inputdata[i].setCharacterSize(40);
        inputdata[i].setFillColor(Color(0, 0, 0));
        inputdata[i].setFont(f2);
    }
    MouseRect.setFillColor(Color(0, 0, 0, 0));
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 1; i++)
        {
            inputdata[i].setString(data[i]);
        }

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
            if (event.type == Event::TextEntered)
            {
                data[count] += static_cast<char>(event.text.unicode);
            }
            if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
            {
                count++;
                count %= 1;
            }
            if (Keyboard::isKeyPressed(Keyboard::BackSpace) && data[count].size() > 0)
            {
                data[count].resize(data[count].size() - 1);
            }
            if (MouseRect.getGlobalBounds().intersects(page15.nextbutton.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {

                if (data[0].empty())
                {
                    page15.fail.setString("-The box is empty,please Enter data,,,");
                    data[0].resize(0);
                }
                else
                {
                    if (stoi(data[0]) < 1 || stoi(data[0]) > 7)
                    {
                        page15.fail.setString("-invalied information,please try again,,,\n(The maximum number of passengers is 7)");
                        data[0].resize(0);
                    }
                    else
                    {
                        for (int j = 0; j < stoi(data[0]); j++)
                        {
                            Set_page_16(page16, offers1, schedule2, info, flightinfo);
                            /*if (passengers[I].level == "BUSINESS")
                                finalpage5(BusinessClass, passengers, j);
                            else if (passengers[I].level == "ECONOMY")
                                finalpage6(EconomyClass, passengers, j);*/
                        }

                        /* passengers[I].user = info[USER].email;*/
                        flight1.passengers_number = stoi(data[0]);
                        setpage19(page19, offers1, schedule2, info, flightinfo);
                    }
                }
            }
        }
        window.clear();
        Draw_page_15(page15);
        for (int i = 0; i < 1; i++)
        {
            window.draw(inputdata[i]);
        }
        window.draw(MouseRect);
        window.display();
        Draw_page_15(page15);
    }
}

void Draw_page_16(PAGE16 page16)
{
    window.draw(page16.bg16);
    window.draw(page16.firstname);
    window.draw(page16.lastname);
    window.draw(page16.title);
    window.draw(page16.passportid);
    window.draw(page16.day);
    window.draw(page16.month);
    window.draw(page16.year);
    window.draw(page16.female);
    window.draw(page16.male);
    window.draw(page16.femaleButton);
    window.draw(page16.maleButton);
    window.draw(page16.backbutton);
    window.draw(page16.nextbutton);
    window.draw(page16.nextButton);
    window.draw(page16.backButton);
    window.draw(page16.fail);
}
void Set_page_16(PAGE16& page16, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE17 page17;
    PAGE18 page18;
    page16.bg16.setTexture(background16);
    page16.bg16.setScale(2.2, 2.2);
    page16.bg16.setPosition(1920 / 2 - 10, 1080 / 2);
    page16.bg16.setOrigin(page16.bg16.getLocalBounds().width / 2, page16.bg16.getLocalBounds().height / 2);

    page16.firstname.setTexture(inputbox);
    page16.firstname.setOrigin(page16.firstname.getLocalBounds().width / 2, page16.firstname.getLocalBounds().height / 2);
    page16.firstname.setPosition(1920 / 2 - 350, 1080 / 2 - 255);
    page16.firstname.setScale(2, 1.6);

    page16.lastname.setTexture(inputbox);
    page16.lastname.setOrigin(page16.lastname.getLocalBounds().width / 2, page16.lastname.getLocalBounds().height / 2);
    page16.lastname.setPosition(1920 / 2 - 350, 1080 / 2 - 80);
    page16.lastname.setScale(2, 1.6);

    page16.title.setTexture(inputbox);
    page16.title.setOrigin(page16.title.getLocalBounds().width / 2, page16.title.getLocalBounds().height / 2);
    page16.title.setPosition(1920 / 2 - 350, 1080 / 2 + 80);
    page16.title.setScale(2, 1.6);

    page16.passportid.setTexture(inputbox);
    page16.passportid.setOrigin(page16.passportid.getLocalBounds().width / 2, page16.passportid.getLocalBounds().height / 2);
    page16.passportid.setPosition(1920 / 2 - 350, 1080 / 2 + 250);
    page16.passportid.setScale(2, 1.6);

    page16.day.setTexture(inputbox);
    page16.day.setOrigin(page16.day.getLocalBounds().width / 2, page16.day.getLocalBounds().height / 2);
    page16.day.setPosition(1920 / 2 + 205, 1080 / 2 - 100);
    page16.day.setScale(0.5, 1.5);

    page16.month.setTexture(inputbox);
    page16.month.setOrigin(page16.month.getLocalBounds().width / 2, page16.month.getLocalBounds().height / 2);
    page16.month.setPosition(1920 / 2 + 425, 1080 / 2 - 100);
    page16.month.setScale(0.5, 1.5);

    page16.year.setTexture(inputbox);
    page16.year.setOrigin(page16.year.getLocalBounds().width / 2, page16.year.getLocalBounds().height / 2);
    page16.year.setPosition(1920 / 2 + 620, 1080 / 2 - 100);
    page16.year.setScale(0.5, 1.5);

    page16.female.setTexture(inputbox);
    page16.female.setOrigin(page16.female.getLocalBounds().width / 2, page16.female.getLocalBounds().height / 2);
    page16.female.setPosition(1920 / 2 + 270, 1080 / 2 + 200);
    page16.female.setScale(1.2, 1.5);

    page16.male.setTexture(inputbox);
    page16.male.setOrigin(page16.male.getLocalBounds().width / 2, page16.male.getLocalBounds().height / 2);
    page16.male.setPosition(1920 / 2 + 670, 1080 / 2 + 200);
    page16.male.setScale(1.2, 1.5);

    page16.femaleButton.setFont(f2);
    page16.femaleButton.setString("Female");
    page16.femaleButton.setCharacterSize(50);
    page16.femaleButton.setOrigin(page16.femaleButton.getLocalBounds().width / 2, page16.femaleButton.getLocalBounds().height / 2);
    page16.femaleButton.setPosition(page16.female.getPosition().x, page16.female.getPosition().y - 15);
    page16.femaleButton.setFillColor(Color(39, 34, 99));

    page16.maleButton.setFont(f2);
    page16.maleButton.setString("Male");
    page16.maleButton.setCharacterSize(50);
    page16.maleButton.setOrigin(page16.maleButton.getLocalBounds().width / 2, page16.maleButton.getLocalBounds().height / 2);
    page16.maleButton.setPosition(page16.male.getPosition().x, page16.male.getPosition().y - 15);
    page16.maleButton.setFillColor(Color(39, 34, 99));

    page16.backbutton.setTexture(transbox);
    page16.backbutton.setOrigin(page16.backbutton.getLocalBounds().width / 2, page16.backbutton.getLocalBounds().height / 2);
    page16.backbutton.setPosition(1920 / 2 - 700, 1080 / 2 + 450);
    page16.backbutton.setScale(1.7, 1.7);

    page16.nextbutton.setTexture(transbox);
    page16.nextbutton.setOrigin(page16.nextbutton.getLocalBounds().width / 2, page16.nextbutton.getLocalBounds().height / 2);
    page16.nextbutton.setPosition(1920 / 2 + 700, 1080 / 2 + 450);
    page16.nextbutton.setScale(1.7, 1.7);

    page16.nextButton.setFont(f4);
    page16.nextButton.setString("Next");
    page16.nextButton.setCharacterSize(60);
    page16.nextButton.setOrigin(page16.nextButton.getLocalBounds().width / 2, page16.nextButton.getLocalBounds().height / 2);
    page16.nextButton.setPosition(page16.nextbutton.getPosition().x, page16.nextbutton.getPosition().y - 20);
    page16.nextButton.setFillColor(Color(39, 34, 99));

    page16.backButton.setFont(f4);
    page16.backButton.setString("Back");
    page16.backButton.setCharacterSize(60);
    page16.backButton.setOrigin(page16.backButton.getLocalBounds().width / 2, page16.backButton.getLocalBounds().height / 2);
    page16.backButton.setPosition(page16.backbutton.getPosition().x, page16.backbutton.getPosition().y - 20);
    page16.backButton.setFillColor(Color(39, 34, 99));


    //////////////////////////////////////////////////////////////
    MouseRect.setFillColor(Color(0, 0, 0, 0));
    Mouse ms;
    string data[7];
    Text inputdata[7];
    int count = 0;
    inputdata[0].setPosition(page16.firstname.getPosition().x - 70, page16.firstname.getPosition().y - 20);
    inputdata[1].setPosition(page16.lastname.getPosition().x - 70, page16.lastname.getPosition().y - 20);
    inputdata[2].setPosition(page16.title.getPosition().x + -40, page16.title.getPosition().y - 20);
    inputdata[3].setPosition(page16.passportid.getPosition().x - 100, page16.passportid.getPosition().y - 20);
    inputdata[4].setPosition(page16.day.getPosition().x - 20, page16.day.getPosition().y - 25);
    inputdata[5].setPosition(page16.month.getPosition().x - 20, page16.month.getPosition().y - 25);
    inputdata[6].setPosition(page16.year.getPosition().x - 40, page16.year.getPosition().y - 25);

    for (int i = 0; i < 7; i++)
    {
        inputdata[i].setCharacterSize(40);
        inputdata[i].setFillColor(Color(0, 0, 0));
        inputdata[i].setFont(f2);
    }
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 7; i++)
        {
            inputdata[i].setString(data[i]);
        }
        if (MouseRect.getGlobalBounds().intersects(page16.femaleButton.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            page16.female.setColor(Color(134, 152, 187));
            page16.male.setColor(Color(249, 252, 255));
        }
        if (MouseRect.getGlobalBounds().intersects(page16.maleButton.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            page16.male.setColor(Color(134, 152, 187));
            page16.female.setColor(Color(249, 252, 255));
        }
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
            if (event.type == Event::TextEntered)
            {
                if (count > 3 && count < 7)
                {
                    if (isdigit(static_cast<char>(event.text.unicode)))
                        data[count] += static_cast<char>(event.text.unicode);
                }
                else
                    data[count] += static_cast<char>(event.text.unicode);
            }
            if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
            {
                count++;
                count %= 7;
            }
            if (count > 3 && count < 7)
            {
                if (event.type == Event::KeyReleased && event.key.code == Keyboard::BackSpace && data[count].size() > 0)
                {
                    data[count].resize(data[count].size() - 1);
                }
            }
            else
            {
                if (Keyboard::isKeyPressed(Keyboard::BackSpace) && data[count].size() > 0)
                {
                    data[count].resize(data[count].size() - 1);
                }
            }
            if (MouseRect.getGlobalBounds().intersects(page16.female.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                passenger1.gender = "female";
                page16.female.setColor(Color(134, 152, 187));
                page16.male.setColor(Color(249, 252, 255));

            }
            if (MouseRect.getGlobalBounds().intersects(page16.male.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                passenger1.gender = "male";
                page16.male.setColor(Color(134, 152, 187));
                page16.female.setColor(Color(249, 252, 255));
            }
            if (MouseRect.getGlobalBounds().intersects(page16.nextbutton.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                bool check = false;
                for (int i = 0; i < 7; i++)
                {
                    if (data[i].empty())
                        break;
                    else
                        check = true;
                }
                if (!check)
                {
                    page16.fail.setString("-invalied information,please try again,,,");
                    for (int i = 0; i < 7; i++)
                    {
                        data[i].resize(0);
                    }

                }
                else
                {

                    passenger1.first_name = data[0];
                    passenger1.last_name = data[1];
                    passenger1.title = data[2];
                    passenger1.passport_id = data[3];
                    passenger1.birthdate.Day = stoi(data[4]);
                    passenger1.birthdate.Month = stoi(data[5]);
                    passenger1.birthdate.Year = stoi(data[6]);
                    if (flight1.level == "ECONOMY")
                        set_page_17(page17, offers1, schedule2, info, flightinfo);
                    else if (flight1.level == "BUSINESS")
                        set_page_18(page18, offers1, schedule2, info, flightinfo);

                    return;

                }
            }
        }
        window.clear();
        Draw_page_16(page16);
        for (int i = 0; i < 7; i++)
        {
            window.draw(inputdata[i]);
        }
        window.draw(MouseRect);
        window.display();
        Draw_page_16(page16);
    }
}

void draw_page_17(PAGE17 page17)
{
    window.draw(page17.background);
    //window.draw(page17.smapbusiness);
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 5; j++)
        {
            window.draw(page17.seats_b[i][j]);
        }


    }
    window.draw(page17.fail);
    window.draw(page17.Fail);

    window.draw(page17.next);
    window.draw(page17.Next);
}
void set_page_17(PAGE17& page17, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    string s1, s2;
    Mouse ms;
    PAGE18 page18;
    page17.background.setTexture(bg17);
    page17.background.setScale(1.8, 1.8);
    page17.background.setPosition(0, 0);
    page17.background.setOrigin(0, 0);

    page17.seats_b[0][0].setTexture(seatsbg18);
    page17.seats_b[0][0].setOrigin(page17.seats_b[0][0].getLocalBounds().width / 4, page17.seats_b[0][0].getLocalBounds().height / 4);
    page17.seats_b[0][0].setPosition(350, 480);
    page17.seats_b[0][0].setScale(0.2, 0.2);
    page17.seats_b[0][0].setColor(Color::White);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 1)
            {
                page17.seats_b[i][j].setTexture(seatsbg18);
                page17.seats_b[i][j].setOrigin(page17.seats_b[i][j].getLocalBounds().width / 4, page17.seats_b[i][j].getLocalBounds().height / 4);
                page17.seats_b[i][j].setPosition(page17.seats_b[0][0].getPosition().x + (j * 50), page17.seats_b[0][0].getPosition().y + (40 * i));
                page17.seats_b[i][j].setScale(0.3, 0.3);
                page17.seats_b[i][j].setColor(Color::White);
            }
            else if (i == 2)
            {
                page17.seats_b[i][j].setTexture(seatsbg18);
                page17.seats_b[i][j].setOrigin(page17.seats_b[i][j].getLocalBounds().width / 4, page17.seats_b[i][j].getLocalBounds().height / 4);
                page17.seats_b[i][j].setPosition(page17.seats_b[0][0].getPosition().x + (j * 50), page17.seats_b[0][0].getPosition().y + (60 * i));
                page17.seats_b[i][j].setScale(0.3, 0.3);
                page17.seats_b[i][j].setColor(Color::White);
            }
            else if (i == 3)
            {
                page17.seats_b[i][j].setTexture(seatsbg18);
                page17.seats_b[i][j].setOrigin(page17.seats_b[i][j].getLocalBounds().width / 4, page17.seats_b[i][j].getLocalBounds().height / 4);
                page17.seats_b[i][j].setPosition(page17.seats_b[0][0].getPosition().x + (j * 50), page17.seats_b[2][0].getPosition().y + (13 * i));
                page17.seats_b[i][j].setScale(0.3, 0.3);
                page17.seats_b[i][j].setColor(Color::White);
            }
        }
    }
    page17.fail.setTexture(transbox);
    page17.fail.setPosition(630, 470);
    page17.fail.setScale(8, 4);
    page17.fail.setColor(Color(0, 0, 0, 0));

    page17.next.setTexture(transbox);
    page17.next.setPosition(1650, 970);
    page17.next.setScale(1.4, 1.4);
    page17.Next.setFont(f2);
    page17.Next.setFillColor(Color::Black);
    page17.Next.setCharacterSize(45);
    page17.Next.setPosition(1690, 980);
    page17.Next.setString("Next");
    /////////////////////////////////////

    MouseRect.setFillColor(Color(0, 0, 0, 0));
    while (window.isOpen())
    {
        Event event;

        if (MouseRect.getGlobalBounds().intersects(page17.fail.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            page17.Fail.setFont(f2);
            page17.Fail.setFillColor(Color::Red);
            page17.Fail.setCharacterSize(45);
            page17.Fail.setPosition(250, 880);
            page17.Fail.setString("Please modify the class of your reservation");
        }
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y - 20);
        if (MouseRect.getGlobalBounds().intersects(page17.next.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            if (passenger1.seats == "0")
                page17.Fail.setString("Please choose seat");
            else
                return;
        }
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
            for (int i = 0; i < 4; i++)
            {

                for (int j = 0; j < 5; j++)
                {
                    if (MouseRect.getGlobalBounds().intersects(page17.seats_b[i][j].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
                    {
                        cout << i << "\t" << j << endl;
                        page17.seats_b[i][j].setColor(Color(38, 34, 98));
                        if (i == 0)
                            s1 = "F";
                        else if (i == 1)
                            s1 = "E";
                        else if (i == 2)
                            s1 = "B";
                        else if (i == 3)
                            s1 = "A";
                        s2 = to_string(j + 1);
                        passenger1.seats = s1 + s2;
                        flight1.passengers.push_back(passenger1);
                        for (int a = 0; a < 4; a++)
                        {

                            for (int b = 0; b < 5; b++)
                            {
                                if (a == i && b == j)
                                {
                                    continue;
                                }
                                else
                                    page17.seats_b[a][b].setColor(Color::White);
                            }

                        }
                    }
                }

            }
        }
        window.clear();
        draw_page_17(page17);
        window.draw(MouseRect);
        window.display();
        draw_page_17(page17);
    }

}

void draw_page_18(PAGE18 page18)
{
    window.draw(page18.background);
    //window.draw(page18.smapeconomy);
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 15; j++)
        {
            window.draw(page18.seats_e[i][j]);

        }

    }
    window.draw(page18.fail);
    window.draw(page18.Fail);
    window.draw(page18.next);
    window.draw(page18.Next);
}
void set_page_18(PAGE18& page18, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    string s1, s2;
    Mouse ms;
    //PAGE22 page22;

    page18.background.setTexture(bg18);
    page18.background.setScale(1.5, 1.6);
    page18.background.setPosition(0, 0);
    page18.background.setOrigin(0, 0);

    page18.smapeconomy.setTexture(inputbox);
    page18.smapeconomy.setPosition(700, 250);
    page18.smapeconomy.setScale(1.4, 1.4);

    page18.seats_e[0][0].setTexture(seatsbg18);
    page18.seats_e[0][0].setOrigin(page18.seats_e[0][0].getLocalBounds().width / 4, page18.seats_e[0][0].getLocalBounds().height / 4);
    page18.seats_e[0][0].setPosition(610, 496);
    page18.seats_e[0][0].setScale(0.092, 0.5);
    page18.seats_e[0][0].setColor(Color::Blue);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (i == 0 || i == 1)
            {
                page18.seats_e[i][j].setTexture(seatsbg18);
                page18.seats_e[i][j].setOrigin(page18.seats_e[i][j].getLocalBounds().width / 4, page18.seats_e[i][j].getLocalBounds().height / 4);
                page18.seats_e[i][j].setPosition(page18.seats_e[0][0].getPosition().x + (j * 71), page18.seats_e[0][0].getPosition().y + (40 * i));
                page18.seats_e[i][j].setScale(0.3, 0.3);
                page18.seats_e[i][j].setColor(Color::White);
            }
            else if (i == 2)
            {
                page18.seats_e[i][j].setTexture(seatsbg18);
                page18.seats_e[i][j].setOrigin(page18.seats_e[i][j].getLocalBounds().width / 4, page18.seats_e[i][j].getLocalBounds().height / 4);
                page18.seats_e[i][j].setPosition(page18.seats_e[0][0].getPosition().x + (j * 71), page18.seats_e[0][0].getPosition().y + (60 * i));
                page18.seats_e[i][j].setScale(0.3, 0.3);
                page18.seats_e[i][j].setColor(Color::White);
            }
            else if (i == 3)
            {
                page18.seats_e[i][j].setTexture(seatsbg18);
                page18.seats_e[i][j].setOrigin(page18.seats_e[i][j].getLocalBounds().width / 4, page18.seats_e[i][j].getLocalBounds().height / 4);
                page18.seats_e[i][j].setPosition(page18.seats_e[0][0].getPosition().x + (j * 71), page18.seats_e[2][0].getPosition().y + (13 * i));
                page18.seats_e[i][j].setScale(0.3, 0.3);
                page18.seats_e[i][j].setColor(Color::White);
            }
        }
    }
    page18.fail.setTexture(transbox);
    page18.fail.setPosition(330, 470);
    page18.fail.setScale(1, 6);
    page18.fail.setColor(Color(0, 0, 0, 0));


    page18.next.setTexture(transbox);
    page18.next.setPosition(1650, 970);
    page18.next.setScale(1.4, 1.4);
    page18.Next.setFont(f2);
    page18.Next.setFillColor(Color::Black);
    page18.Next.setCharacterSize(45);
    page18.Next.setPosition(1690, 980);
    page18.Next.setString("Next");
    ///////////////////////////////////////////////////////////////

    MouseRect.setFillColor(Color(0, 0, 0, 0));
    while (window.isOpen())
    {
        Event event;

        if (MouseRect.getGlobalBounds().intersects(page18.fail.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            page18.Fail.setFont(f2);
            page18.Fail.setFillColor(Color::Red);
            page18.Fail.setCharacterSize(45);
            page18.Fail.setPosition(250, 880);
            page18.Fail.setString("Please modify the class of your reservation");
        }
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page18.next.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            if (passenger1.seats == "0")
                page18.Fail.setString("Please choose seat");
            else
                return;
        }
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
            for (int i = 0; i < 4; i++)
            {

                for (int j = 0; j < 15; j++)
                {
                    if (MouseRect.getGlobalBounds().intersects(page18.seats_e[i][j].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
                    {
                        cout << i << "\t" << j << endl;
                        page18.seats_e[i][j].setColor(Color(38, 34, 98));
                        if (i == 0)
                            s1 = "D";
                        else if (i == 1)
                            s1 = "C";
                        else if (i == 2)
                            s1 = "B";
                        else if (i == 3)
                            s1 = "A";
                        s2 = to_string(j + 6);
                        passenger1.seats = s1 + s2;
                        flight1.passengers.push_back(passenger1);
                        for (int a = 0; a < 4; a++)
                        {

                            for (int b = 0; b < 15; b++)
                            {
                                if (a == i && b == j)
                                {
                                    continue;
                                }
                                else
                                    page18.seats_e[a][b].setColor(Color::White);
                            }

                        }

                    }
                }

            }
        }
        window.clear();
        draw_page_18(page18);
        window.draw(MouseRect);
        window.display();
        draw_page_18(page18);
    }
}

void drawpage19(PAGE19 page19) {

    window.draw(page19.background);
    window.draw(page19.Block1);
    window.draw(page19.Block2);
    window.draw(page19.Block3);
    window.draw(page19.cash);
    window.draw(page19.Digital);
    window.draw(page19.Back);
}
void setpage19(PAGE19& page19, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo) {
    PAGE4 page4;
    PAGE20 page20;
    PAGE21 page21;

    page19.background.setTexture(bg19);
    page19.background.setScale(2, 2.1);
    page19.background.setPosition(0, 0);
    page19.background.setOrigin(0, 0);

    page19.Block1.setTexture(transbox);
    page19.Block1.setPosition(1250, 550);
    page19.Block1.setScale(2, 1.8);
    page19.Block1.setOrigin(0, 0);

    page19.cash.setFont(f2);
    page19.cash.setCharacterSize(48);
    page19.cash.setFillColor(Color(38, 34, 98));
    page19.cash.setPosition(page19.Block1.getPosition().x + 100, page19.Block1.getPosition().y + 14);
    page19.cash.setString("Cash");

    page19.Block2.setTexture(transbox);
    page19.Block2.setPosition(400, 550);
    page19.Block2.setScale(2, 1.8);
    page19.Block2.setOrigin(0, 0);

    page19.Digital.setFont(f2);
    page19.Digital.setCharacterSize(40);
    page19.Digital.setFillColor(Color(38, 34, 98));
    page19.Digital.setPosition(page19.Block2.getPosition().x + 17, page19.Block2.getPosition().y + 15);
    page19.Digital.setString("Digital Wallet");

    page19.Block3.setTexture(transbox);
    page19.Block3.setPosition(850, 850);
    page19.Block3.setScale(1.7, 1.8);
    page19.Block3.setOrigin(0, 0);

    page19.Back.setFont(f2);
    page19.Back.setCharacterSize(60);
    page19.Back.setFillColor(Color(38, 34, 98));
    page19.Back.setPosition(page19.Block3.getPosition().x + 55, page19.Block3.getPosition().y + 8);
    page19.Back.setString("Back");

    MouseRect.setFillColor(sf::Color::Black);
    Mouse ms;
    while (window.isOpen())
    {
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        Event event;

        if (MouseRect.getGlobalBounds().intersects(page19.Block2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage20(page20, offers1, schedule2, info, flightinfo);
        }

        if (MouseRect.getGlobalBounds().intersects(page19.Block1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage21(page21, offers1, schedule2, info, flightinfo);
        }

        if (MouseRect.getGlobalBounds().intersects(page19.Block3.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            Set_page_4(page4, offers1, schedule2, info, flightinfo);
        }

        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.draw(MouseRect);
        drawpage19(page19);
        window.display();
    }

}

void drawpage20(PAGE20 page20) {

    window.draw(page20.background);
    window.draw(page20.Block1);
    window.draw(page20.Block2);
    window.draw(page20.Back);
    window.draw(page20.Pay);
    window.draw(page20.Block3);
    window.draw(page20.Block4);
    window.draw(page20.Block5);
    window.draw(page20.Fail);
}
void setpage20(PAGE20& page20, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo) {
    PAGE22 page22;
    PAGE19 page19;
    page20.background.setTexture(bg20);
    page20.background.setScale(3.2, 3.3);
    page20.background.setPosition(0, 0);
    page20.background.setOrigin(0, 0);

    page20.Block1.setTexture(transbox);
    page20.Block1.setPosition(100, 950);
    page20.Block1.setScale(1.5, 1.8);
    page20.Block1.setOrigin(0, 0);

    page20.Back.setFont(f2);
    page20.Back.setString("Back");
    page20.Back.setCharacterSize(55);
    page20.Back.setPosition(page20.Block1.getPosition().x + 40, page20.Block1.getPosition().y + 10);
    page20.Back.setFillColor(Color(38, 34, 98));

    page20.Block2.setTexture(transbox);
    page20.Block2.setPosition(1600, 950);
    page20.Block2.setScale(1.5, 1.8);
    page20.Block2.setOrigin(0, 0);

    page20.Pay.setFont(f2);
    page20.Pay.setString("Pay");
    page20.Pay.setCharacterSize(55);
    page20.Pay.setPosition(page20.Block2.getPosition().x + 60, page20.Block2.getPosition().y + 10);
    page20.Pay.setFillColor(Color(38, 34, 98));

    page20.Block3.setTexture(block);
    page20.Block3.setPosition(400, 380);
    page20.Block3.setScale(5, 2);
    page20.Block3.setOrigin(0, 0);

    page20.Block4.setTexture(block);
    page20.Block4.setPosition(400, 620);
    page20.Block4.setScale(2.7, 1.5);
    page20.Block4.setOrigin(0, 0);

    page20.Block5.setTexture(block);
    page20.Block5.setPosition(1090, 620);
    page20.Block5.setScale(2, 1.5);
    page20.Block5.setOrigin(0, 0);

    page20.Fail.setFillColor(Color(255, 0, 0));
    page20.Fail.setFont(f1);
    page20.Fail.setPosition(page20.Block4.getPosition().x + 255, page20.Block4.getPosition().y + 120);

    // Dynamic

    string data[3];
    Text input[3];
    int count = 0;
    input[0].setPosition(page20.Block3.getPosition().x, page20.Block3.getPosition().y + 20);
    input[1].setPosition(page20.Block4.getPosition().x, page20.Block4.getPosition().y);
    input[2].setPosition(page20.Block5.getPosition().x, page20.Block5.getPosition().y);

    for (int i = 0; i < 3; i++)
    {

        input[i].setCharacterSize(50);
        input[i].setFillColor(Color(74, 127, 211));
        input[i].setFont(f1);
    }
    Mouse ms;
    while (window.isOpen())
    {
        Event event;

        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 3; i++)
        {
            input[i].setString(data[i]);
        }
        if (MouseRect.getGlobalBounds().intersects(page20.Block1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage19(page19, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page20.Block2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            for (int i = 0; i < 3; i++)
            {
                if (data[i].empty())
                {
                    page20.Fail.setString("-The box is empty,please Enter data,,,");
                    data[i].resize(0);
                }
            }

            set_page_22(page22, offers1, schedule2, info, flightinfo);
        }
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }

            if (event.type == Event::TextEntered)
            {
                data[count] += static_cast<char>(event.text.unicode);
            }
            if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
            {
                count++;
                count %= 3;
            }
            if (Keyboard::isKeyPressed(Keyboard::BackSpace) && data[count].size() > 0)
            {
                data[count].resize(data[count].size() - 1);
            }
        }
        window.clear();
        drawpage20(page20);
        for (int i = 0; i < 3; i++)
        {
            window.draw(input[i]);
        }
        window.display();
    }
}

void drawpage21(PAGE21 page21) {

    window.draw(page21.background);
    window.draw(page21.Block1);
    window.draw(page21.Add1);
    window.draw(page21.Block2);
    window.draw(page21.Add2);
    window.draw(page21.Block3);
    window.draw(page21.Back);

}
void setpage21(PAGE21& page21, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE19 page19;
    PAGE22 page22;
    page21.background.setTexture(bg21);
    page21.background.setScale(1.98, 1.98);
    page21.background.setPosition(0, 0);
    page21.background.setOrigin(0, 0);

    page21.Block1.setTexture(block);
    page21.Block1.setPosition(200, 650);
    page21.Block1.setScale(3.5, 2.0);
    page21.Block1.setOrigin(0, 0);

    page21.Add1.setFont(f1);
    page21.Add1.setCharacterSize(45);
    page21.Add1.setFillColor(Color(38, 34, 98));
    page21.Add1.setPosition(page21.Block1.getPosition().x + 10, page21.Block1.getPosition().y + 10);
    page21.Add1.setString("10 Talat Harb Street,12th \n floor masr el gedida");

    page21.Block2.setTexture(block);
    page21.Block2.setPosition(1100, 650);
    page21.Block2.setScale(3.0, 2.0);
    page21.Block2.setOrigin(0, 0);

    page21.Add2.setFont(f1);
    page21.Add2.setCharacterSize(45);
    page21.Add2.setFillColor(Color(38, 34, 98));
    page21.Add2.setPosition(page21.Block2.getPosition().x + 10, page21.Block2.getPosition().y + 10);
    page21.Add2.setString("25 Kasr El Nil Street \n Down Town");

    page21.Block3.setTexture(transbox);
    page21.Block3.setPosition(100, 950);
    page21.Block3.setScale(1.5, 1.8);
    page21.Block3.setOrigin(0, 0);

    page21.Back.setFont(f2);
    page21.Back.setString("Back");
    page21.Back.setCharacterSize(55);
    page21.Back.setPosition(page21.Block3.getPosition().x + 50, page21.Block3.getPosition().y + 10);
    page21.Back.setFillColor(Color(38, 34, 98));

    MouseRect.setFillColor(sf::Color::Black);
    Mouse ms;
    while (window.isOpen())
    {
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        Event event;

        if (MouseRect.getGlobalBounds().intersects(page21.Block3.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage19(page19, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page21.Block1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            page21.Block1.setColor(Color(74, 127, 211));
            page21.Block2.setColor(Color(255, 255, 255, 80));
            set_page_22(page22, offers1, schedule2, info, flightinfo);

        }
        if (MouseRect.getGlobalBounds().intersects(page21.Block2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            page21.Block2.setColor(Color(74, 127, 211));
            page21.Block1.setColor(Color(255, 255, 255, 80));
            set_page_22(page22, offers1, schedule2, info, flightinfo);
        }

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.draw(MouseRect);
        drawpage21(page21);
        window.display();
    }
}

void draw_page_22(PAGE22 page22)
{
    window.draw(page22.background);
    window.draw(page22.done);
    window.draw(page22.DONE);
}
void set_page_22(PAGE22& page22, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;
    PAGE4 page4;

    page22.background.setTexture(bg22);
    page22.background.setScale(1.85, 1.85);
    page22.background.setPosition(-15, 0);
    page22.background.setOrigin(0, 0);

    page22.done.setTexture(transbox);
    page22.done.setPosition(1450, 950);
    page22.done.setScale(1.5, 1.8);

    page22.DONE.setFont(f2);
    page22.DONE.setFillColor(Color(38, 34, 98));
    page22.DONE.setCharacterSize(55);
    page22.DONE.setPosition(1470, 955);
    page22.DONE.setString("DONE!");



    while (window.isOpen())
    {
        Event event;
        MouseRect.setFillColor(Color(0, 0, 0, 0));
        MouseRect.setPosition(ms.getPosition().x - 5, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page22.done.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            flight1.user = info[USER].email;
            flightinfo.push_back(flight1);
            Set_page_4(page4, offers1, schedule2, info, flightinfo);
        };
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }

        }
        window.draw(MouseRect);
        window.display();
        draw_page_22(page22);
    }
}

void setpage23(PAGE23& page23, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE4 page4;
    PAGE24 page24;
    page23.background.setTexture(bg23);
    page23.background.setScale(2.18, 2.18);
    page23.background.setPosition(1920 / 2 - 10, 1080 / 2);
    page23.background.setOrigin(page23.background.getLocalBounds().width / 2, page23.background.getLocalBounds().height / 2);

    page23.back_b.setTexture(transbox);
    page23.back_b.setOrigin(page23.back_b.getLocalBounds().width / 2, page23.back_b.getLocalBounds().height / 2);
    page23.back_b.setPosition(1920 / 2 - 750, 1080 / 2 + 450);
    page23.back_b.setScale(1.7, 1.7);

    page23.back_t.setFont(f2);
    page23.back_t.setString("Back");
    page23.back_t.setCharacterSize(60);
    page23.back_t.setOrigin(page23.back_t.getLocalBounds().width / 2, page23.back_t.getLocalBounds().height / 2);
    page23.back_t.setPosition(page23.back_b.getPosition().x - 10, page23.back_b.getPosition().y - 15);
    page23.back_t.setFillColor(Color(39, 34, 99));

    const int SCROLLBAR_WIDTH = 20;
    const int SCROLLBAR_HEIGHT = 1070;
    const int SCROLLBAR_X = 1900 - SCROLLBAR_WIDTH;
    const int SCROLLBAR_Y = 0;
    sf::RectangleShape scrollbar(sf::Vector2f(SCROLLBAR_WIDTH, SCROLLBAR_HEIGHT));
    scrollbar.setPosition(SCROLLBAR_X, SCROLLBAR_Y);
    scrollbar.setFillColor(sf::Color::White);

    const int SLIDER_WIDTH = 20;
    const int SLIDER_HEIGHT = 60;
    const int SLIDER_X = 1900 - SLIDER_WIDTH;
    const int SLIDER_Y = SCROLLBAR_Y;
    sf::RectangleShape slider(sf::Vector2f(SLIDER_WIDTH, SLIDER_HEIGHT));
    slider.setPosition(SLIDER_X, SLIDER_Y);
    slider.setFillColor(Color(39, 34, 99));

    for (int i = 0; i < flightinfo.size() - 1; i++)
    {
        page23.block[i].setTexture(tripsblock);
        page23.block[i].setScale(1.8, 1.4);
        page23.block[i].setPosition(200, ((350) + (350 * i)));
        page23.block[i].setColor(Color(255, 255, 255, 180));
        page23.num[i].setFont(f1);
        page23.num[i].setPosition(page23.block[i].getPosition().x, page23.block[i].getPosition().y);
        page23.num[i].setString(to_string(i));

        string flight_num = flightinfo[i].flight_num;
        string d1 = to_string(flightinfo[i].myDate.Day);
        string d2 = to_string(flightinfo[i].myDate.Month);
        string d3 = to_string(flightinfo[i].myDate.Year);
        string date = d1 + "/" + d2 + "/" + d3;
        string th1 = to_string(flightinfo[i].th1);
        string th2 = to_string(flightinfo[i].th2);
        string tm2 = to_string(flightinfo[i].tm2);

        page23.from[i].setFont(f4);
        page23.from[i].setCharacterSize(40);
        page23.from[i].setOrigin(page23.from[i].getLocalBounds().width / 2, page23.from[i].getLocalBounds().height / 2);
        page23.from[i].setPosition(page23.block[i].getPosition().x + 170, page23.block[i].getPosition().y + 130);
        page23.from[i].setString(flightinfo[i].from);
        page23.from[i].setFillColor(Color(0, 0, 0));

        page23.to[i].setFont(f4);
        page23.to[i].setCharacterSize(40);
        page23.to[i].setOrigin(page23.to[i].getLocalBounds().width / 2, page23.to[i].getLocalBounds().height / 2);
        page23.to[i].setPosition(page23.block[i].getPosition().x + 900, page23.block[i].getPosition().y + 130);
        page23.to[i].setString(flightinfo[i].to);
        page23.to[i].setFillColor(Color(0, 0, 0));

        page23.flightnum[i].setFont(f4);
        page23.flightnum[i].setCharacterSize(40);
        page23.flightnum[i].setOrigin(page23.flightnum[i].getLocalBounds().width / 2, page23.flightnum[i].getLocalBounds().height / 2);
        page23.flightnum[i].setPosition(page23.block[i].getPosition().x + 250, page23.block[i].getPosition().y + 20);
        page23.flightnum[i].setString(flightinfo[i].flight_num);
        page23.flightnum[i].setFillColor(Color(0, 0, 0));

        page23.date[i].setFont(f4);
        page23.date[i].setCharacterSize(40);
        page23.date[i].setOrigin(page23.date[i].getLocalBounds().width / 2, page23.date[i].getLocalBounds().height / 2);
        page23.date[i].setPosition(page23.block[i].getPosition().x + 800, page23.block[i].getPosition().y + 20);
        page23.date[i].setString(date);
        page23.date[i].setFillColor(Color(0, 0, 0));

        page23.Class[i].setFont(f4);
        page23.Class[i].setCharacterSize(40);
        page23.Class[i].setOrigin(page23.Class[i].getLocalBounds().width / 2, page23.Class[i].getLocalBounds().height / 2);
        page23.Class[i].setPosition(page23.block[i].getPosition().x + 1270, page23.block[i].getPosition().y + 20);
        page23.Class[i].setString(flightinfo[i].level);
        page23.Class[i].setFillColor(Color(0, 0, 0));

        page23.edit[i].setTexture(transbox);
        page23.edit[i].setPosition(page23.block[i].getPosition().x + 950, page23.block[i].getPosition().y + 100);
        page23.edit[i].setScale(3, 2.5);
        page23.edit[i].setColor(Color(0, 0, 0, 0));
    }

    const float SCROLLBAR_RANGE = SCROLLBAR_HEIGHT - SLIDER_HEIGHT;
    float sliderPosition = 0;

    MouseRect.setFillColor(sf::Color::Black);
    Mouse ms;
    while (window.isOpen())
    {
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        sf::Event event;
        if (MouseRect.getGlobalBounds().intersects(page23.back_b.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            Set_page_4(page4, offers1, schedule2, info, flightinfo);
        }
        for (int i = 0; i < flightinfo.size() - 1; i++)
        {
            if (MouseRect.getGlobalBounds().intersects(page23.edit[i].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                NUM = i;
                set_page_24(page24, offers1, schedule2, info, flightinfo);
            }
        }
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::MouseWheelScrolled)
            {
                if (event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel)
                {
                    //controll the speed
                    sliderPosition += event.mouseWheelScroll.delta * 15;
                    if (sliderPosition < 0)
                        sliderPosition = 0;
                    else if (sliderPosition > SCROLLBAR_RANGE)
                        sliderPosition = SCROLLBAR_RANGE;
                    float percentage = sliderPosition / SCROLLBAR_RANGE;

                    for (int i = 0; i < flightinfo.size() - 1; i++)
                    {
                        //controll the number 
                        page23.block[i].setPosition(200, ((350) + (350 * i)) + (9 * percentage) * (-15));//(200 / 2 - 1080 / 2));
                        page23.num[i].setPosition(page23.block[i].getPosition().x, page23.block[i].getPosition().y);
                        page23.from[i].setPosition(page23.block[i].getPosition().x + 170, page23.block[i].getPosition().y + 130);
                        page23.to[i].setPosition(page23.block[i].getPosition().x + 900, page23.block[i].getPosition().y + 130);
                        page23.flightnum[i].setPosition(page23.block[i].getPosition().x + 250, page23.block[i].getPosition().y + 20);
                        page23.date[i].setPosition(page23.block[i].getPosition().x + 800, page23.block[i].getPosition().y + 20);
                        page23.Class[i].setPosition(page23.block[i].getPosition().x + 1270, page23.block[i].getPosition().y + 20);
                        page23.edit[i].setPosition(page23.block[i].getPosition().x + 70, page23.block[i].getPosition().y + 100);
                    }
                    slider.setPosition(SLIDER_X, SCROLLBAR_Y + sliderPosition);
                }
            }
            else if (event.type == sf::Event::MouseButtonPressed)
            {
                if (slider.getGlobalBounds().contains(sf::Vector2f(event.mouseButton.x, event.mouseButton.y)))
                {
                    sliderPosition = event.mouseButton.y - SCROLLBAR_Y - (SLIDER_HEIGHT / 2);
                    if (sliderPosition < 0)
                        sliderPosition = 0;
                    else if (sliderPosition > SCROLLBAR_RANGE)
                        sliderPosition = SCROLLBAR_RANGE;
                }
            }
        }

        window.clear();
        window.draw(MouseRect);
        window.draw(page23.background);
        for (int i = 0; i < 10; i++)
        {
            window.draw(page23.block[i]);
            window.draw(page23.flightnum[i]);
            window.draw(page23.from[i]);
            window.draw(page23.to[i]);
            window.draw(page23.date[i]);
            window.draw(page23.num[i]);
            window.draw(page23.Class[i]);
            window.draw(page23.edit[i]);
        }
        window.draw(page23.back_b);
        window.draw(page23.back_t);

        window.draw(scrollbar);
        window.draw(slider);
        window.display();
    }
}

void draw_page_24(PAGE24 page24) {
    window.draw(page24.background);
    window.draw(page24.clas);
    window.draw(page24.seat);
    window.draw(page24.home);
    window.draw(page24.remove);
    window.draw(page24.cancle);
    window.draw(page24.back);
    window.draw(page24.Clas);
    window.draw(page24.Seat);
    window.draw(page24.Home);
    window.draw(page24.Remove);
    window.draw(page24.Cancle);
    window.draw(page24.Back);
}
void set_page_24(PAGE24& page24, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;
    PAGE4 page4;
    PAGE17 page17;
    PAGE18 page18;
    PAGE26 page26;
    PAGE27 page27;

    page24.background.setTexture(bg24);
    page24.background.setScale(2.4, 2.4);
    page24.background.setPosition(-10, 0);
    page24.background.setOrigin(0, 0);

    page24.clas.setTexture(transbox);
    page24.clas.setPosition(70, 370);
    page24.clas.setScale(3.8, 2.2);

    page24.Clas.setFont(f2);
    page24.Clas.setFillColor(Color(38, 34, 98));
    page24.Clas.setCharacterSize(55);
    page24.Clas.setPosition(110, 390);
    page24.Clas.setString("1- Cabin Class ");

    page24.seat.setTexture(transbox);
    page24.seat.setPosition(70, 550);
    page24.seat.setScale(3.8, 2.2);

    page24.Seat.setFont(f2);
    page24.Seat.setFillColor(Color(38, 34, 98));
    page24.Seat.setCharacterSize(55);
    page24.Seat.setPosition(110, 570);
    page24.Seat.setString("3- Seat No. ");

    page24.home.setTexture(transbox);
    page24.home.setPosition(70, 730);
    page24.home.setScale(3.8, 2.2);

    page24.Home.setFont(f2);
    page24.Home.setFillColor(Color(38, 34, 98));
    page24.Home.setCharacterSize(55);
    page24.Home.setPosition(110, 750);
    page24.Home.setString("5- Home Page ");

    page24.remove.setTexture(transbox);
    page24.remove.setPosition(700, 370);
    page24.remove.setScale(3.8, 2.2);

    page24.Remove.setFont(f2);
    page24.Remove.setFillColor(Color(38, 34, 98));
    page24.Remove.setCharacterSize(55);
    page24.Remove.setPosition(730, 390);
    page24.Remove.setString("2- Remove Passenger ");

    page24.cancle.setTexture(transbox);
    page24.cancle.setPosition(700, 550);
    page24.cancle.setScale(3.8, 2.2);

    page24.Cancle.setFont(f2);
    page24.Cancle.setFillColor(Color(38, 34, 98));
    page24.Cancle.setCharacterSize(55);
    page24.Cancle.setPosition(730, 570);
    page24.Cancle.setString("4- Cancel Reservation");

    page24.back.setTexture(transbox);
    page24.back.setPosition(70, 900);
    page24.back.setScale(2.1, 2.1);

    page24.Back.setFont(f2);
    page24.Back.setFillColor(Color(38, 34, 98));
    page24.Back.setCharacterSize(55);
    page24.Back.setPosition(145, 920);
    page24.Back.setString("BACK");

    while (window.isOpen())
    {
        Event event;
        MouseRect.setFillColor(Color(0, 0, 0, 0));
        MouseRect.setPosition(ms.getPosition().x - 5, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page24.clas.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            if (flightinfo[NUM].level == "ECONOMY")
                flightinfo[NUM].level = "BUSINESS";
            else if (flightinfo[NUM].level == "BUSINESS")
                flightinfo[NUM].level = "ECONOMY";
        }
        if (MouseRect.getGlobalBounds().intersects(page24.seat.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage26(page26, offers1, schedule2, info, flightinfo);
            if (flightinfo[NUM].level == "ECONOMY")
            {

                set_page_18(page18, offers1, schedule2, info, flightinfo);
            }
            else if (flightinfo[NUM].level == "BUSINESS")
            {

                set_page_17(page17, offers1, schedule2, info, flightinfo);
            }
            flightinfo[NUM].passengers[passengerindex].seats = passenger1.seats;
        }
        if (MouseRect.getGlobalBounds().intersects(page24.home.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            Set_page_4(page4, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page24.remove.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {

        };
        if (MouseRect.getGlobalBounds().intersects(page24.cancle.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage27(page27, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page24.back.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            ///////////////////          //////////////////
        };
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }

        }
        window.draw(MouseRect);
        window.display();
        draw_page_24(page24);
    }
}

void drawpage25(PAGE25 page25) {
    window.draw(page25.background);
    window.draw(page25.Block1);
    window.draw(page25.Next);
}
void setpage25(PAGE25& page25, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo) {
    page25.background.setTexture(bg25);
    page25.background.setScale(2, 2.5);
    page25.background.setPosition(0, 0);
    page25.background.setOrigin(0, 0);

    page25.Block1.setTexture(block);
    page25.Block1.setPosition(1600, 950);
    page25.Block1.setScale(1.5, 1.5);
    page25.Block1.setOrigin(0, 0);

    page25.Next.setFont(f1);
    page25.Next.setCharacterSize(50);
    page25.Next.setFillColor(Color(38, 34, 98));
    page25.Next.setPosition(page25.Block1.getPosition().x + 60, page25.Block1.getPosition().y + 10);
    page25.Next.setString("Next");

    // Dynamic

    while (window.isOpen())
    {
        Event event;

        if (MouseRect.getGlobalBounds().intersects(page25.Block1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            // Homepage
        }
        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed)
            {
                window.close();
            }


        }
        window.clear();
        drawpage25(page25);
        window.display();


    }

}

void setpage26(PAGE26& page26, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE23 page23;
    page26.background.setTexture(bg26);
    page26.background.setScale(2.18, 2.18);
    page26.background.setPosition(1920 / 2 - 10, 1080 / 2);
    page26.background.setOrigin(page26.background.getLocalBounds().width / 2, page26.background.getLocalBounds().height / 2);

    page26.back_b.setTexture(transbox);
    page26.back_b.setOrigin(page26.back_b.getLocalBounds().width / 2, page26.back_b.getLocalBounds().height / 2);
    page26.back_b.setPosition(1920 / 2 - 750, 1080 / 2 + 430);
    page26.back_b.setScale(1.7, 1.7);

    page26.back_t.setFont(f2);
    page26.back_t.setString("Back");
    page26.back_t.setCharacterSize(60);
    page26.back_t.setOrigin(page26.back_t.getLocalBounds().width / 2, page26.back_t.getLocalBounds().height / 2);
    page26.back_t.setPosition(page26.back_b.getPosition().x - 10, page26.back_b.getPosition().y - 15);
    page26.back_t.setFillColor(Color(39, 34, 99));

    const int SCROLLBAR_WIDTH = 20;
    const int SCROLLBAR_HEIGHT = 1070;
    const int SCROLLBAR_X = 1900 - SCROLLBAR_WIDTH;
    const int SCROLLBAR_Y = 0;
    sf::RectangleShape scrollbar(sf::Vector2f(SCROLLBAR_WIDTH, SCROLLBAR_HEIGHT));
    scrollbar.setPosition(SCROLLBAR_X, SCROLLBAR_Y);
    scrollbar.setFillColor(sf::Color::White);

    const int SLIDER_WIDTH = 20;
    const int SLIDER_HEIGHT = 60;
    const int SLIDER_X = 1900 - SLIDER_WIDTH;
    const int SLIDER_Y = SCROLLBAR_Y;
    sf::RectangleShape slider(sf::Vector2f(SLIDER_WIDTH, SLIDER_HEIGHT));
    slider.setPosition(SLIDER_X, SLIDER_Y);
    slider.setFillColor(Color(39, 34, 99));

    for (int i = 0; i < flightinfo[NUM].passengers_number; i++)
    {
        page26.block[i].setTexture(passengersblock);
        page26.block[i].setScale(1.8, 2);
        page26.block[i].setPosition(200, ((250) + (830 * i)));
        page26.block[i].setColor(Color(255, 255, 255, 180));
        page26.num[i].setFont(f1);
        page26.num[i].setPosition(page26.block[i].getPosition().x, page26.block[i].getPosition().y);
        page26.num[i].setString(to_string(i));

        string flight_num = flightinfo[NUM].flight_num;
        string d1 = to_string(flightinfo[NUM].myDate.Day);
        string d2 = to_string(flightinfo[NUM].myDate.Month);
        string d3 = to_string(flightinfo[NUM].myDate.Year);
        string date = d1 + "/" + d2 + "/" + d3;
        string th1 = to_string(flightinfo[NUM].th1);
        string th2 = to_string(flightinfo[NUM].th2);
        string tm2 = to_string(flightinfo[NUM].tm2);

        page26.from[i].setFont(f4);
        page26.from[i].setCharacterSize(40);
        page26.from[i].setOrigin(page26.from[i].getLocalBounds().width / 2, page26.from[i].getLocalBounds().height / 2);
        page26.from[i].setPosition(page26.block[i].getPosition().x + 170, page26.block[i].getPosition().y + 330);
        page26.from[i].setString(flightinfo[NUM].from);
        page26.from[i].setFillColor(Color(0, 0, 0));

        page26.to[i].setFont(f4);
        page26.to[i].setCharacterSize(40);
        page26.to[i].setOrigin(page26.to[i].getLocalBounds().width / 2, page26.to[i].getLocalBounds().height / 2);
        page26.to[i].setPosition(page26.block[i].getPosition().x + 900, page26.block[i].getPosition().y + 330);
        page26.to[i].setString(flightinfo[NUM].to);
        page26.to[i].setFillColor(Color(0, 0, 0));

        page26.flightnum[i].setFont(f4);
        page26.flightnum[i].setCharacterSize(50);
        page26.flightnum[i].setOrigin(page26.flightnum[i].getLocalBounds().width / 2, page26.flightnum[i].getLocalBounds().height / 2);
        page26.flightnum[i].setPosition(page26.block[i].getPosition().x + 250, page26.block[i].getPosition().y + 180);
        page26.flightnum[i].setString(flightinfo[NUM].flight_num);
        page26.flightnum[i].setFillColor(Color(0, 0, 0));

        page26.date[i].setFont(f4);
        page26.date[i].setCharacterSize(50);
        page26.date[i].setOrigin(page26.date[i].getLocalBounds().width / 2, page26.date[i].getLocalBounds().height / 2);
        page26.date[i].setPosition(page26.block[i].getPosition().x + 800, page26.block[i].getPosition().y + 180);
        page26.date[i].setString(date);
        page26.date[i].setFillColor(Color(0, 0, 0));

        page26.Class[i].setFont(f4);
        page26.Class[i].setCharacterSize(40);
        page26.Class[i].setOrigin(page26.Class[i].getLocalBounds().width / 2, page26.Class[i].getLocalBounds().height / 2);
        page26.Class[i].setPosition(page26.block[i].getPosition().x + 1240, page26.block[i].getPosition().y + 180);
        page26.Class[i].setString(flightinfo[NUM].level);
        page26.Class[i].setFillColor(Color(0, 0, 0));

        page26.name[i].setFont(f4);
        page26.name[i].setCharacterSize(50);
        page26.name[i].setOrigin(page26.name[i].getLocalBounds().width / 2, page26.name[i].getLocalBounds().height / 2);
        page26.name[i].setPosition(page26.block[i].getPosition().x + 450, page26.block[i].getPosition().y + 40);
        page26.name[i].setString(flightinfo[NUM].passengers[i].first_name + " " + flightinfo[NUM].passengers[i].last_name);
        page26.name[i].setFillColor(Color(0, 0, 0));

        page26.seat[i].setFont(f4);
        page26.seat[i].setCharacterSize(50);
        page26.seat[i].setOrigin(page26.seat[i].getLocalBounds().width / 2, page26.seat[i].getLocalBounds().height / 2);
        page26.seat[i].setPosition(page26.block[i].getPosition().x + 250, page26.block[i].getPosition().y + 480);
        page26.seat[i].setString(flightinfo[NUM].passengers[i].seats);
        page26.seat[i].setFillColor(Color(0, 0, 0));

        page26.passportid[i].setFont(f4);
        page26.passportid[i].setCharacterSize(50);
        page26.passportid[i].setOrigin(page26.passportid[i].getLocalBounds().width / 2, page26.passportid[i].getLocalBounds().height / 2);
        page26.passportid[i].setPosition(page26.block[i].getPosition().x + 1100, page26.block[i].getPosition().y + 480);
        page26.passportid[i].setString(flightinfo[NUM].passengers[i].passport_id);
        page26.passportid[i].setFillColor(Color(0, 0, 0));

        page26.edit[i].setTexture(transbox);
        page26.edit[i].setPosition(page26.block[i].getPosition().x + 950, page26.block[i].getPosition().y + 450);
        page26.edit[i].setScale(3, 2.5);
        page26.edit[i].setColor(Color(0, 0, 0, 0));
    }

    const float SCROLLBAR_RANGE = SCROLLBAR_HEIGHT - SLIDER_HEIGHT;
    float sliderPosition = 0;

    MouseRect.setFillColor(sf::Color::Black);
    Mouse ms;
    while (window.isOpen())
    {
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        sf::Event event;
        for (int i = 0; i < flightinfo[NUM].passengers_number; i++)
        {
            if (MouseRect.getGlobalBounds().intersects(page26.edit[i].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                passengerindex = i;
                cout << passengerindex;
                return;
            }
        }
        if (MouseRect.getGlobalBounds().intersects(page26.back_b.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage23(page23, offers1, schedule2, info, flightinfo);
        }
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();



            else if (event.type == sf::Event::MouseWheelScrolled)
            {
                if (event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel)
                {
                    //controll the speed
                    sliderPosition += event.mouseWheelScroll.delta * 15;
                    if (sliderPosition < 0)
                        sliderPosition = 0;
                    else if (sliderPosition > SCROLLBAR_RANGE)
                        sliderPosition = SCROLLBAR_RANGE;
                    float percentage = sliderPosition / SCROLLBAR_RANGE;

                    for (int i = 0; i < flightinfo[NUM].passengers_number - 1; i++)
                    {
                        //controll the number 
                        page26.block[i].setPosition(200, ((250) + (830 * i)) + (9 * percentage) * (-100));//(200 / 2 - 1080 / 2));-555
                        page26.num[i].setPosition(page26.block[i].getPosition().x, page26.block[i].getPosition().y);
                        page26.from[i].setPosition(page26.block[i].getPosition().x + 170, page26.block[i].getPosition().y + 330);
                        page26.to[i].setPosition(page26.block[i].getPosition().x + 900, page26.block[i].getPosition().y + 330);
                        page26.flightnum[i].setPosition(page26.block[i].getPosition().x + 250, page26.block[i].getPosition().y + 180);
                        page26.date[i].setPosition(page26.block[i].getPosition().x + 800, page26.block[i].getPosition().y + 180);
                        page26.Class[i].setPosition(page26.block[i].getPosition().x + 1240, page26.block[i].getPosition().y + 180);
                        page26.name[i].setPosition(page26.block[i].getPosition().x + 450, page26.block[i].getPosition().y + 40);
                        page26.passportid[i].setPosition(page26.block[i].getPosition().x + 1100, page26.block[i].getPosition().y + 480);
                        page26.seat[i].setPosition(page26.block[i].getPosition().x + 250, page26.block[i].getPosition().y + 480);
                        page26.edit[i].setPosition(page26.block[i].getPosition().x + 950, page26.block[i].getPosition().y + 450);
                    }
                    slider.setPosition(SLIDER_X, SCROLLBAR_Y + sliderPosition);
                }
            }
            else if (event.type == sf::Event::MouseButtonPressed)
            {
                if (slider.getGlobalBounds().contains(sf::Vector2f(event.mouseButton.x, event.mouseButton.y)))
                {
                    sliderPosition = event.mouseButton.y - SCROLLBAR_Y - (SLIDER_HEIGHT / 2);
                    if (sliderPosition < 0)
                        sliderPosition = 0;
                    else if (sliderPosition > SCROLLBAR_RANGE)
                        sliderPosition = SCROLLBAR_RANGE;
                }
            }
        }

        window.clear();
        window.draw(page26.background);
        for (int i = 0; i < 7; i++)
        {
            window.draw(page26.block[i]);
            window.draw(page26.flightnum[i]);
            window.draw(page26.from[i]);
            window.draw(page26.to[i]);
            window.draw(page26.date[i]);
            window.draw(page26.num[i]);
            window.draw(page26.Class[i]);
            window.draw(page26.name[i]);
            window.draw(page26.seat[i]);
            window.draw(page26.passportid[i]);
            window.draw(page26.edit[i]);
        }
        window.draw(page26.back_b);
        window.draw(page26.back_t);
        window.draw(scrollbar);
        window.draw(slider);
        window.display();
    }
}

void drawpage27(PAGE27 page27) {

    window.draw(page27.background);
    window.draw(page27.button1);
    window.draw(page27.buttontext1);
    window.draw(page27.button2);
    window.draw(page27.buttontext2);
}
void setpage27(PAGE27& page27, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE4 page4;
    PAGE23 page23;

    page27.background.setTexture(bg27);
    page27.background.setScale(2.85, 2.85);
    page27.background.setPosition(0, 0);
    page27.background.setOrigin(0, 0);

    page27.button1.setTexture(block);
    page27.button1.setPosition(400, 700);
    page27.button1.setScale(1.9, 1.5);
    page27.button1.setOrigin(0, 0);

    page27.buttontext1.setFont(f2);
    page27.buttontext1.setString("Yes, Cancel");
    page27.buttontext1.setCharacterSize(55);
    page27.buttontext1.setPosition(page27.button1.getPosition().x + 20, page27.button1.getPosition().y + 10);
    page27.buttontext1.setFillColor(Color(38, 34, 98));

    page27.button2.setTexture(block);
    page27.button2.setPosition(1300, 700);
    page27.button2.setScale(1.5, 1.5);
    page27.button2.setOrigin(0, 0);

    page27.buttontext2.setFont(f2);
    page27.buttontext2.setString("No");
    page27.buttontext2.setCharacterSize(55);
    page27.buttontext2.setPosition(page27.button2.getPosition().x + 90, page27.button2.getPosition().y + 10);
    page27.buttontext2.setFillColor(Color(38, 34, 98));

    // Dynamic

    while (window.isOpen())
    {
        Event event;

        if (MouseRect.getGlobalBounds().intersects(page27.button1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            flightinfo.erase(flightinfo.begin() + NUM);
            Set_page_4(page4, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page27.button2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage23(page23, offers1, schedule2, info, flightinfo);
        }
        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.clear();
        drawpage27(page27);
        window.display();
    }


}

void draw_page_28(PAGE28 page28)
{
    window.draw(page28.background);
    window.draw(page28.next);
    window.draw(page28.Next);
}
void set_page_28(PAGE28& page28, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;
    PAGE29 page29;
    page28.background.setTexture(bg28);
    page28.background.setScale(1.9, 1.9);
    page28.background.setPosition(-15, 0);
    page28.background.setOrigin(0, 0);

    page28.next.setTexture(transbox);
    page28.next.setPosition(1650, 970);
    page28.next.setScale(1.4, 1.4);
    page28.Next.setFont(f2);
    page28.Next.setFillColor(Color::Black);
    page28.Next.setCharacterSize(45);
    page28.Next.setPosition(1690, 980);
    page28.Next.setString("Next");

    while (window.isOpen())
    {
        Event event;
        MouseRect.setFillColor(Color(0, 0, 0, 0));
        MouseRect.setPosition(ms.getPosition().x - 5, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page28.next.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            set_page_29(page29, offers1, schedule2, info, flightinfo);
        }
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }

        }
        window.draw(MouseRect);
        window.display();
        draw_page_28(page28);
    }
}

void draw_page_29(PAGE29 page29)
{
    window.draw(page29.background);
    window.draw(page29.begin);
    window.draw(page29.Begin);
    window.draw(page29.exit);
    window.draw(page29.Exit);
}
void set_page_29(PAGE29& page29, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE2 page2;
    PAGE30 page30;
    Mouse ms;

    page29.background.setTexture(bg29);
    page29.background.setScale(1.9, 1.9);
    page29.background.setPosition(-15, 0);
    page29.background.setOrigin(0, 0);

    page29.exit.setTexture(transbox);
    page29.exit.setPosition(140, 950);
    page29.exit.setScale(1.6, 1.4);
    page29.Exit.setFont(f2);
    page29.Exit.setFillColor(Color(38, 34, 98));
    page29.Exit.setCharacterSize(50);
    page29.Exit.setPosition(200, 955);
    page29.Exit.setString("EXIT");

    page29.begin.setTexture(transbox);
    page29.begin.setPosition(1550, 900);
    page29.begin.setScale(1.6, 1.4);
    page29.Begin.setFont(f2);
    page29.Begin.setFillColor(Color(38, 34, 98));
    page29.Begin.setCharacterSize(50);
    page29.Begin.setPosition(1585, 953);
    page29.Begin.setString("BEGIN!");

    while (window.isOpen())
    {
        Event event;
        MouseRect.setFillColor(Color(0, 0, 0, 0));
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page29.exit.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            window.close();

        }

        if (MouseRect.getGlobalBounds().intersects(page29.begin.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage30(page30, offers1, schedule2, info, flightinfo);
        }
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }

        }
        window.draw(MouseRect);
        window.display();
        draw_page_29(page29);
    }
}

void drawpage30(PAGE30 page30) {

    window.draw(page30.background);
    window.draw(page30.button1);
    window.draw(page30.buttontext1);
    window.draw(page30.button2);
    window.draw(page30.buttontext2);
    window.draw(page30.button3);
    window.draw(page30.buttontext3);
    window.draw(page30.button4);
    window.draw(page30.buttontext4);

}
void setpage30(PAGE30& page30, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo) {

    PAGE29 page29;
    PAGE31 page31;
    PAGE33 page33;
    PAGE28 page28;
    PAGE34 page34;
    page30.background.setTexture(bg30);
    page30.background.setScale(2.85, 2.85);
    page30.background.setPosition(0, 0);
    page30.background.setOrigin(0, 0);

    page30.button1.setTexture(block);
    page30.button1.setPosition(200, 870);
    page30.button1.setScale(1.6, 1.6);
    page30.button1.setOrigin(0, 0);

    page30.buttontext1.setFont(f1);
    page30.buttontext1.setString("Back");
    page30.buttontext1.setCharacterSize(45);
    page30.buttontext1.setPosition(page30.button1.getPosition().x + 90, page30.button1.getPosition().y + 10);
    page30.buttontext1.setFillColor(Color(38, 34, 98));

    page30.button2.setTexture(add);
    page30.button2.setPosition(700, 450);
    page30.button2.setScale(2.5, 2.5);
    page30.button2.setOrigin(0, 0);

    page30.buttontext2.setFont(f2);
    page30.buttontext2.setString("Add Flight");
    page30.buttontext2.setCharacterSize(45);
    page30.buttontext2.setPosition(page30.button2.getPosition().x + 200, page30.button2.getPosition().y + 100);
    page30.buttontext2.setFillColor(Color(38, 34, 98));

    page30.button3.setTexture(edit);
    page30.button3.setPosition(30, 160);
    page30.button3.setScale(2.5, 2.5);
    page30.button3.setOrigin(0, 0);

    page30.buttontext3.setFont(f2);
    page30.buttontext3.setString("Edit Flight");
    page30.buttontext3.setCharacterSize(45);
    page30.buttontext3.setPosition(page30.button3.getPosition().x + 200, page30.button3.getPosition().y);
    page30.buttontext3.setFillColor(Color(38, 34, 98));

    page30.button4.setTexture(del);
    page30.button4.setPosition(1400, 800);
    page30.button4.setScale(2.5, 2.5);
    page30.button4.setOrigin(0, 0);

    page30.buttontext4.setFont(f2);
    page30.buttontext4.setString("Delete Flight");
    page30.buttontext4.setCharacterSize(45);
    page30.buttontext4.setPosition(page30.button4.getPosition().x + 200, page30.button4.getPosition().y + 100);
    page30.buttontext4.setFillColor(Color(38, 34, 98));

    // Dynamic
    Mouse ms;

    while (window.isOpen())
    {
        Event event;
        MouseRect.setFillColor(Color(0, 0, 0, 0));
        MouseRect.setPosition(ms.getPosition().x - 5, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page30.button1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            set_page_29(page29, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page30.button2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            set_page_31(page31, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page30.button3.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            int x1 = setpage33(page33, offers1, schedule2, info, flightinfo);
            setpage34(page34, x1, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page30.button4.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            int x2 = setpage33(page33, offers1, schedule2, info, flightinfo);
            schedule2[x2].dep = "0";
            schedule2[x2].arv = "0";
            schedule2[x2].duration = 0;
            schedule2[x2].tm2 = 0;
            schedule2[x2].th1 = 0;
            schedule2[x2].th2 = 0;
            schedule2[x2].price = 0;
            schedule2[x2].seats = 200;
            set_page_28(page28, offers1, schedule2, info, flightinfo);
        }
        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.draw(MouseRect);
        window.clear();
        drawpage30(page30);
        window.display();
    }


}

void draw_page_31(PAGE31 page31) {
    window.draw(page31.background);
    window.draw(page31.from);
    window.draw(page31.hou);
    window.draw(page31.min);
    window.draw(page31.num);
    window.draw(page31.to);
    window.draw(page31.price);
    window.draw(page31.depa);
    window.draw(page31.next);
    window.draw(page31.back);
    window.draw(page31.Next);
    window.draw(page31.Back);
    window.draw(page31.from_country31);
    window.draw(page31.to_country31);
}
void set_page_31(PAGE31& page31, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    int i = getindex2(schedule2);
    string m1, m2;

    PAGE30 page30;
    PAGE32 page32;
    SPLIT31 split31;
    COUNTRY31 country31;

    Mouse ms;

    page31.background.setTexture(bg31);
    page31.background.setScale(1.82, 1.8);
    page31.background.setPosition(-10, 0);
    page31.background.setOrigin(0, 0);

    page31.from.setTexture(desbox);
    page31.from.setPosition(250, 315);
    page31.from.setScale(1.8, 1.5);

    page31.hou.setTexture(transbox);
    page31.hou.setPosition(600, 430);
    page31.hou.setScale(3, 2.1);

    page31.min.setTexture(transbox);
    page31.min.setPosition(600, 580);
    page31.min.setScale(3, 2.1);

    page31.num.setTexture(transbox);
    page31.num.setPosition(600, 740);
    page31.num.setScale(3, 2.1);

    page31.to.setTexture(desbox);
    page31.to.setPosition(820, 315);
    page31.to.setScale(1.8, 1.5);

    page31.price.setTexture(transbox);
    page31.price.setPosition(1350, 450);
    page31.price.setScale(3, 2.1);

    page31.depa.setTexture(transbox);
    page31.depa.setPosition(1350, 650);
    page31.depa.setScale(3, 2.1);

    page31.back.setTexture(transbox);
    page31.back.setPosition(45, 930);
    page31.back.setScale(2.1, 2.1);

    page31.Back.setFont(f2);
    page31.Back.setFillColor(Color::Black);
    page31.Back.setCharacterSize(45);
    page31.Back.setPosition(130, 955);
    page31.Back.setString("BACK");

    page31.next.setTexture(transbox);
    page31.next.setPosition(1570, 930);
    page31.next.setScale(2.1, 2.1);

    page31.Next.setFont(f2);
    page31.Next.setFillColor(Color::Black);
    page31.Next.setCharacterSize(45);
    page31.Next.setPosition(1655, 955);
    page31.Next.setString("NEXT");

    string data[5];
    Text inputdata[5];
    int count = 0;
    inputdata[0].setPosition(page31.hou.getPosition().x + 75, page31.hou.getPosition().y + 15);
    inputdata[1].setPosition(page31.min.getPosition().x + 75, page31.min.getPosition().y + 15);
    inputdata[2].setPosition(page31.num.getPosition().x + 75, page31.num.getPosition().y + 15);
    inputdata[3].setPosition(page31.price.getPosition().x + 75, page31.price.getPosition().y + 15);
    inputdata[4].setPosition(page31.depa.getPosition().x + 75, page31.depa.getPosition().y + 15);

    for (int i = 0; i < 5; i++)
    {
        inputdata[i].setCharacterSize(45);
        inputdata[i].setFillColor(Color(0, 0, 0));
        inputdata[i].setFont(f2);
    }
    MouseRect.setFillColor(Color(0, 0, 0, 0));
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page31.from.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            //cout << page14.frombox.getPosition().x << endl;
            int x1 = set_split31(split31, page31.from.getPosition().x, page31.from.getPosition().y + 72, offers1, schedule2, info, flightinfo);
            m1 = set_country31(country31, page31.from.getPosition().x, page31.from.getPosition().y + 72, x1, offers1, schedule2, info, flightinfo);
            schedule2[i].dep = m1;
            page31.from_country31.setFont(f1);
            page31.from_country31.setString(m1);
            page31.from_country31.setFillColor(Color(39, 34, 99));
            page31.from_country31.setCharacterSize(25);
            // page31.from_country31.setOrigin(page31..getLocalBounds().width / 2, page31.bus.getLocalBounds().height / 2);
            page31.from_country31.setPosition(page31.from.getPosition().x + 10, page31.from.getPosition().y + 10);
        }
        if (MouseRect.getGlobalBounds().intersects(page31.to.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            int x2 = set_split31(split31, page31.to.getPosition().x, page31.to.getPosition().y + 72, offers1, schedule2, info, flightinfo);
            m2 = set_country31(country31, page31.to.getPosition().x, page31.to.getPosition().y + 72, x2, offers1, schedule2, info, flightinfo);
            schedule2[i].arv = m2;
            page31.to_country31.setFont(f1);
            page31.to_country31.setString(m2);
            page31.to_country31.setFillColor(Color(39, 34, 99));
            page31.to_country31.setCharacterSize(25);
            //page31.to_country31.setOrigin(page31.bus.getLocalBounds().width / 2, page31.bus.getLocalBounds().height / 2);
            page31.to_country31.setPosition(page31.to.getPosition().x + 10, page31.to.getPosition().y + 10);
        }
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 5; i++)
        {
            inputdata[i].setString(data[i]);
        }
        if (MouseRect.getGlobalBounds().intersects(page31.back.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage30(page30, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page31.next.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            schedule2[i].duration = stoi(data[0]);
            schedule2[i].tm2 = stoi(data[1]);
            schedule2[i].th1 = stoi(data[4]);
            schedule2[i].price = stoi(data[3]);
            schedule2[i].seats = stoi(data[3]);
            schedule2[i].th2 = schedule2[i].th1 + schedule2[i].duration;
            set_page_32(page32, offers1, schedule2, info, flightinfo);
        }
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
            if (event.type == Event::TextEntered)
            {
                data[count] += static_cast<char>(event.text.unicode);
            }
            if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
            {
                count++;
                count %= 6;
            }
            if (Keyboard::isKeyPressed(Keyboard::BackSpace) && data[count].size() > 0)
            {
                data[count].resize(data[count].size() - 1);
            }
        }
        window.clear();
        draw_page_31(page31);
        for (int i = 0; i < 5; i++)
        {
            window.draw(inputdata[i]);
        }
        window.draw(MouseRect);
        window.display();
        draw_page_31(page31);
    }

}

void draw_page_32(PAGE32 page32)
{
    window.draw(page32.background);
    window.draw(page32.next);
    window.draw(page32.Next);
}
void set_page_32(PAGE32& page32, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;

    page32.background.setTexture(bg32);
    page32.background.setScale(1.9, 1.9);
    page32.background.setPosition(-15, 0);
    page32.background.setOrigin(0, 0);

    page32.next.setTexture(transbox);
    page32.next.setPosition(1650, 970);
    page32.next.setScale(1.4, 1.4);
    page32.Next.setFont(f2);
    page32.Next.setFillColor(Color::Black);
    page32.Next.setCharacterSize(45);
    page32.Next.setPosition(1690, 980);
    page32.Next.setString("Next");

    while (window.isOpen())
    {
        Event event;
        MouseRect.setFillColor(Color(0, 0, 0, 0));
        MouseRect.setPosition(ms.getPosition().x - 5, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page32.next.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            //////////////////////////////////////////////////////////////////////////////////////////       
        };
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }

        }
        window.draw(MouseRect);
        window.display();
        draw_page_32(page32);
    }


}

int setpage33(PAGE33& page33, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE30 page30;
    page33.background.setTexture(bg33);
    page33.background.setScale(2.18, 2.18);
    page33.background.setPosition(1920 / 2 - 10, 1080 / 2);
    page33.background.setOrigin(page33.background.getLocalBounds().width / 2, page33.background.getLocalBounds().height / 2);

    page33.back_b.setTexture(transbox);
    page33.back_b.setOrigin(page33.back_b.getLocalBounds().width / 2, page33.back_b.getLocalBounds().height / 2);
    page33.back_b.setPosition(1920 / 2 - 800, 1080 / 2 + 450);
    page33.back_b.setScale(1.7, 1.7);

    page33.back_t.setFont(f2);
    page33.back_t.setString("Back");
    page33.back_t.setCharacterSize(60);
    page33.back_t.setOrigin(page33.back_t.getLocalBounds().width / 2, page33.back_t.getLocalBounds().height / 2);
    page33.back_t.setPosition(page33.back_b.getPosition().x - 10, page33.back_b.getPosition().y - 15);
    page33.back_t.setFillColor(Color(39, 34, 99));

    const int SCROLLBAR_WIDTH = 20;
    const int SCROLLBAR_HEIGHT = 1070;
    const int SCROLLBAR_X = 1900 - SCROLLBAR_WIDTH;
    const int SCROLLBAR_Y = 0;
    sf::RectangleShape scrollbar(sf::Vector2f(SCROLLBAR_WIDTH, SCROLLBAR_HEIGHT));
    scrollbar.setPosition(SCROLLBAR_X, SCROLLBAR_Y);
    scrollbar.setFillColor(sf::Color::White);

    const int SLIDER_WIDTH = 20;
    const int SLIDER_HEIGHT = 60;
    const int SLIDER_X = 1900 - SLIDER_WIDTH;
    const int SLIDER_Y = SCROLLBAR_Y;
    sf::RectangleShape slider(sf::Vector2f(SLIDER_WIDTH, SLIDER_HEIGHT));
    slider.setPosition(SLIDER_X, SLIDER_Y);
    slider.setFillColor(Color(39, 34, 99));
    int i = 0;
    for (int j = 0; j < 100; j++)
    {
        if (schedule2[i].dep == "0")
            continue;
        else
        {
            page33.block[i].setTexture(newoffersblock);
            page33.block[i].setScale(1.7, 2.);
            page33.block[i].setPosition(100, ((250) + (275 * i)));
            page33.block[i].setColor(Color(255, 255, 255, 180));
            page33.num[i].setFont(f1);
            page33.num[i].setPosition(page33.block[i].getPosition().x, page33.block[i].getPosition().y);
            page33.num[i].setString(to_string(i));


            string price = to_string(schedule2[i].price);
            string flight_num = schedule2[i].num;
            string date = to_string(((2 * i) + 5) % 30);
            string th1 = to_string(schedule2[i].th1);
            string th2 = to_string(schedule2[i].th2);
            string tm2 = to_string(schedule2[i].tm2);

            page33.dep[i].setFont(f4);
            page33.dep[i].setCharacterSize(42);
            page33.dep[i].setOrigin(page33.dep[i].getLocalBounds().width / 2, page33.dep[i].getLocalBounds().height / 2);
            page33.dep[i].setPosition(page33.block[i].getPosition().x + 528, page33.block[i].getPosition().y + 35);
            page33.dep[i].setString(schedule2[i].dep);
            page33.dep[i].setFillColor(Color(0, 0, 0));

            page33.arv[i].setFont(f4);
            page33.arv[i].setCharacterSize(40);
            page33.arv[i].setOrigin(page33.arv[i].getLocalBounds().width / 2, page33.arv[i].getLocalBounds().height / 2);
            page33.arv[i].setPosition(page33.block[i].getPosition().x + 468, page33.block[i].getPosition().y + 105);
            page33.arv[i].setString(schedule2[i].arv);
            page33.arv[i].setFillColor(Color(0, 0, 0));

            page33.price[i].setFont(f4);
            page33.price[i].setCharacterSize(40);
            page33.price[i].setOrigin(page33.price[i].getLocalBounds().width / 2, page33.price[i].getLocalBounds().height / 2);
            page33.price[i].setPosition(page33.block[i].getPosition().x + 1490, page33.block[i].getPosition().y + 105);
            page33.price[i].setString(price + " $");
            page33.price[i].setFillColor(Color(0, 0, 0));

            page33.num[i].setFont(f4);
            page33.num[i].setCharacterSize(45);
            page33.num[i].setOrigin(page33.price[i].getLocalBounds().width / 2, page33.price[i].getLocalBounds().height / 2);
            page33.num[i].setPosition(page33.block[i].getPosition().x + 270, page33.block[i].getPosition().y + 117);
            page33.num[i].setString(flight_num);
            page33.num[i].setFillColor(Color(0, 0, 0));

            page33.date[i].setFont(f4);
            page33.date[i].setCharacterSize(42);
            page33.date[i].setOrigin(page33.date[i].getLocalBounds().width / 2, page33.date[i].getLocalBounds().height / 2);
            page33.date[i].setPosition(page33.block[i].getPosition().x + 240, page33.block[i].getPosition().y + 35);
            page33.date[i].setString(date + "/6/2023");
            page33.date[i].setFillColor(Color(0, 0, 0));

            page33.th1[i].setFont(f4);
            page33.th1[i].setCharacterSize(40);
            page33.th1[i].setOrigin(page33.th1[i].getLocalBounds().width / 2, page33.th1[i].getLocalBounds().height / 2);
            page33.th1[i].setPosition(page33.dep[i].getPosition().x + 680, page33.dep[i].getPosition().y);
            page33.th1[i].setString("(" + th1 + ":00)");
            page33.th1[i].setFillColor(Color(0, 0, 0));

            page33.th2[i].setFont(f4);
            page33.th2[i].setCharacterSize(40);
            page33.th2[i].setOrigin(page33.th2[i].getLocalBounds().width / 2, page33.th2[i].getLocalBounds().height / 2);
            page33.th2[i].setPosition(page33.arv[i].getPosition().x + 730, page33.arv[i].getPosition().y);
            page33.th2[i].setString("(" + th2 + ":" + tm2 + ")");
            page33.th2[i].setFillColor(Color(0, 0, 0));

            page33.level[i].setFont(f4);
            page33.level[i].setCharacterSize(37);
            page33.level[i].setOrigin(page33.level[i].getLocalBounds().width / 2, page33.level[i].getLocalBounds().height / 2);
            page33.level[i].setPosition(page33.block[i].getPosition().x + 1494, page33.block[i].getPosition().y + 35);
            if (i % 2 == 0)
                page33.level[i].setString("ECONOMY");
            else
                page33.level[i].setString("BUSINESS");
            page33.level[i].setFillColor(Color(0, 0, 0));
            i++;
        }
    }

    const float SCROLLBAR_RANGE = SCROLLBAR_HEIGHT - SLIDER_HEIGHT;
    float sliderPosition = 0;

    MouseRect.setFillColor(Color(0, 0, 0, 0));
    Mouse ms;

    while (window.isOpen())
    {
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        sf::Event event;
        if (MouseRect.getGlobalBounds().intersects(page33.back_b.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage30(page30, offers1, schedule2, info, flightinfo);
        }
        for (int i = 0; i < 100; i++)
        {
            if (MouseRect.getGlobalBounds().intersects(page33.block[i].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                return i;
            }
        }
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::MouseWheelScrolled)
            {
                if (event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel)
                {
                    //controll the speed
                    sliderPosition += event.mouseWheelScroll.delta * 15;
                    if (sliderPosition < 0)
                        sliderPosition = 0;
                    else if (sliderPosition > SCROLLBAR_RANGE)
                        sliderPosition = SCROLLBAR_RANGE;
                    float percentage = sliderPosition / SCROLLBAR_RANGE;

                    for (int i = 0; i < 100; i++)
                    {
                        //controll the number 
                        page33.block[i].setPosition(100, ((250) + (275 * i)) + (9 * percentage) * (-2970));//(200 / 2 - 1080 / 2));
                        page33.num[i].setPosition(page33.block[i].getPosition().x, page33.block[i].getPosition().y);
                        page33.dep[i].setPosition(page33.block[i].getPosition().x + 528, page33.block[i].getPosition().y + 35);
                        page33.arv[i].setPosition(page33.block[i].getPosition().x + 468, page33.block[i].getPosition().y + 105);
                        page33.price[i].setPosition(page33.block[i].getPosition().x + 1490, page33.block[i].getPosition().y + 105);
                        page33.num[i].setPosition(page33.block[i].getPosition().x + 270, page33.block[i].getPosition().y + 117);
                        page33.date[i].setPosition(page33.block[i].getPosition().x + 240, page33.block[i].getPosition().y + 35);
                        page33.th1[i].setPosition(page33.dep[i].getPosition().x + 680, page33.dep[i].getPosition().y);
                        page33.th2[i].setPosition(page33.arv[i].getPosition().x + 730, page33.arv[i].getPosition().y);
                        page33.level[i].setPosition(page33.block[i].getPosition().x + 1494, page33.block[i].getPosition().y + 35);
                    }
                    slider.setPosition(SLIDER_X, SCROLLBAR_Y + sliderPosition);
                }
            }
            else if (event.type == sf::Event::MouseButtonPressed)
            {
                if (slider.getGlobalBounds().contains(sf::Vector2f(event.mouseButton.x, event.mouseButton.y)))
                {
                    sliderPosition = event.mouseButton.y - SCROLLBAR_Y - (SLIDER_HEIGHT / 2);
                    if (sliderPosition < 0)
                        sliderPosition = 0;
                    else if (sliderPosition > SCROLLBAR_RANGE)
                        sliderPosition = SCROLLBAR_RANGE;
                }
            }
        }

        window.clear();
        window.draw(page33.background);
        for (int i = 0; i < 100; i++)
        {

            window.draw(page33.block[i]);
            window.draw(page33.dep[i]);
            window.draw(page33.arv[i]);
            window.draw(page33.price[i]);
            window.draw(page33.th1[i]);
            window.draw(page33.th2[i]);
            window.draw(page33.tm2[i]);
            window.draw(page33.date[i]);
            window.draw(page33.num[i]);
            window.draw(page33.level[i]);

        }
        window.draw(MouseRect);
        window.draw(page33.back_b);
        window.draw(page33.back_t);
        window.draw(scrollbar);
        window.draw(slider);
        window.display();
    }
}

void drawpage34(PAGE34 page34) {
    window.draw(page34.background);
    window.draw(page34.Block1);
    window.draw(page34.Button1);
    window.draw(page34.Button2);
    window.draw(page34.Price);
    window.draw(page34.Back);
    window.draw(page34.Departure);

}
void setpage34(PAGE34& page34, int i, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE35 page35;
    PAGE36 page36;
    PAGE30 page30;

    page34.background.setTexture(bg34);
    page34.background.setScale(2.1, 2.5);
    page34.background.setPosition(0, 0);
    page34.background.setOrigin(0, 0);

    page34.Block1.setTexture(block);
    page34.Block1.setPosition(200, 950);
    page34.Block1.setScale(1.5, 1.5);
    page34.Block1.setOrigin(0, 0);

    page34.Back.setFont(f1);
    page34.Back.setCharacterSize(45);
    page34.Back.setFillColor(Color(38, 34, 98));
    page34.Back.setPosition(page34.Block1.getPosition().x + 70, page34.Block1.getPosition().y + 10);
    page34.Back.setString("Back");

    page34.Button1.setTexture(price);
    page34.Button1.setPosition(300, 500);
    page34.Button1.setScale(1.9, 1.9);
    page34.Button1.setOrigin(0, 0);

    page34.Price.setFont(f1);
    page34.Price.setCharacterSize(40);
    page34.Price.setFillColor(Color(38, 34, 98));
    page34.Price.setPosition(page34.Button1.getPosition().x + 350, page34.Button1.getPosition().y + 110);
    page34.Price.setString("Price");

    page34.Button2.setTexture(dep);
    page34.Button2.setPosition(1100, 500);
    page34.Button2.setScale(2.0, 2.0);
    page34.Button2.setOrigin(0, 0);

    page34.Departure.setFont(f1);
    page34.Departure.setCharacterSize(40);
    page34.Departure.setFillColor(Color(38, 34, 98));
    page34.Departure.setPosition(page34.Button2.getPosition().x + 200, page34.Button2.getPosition().y + 100);
    page34.Departure.setString("Time of Departure");

    // Dynamic
    Mouse ms;

    while (window.isOpen())
    {
        MouseRect.setFillColor(Color(0, 0, 0, 0));
        MouseRect.setPosition(ms.getPosition().x - 5, ms.getPosition().y);
        Event event;

        if (MouseRect.getGlobalBounds().intersects(page34.Button1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            set_page_35(page35, i, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page34.Button2.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            set_page_36(page36, i, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page34.Block1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage30(page30, offers1, schedule2, info, flightinfo);
        }
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.draw(MouseRect);
        window.clear();
        drawpage34(page34);
        window.display();
    }
}

void draw_page_35(PAGE35 page35)
{
    window.draw(page35.background);
    window.draw(page35.sset);
    window.draw(page35.back);
    window.draw(page35.Back);
    window.draw(page35.next);
    window.draw(page35.Next);
}
void set_page_35(PAGE35& page35, int i, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    PAGE34 page34;
    PAGE37 page37;
    PAGE30 page30;
    Mouse ms;

    page35.background.setTexture(bg35);
    page35.background.setScale(1.85, 1.85);
    page35.background.setPosition(-10, 0);
    page35.background.setOrigin(0, 0);


    page35.sset.setTexture(inputbox);
    page35.sset.setPosition(910, 540);
    page35.sset.setScale(2, 1.6);


    page35.back.setTexture(transbox);
    page35.back.setPosition(127, 970);
    page35.back.setScale(1.4, 1.4);
    page35.Back.setFont(f2);
    page35.Back.setFillColor(Color::Black);
    page35.Back.setCharacterSize(45);
    page35.Back.setPosition(160, 980);
    page35.Back.setString("BACK");

    page35.next.setTexture(transbox);
    page35.next.setPosition(1650, 970);
    page35.next.setScale(1.4, 1.4);
    page35.Next.setFont(f2);
    page35.Next.setFillColor(Color::Black);
    page35.Next.setCharacterSize(45);
    page35.Next.setPosition(1690, 980);
    page35.Next.setString("NEXT");
    ///////////////////////////////////////////////////////////////////////////////////////
    string data[1];
    Text inputdata[1];
    int count = 0;
    inputdata[0].setPosition(page35.sset.getPosition().x + 50, page35.sset.getPosition().y + 6);
    for (int i = 0; i < 1; i++)
    {
        inputdata[i].setCharacterSize(40);
        inputdata[i].setFillColor(Color(0, 0, 0));
        inputdata[i].setFont(f2);
    }
    MouseRect.setFillColor(Color(0, 0, 0, 0));
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 1; i++)
        {
            inputdata[i].setString(data[i]);
        }
        if (MouseRect.getGlobalBounds().intersects(page35.back.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage30(page30, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page35.next.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            schedule2[i].price = stoi(data[0]);
            setpage37(page37, offers1, schedule2, info, flightinfo);
        }
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
            if (event.type == Event::TextEntered)
            {
                data[count] += static_cast<char>(event.text.unicode);
            }
            if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
            {
                count++;
                count %= 1;
            }
            if (Keyboard::isKeyPressed(Keyboard::BackSpace) && data[count].size() > 0)
            {
                data[count].resize(data[count].size() - 1);
            }
        }
        window.clear();
        draw_page_35(page35);
        for (int i = 0; i < 1; i++)
        {
            window.draw(inputdata[i]);
        }
        window.draw(MouseRect);
        window.display();
        draw_page_35(page35);
    }

}

void draw_page_36(PAGE36 page36)
{
    window.draw(page36.background);
    window.draw(page36.sdtime);
    window.draw(page36.back);
    window.draw(page36.Back);
    window.draw(page36.next);
    window.draw(page36.Next);
}
void set_page_36(PAGE36& page36, int i, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;
    PAGE34 page34;
    PAGE37 page37;
    PAGE30 page30;
    page36.background.setTexture(bg36);
    page36.background.setScale(1.85, 1.85);
    page36.background.setPosition(-10, 0);
    page36.background.setOrigin(0, 0);


    page36.sdtime.setTexture(inputbox);
    page36.sdtime.setPosition(1010, 540);
    page36.sdtime.setScale(2, 1.6);


    page36.back.setTexture(transbox);
    page36.back.setPosition(127, 970);
    page36.back.setScale(1.4, 1.4);
    page36.Back.setFont(f2);
    page36.Back.setFillColor(Color::Black);
    page36.Back.setCharacterSize(45);
    page36.Back.setPosition(170, 980);
    page36.Back.setString("BACK");

    page36.next.setTexture(transbox);
    page36.next.setPosition(1650, 970);
    page36.next.setScale(1.4, 1.4);
    page36.Next.setFont(f2);
    page36.Next.setFillColor(Color::Black);
    page36.Next.setCharacterSize(45);
    page36.Next.setPosition(1690, 980);
    page36.Next.setString("NEXT");


    string data[1];
    Text inputdata[1];
    int count = 0;
    inputdata[0].setPosition(page36.sdtime.getPosition().x + 50, page36.sdtime.getPosition().y + 6);
    for (int i = 0; i < 1; i++)
    {
        inputdata[i].setCharacterSize(40);
        inputdata[i].setFillColor(Color(0, 0, 0));
        inputdata[i].setFont(f2);
    }
    MouseRect.setFillColor(Color(0, 0, 0, 0));
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 1; i++)
        {
            inputdata[i].setString(data[i]);
        }
        if (MouseRect.getGlobalBounds().intersects(page36.back.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            setpage30(page30, offers1, schedule2, info, flightinfo);
        }
        if (MouseRect.getGlobalBounds().intersects(page36.next.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            schedule2[i].th1 = stoi(data[0]);
            schedule2[i].th2 = schedule2[i].th1 + schedule2[i].duration;
            setpage37(page37, offers1, schedule2, info, flightinfo);
        }
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
            if (event.type == Event::TextEntered)
            {
                data[count] += static_cast<char>(event.text.unicode);
            }
            if (event.type == Event::KeyReleased && event.key.code == Keyboard::Enter)
            {
                count++;
                count %= 1;
            }
            if (Keyboard::isKeyPressed(Keyboard::BackSpace) && data[count].size() > 0)
            {
                data[count].resize(data[count].size() - 1);
            }
        }
        window.clear();
        draw_page_36(page36);
        for (int i = 0; i < 1; i++)
        {
            window.draw(inputdata[i]);
        }
        window.draw(MouseRect);
        window.display();
        draw_page_36(page36);
    }

}

void drawpage37(PAGE37 page37) {

    window.draw(page37.background);
    window.draw(page37.button1);
    window.draw(page37.buttontext1);

}
void setpage37(PAGE37& page37, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo) {
    PAGE29 page29;

    page37.background.setTexture(bg37);
    page37.background.setScale(2.85, 2.85);
    page37.background.setPosition(0, 0);
    page37.background.setOrigin(0, 0);

    page37.button1.setTexture(block);
    page37.button1.setPosition(1600, 950);
    page37.button1.setScale(1.2, 1.2);
    page37.button1.setOrigin(0, 0);

    page37.buttontext1.setFont(f1);
    page37.buttontext1.setString("Done!");
    page37.buttontext1.setCharacterSize(45);
    page37.buttontext1.setPosition(page37.button1.getPosition().x + 40, page37.button1.getPosition().y);
    page37.buttontext1.setFillColor(Color(38, 34, 98));

    // Dynamic

    while (window.isOpen())
    {
        Event event;
        if (MouseRect.getGlobalBounds().intersects(page37.button1.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            set_page_29(page29, offers1, schedule2, info, flightinfo);
        }
        while (window.pollEvent(event))
        {

            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.clear();
        drawpage37(page37);
        window.display();
    }


}

void setpage38(PAGE38& page38, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{

    PAGE4 page4;

    page38.bg38.setTexture(bg38);
    page38.bg38.setScale(2.18, 2.18);
    page38.bg38.setPosition(1920 / 2 - 10, 1080 / 2);
    page38.bg38.setOrigin(page38.bg38.getLocalBounds().width / 2, page38.bg38.getLocalBounds().height / 2);

    page38.back_b.setTexture(transbox);
    page38.back_b.setOrigin(page38.back_b.getLocalBounds().width / 2, page38.back_b.getLocalBounds().height / 2);
    page38.back_b.setPosition(1920 / 2 - 750, 1080 / 2 + 450);
    page38.back_b.setScale(1.7, 1.7);

    page38.back_t.setFont(f2);
    page38.back_t.setString("Back");
    page38.back_t.setCharacterSize(60);
    page38.back_t.setOrigin(page38.back_t.getLocalBounds().width / 2, page38.back_t.getLocalBounds().height / 2);
    page38.back_t.setPosition(page38.back_b.getPosition().x - 10, page38.back_b.getPosition().y - 15);
    page38.back_t.setFillColor(Color(39, 34, 99));



    for (int i = 0; i < 3; i++)
    {
        page38.block[i].setTexture(newoffersblock);
        page38.block[i].setScale(1.7, 2.);
        page38.block[i].setPosition(100, ((200) + (270 * i)));
        page38.block[i].setColor(Color(255, 255, 255, 180));
    }



    MouseRect.setFillColor(sf::Color::Black);
    Mouse ms;
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        if (MouseRect.getGlobalBounds().intersects(page38.back_b.getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
        {
            Set_page_4(page4, offers1, schedule2, info, flightinfo);
        }
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }
        window.draw(MouseRect);
        window.clear();
        window.draw(page38.bg38);
        for (int i = 0; i < 3; i++)
        {
            window.draw(page38.block[i]);
        }
        window.draw(page38.back_b);
        window.draw(page38.back_t);

        window.display();
    }
}

void draw_split12(SPLIT12 split12)
{
    window.draw(split12.background);
    for (int i = 0; i < 5; i++)
    {
        window.draw(split12.block[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        window.draw(split12.contient[i]);
    }
}
int set_split12(SPLIT12& split12, int x, int y, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;

    split12.background.setTexture(inputbox);
    split12.background.setScale(2, 7.5);
    split12.background.setPosition(x + 230, y + 190);
    split12.background.setOrigin(split12.background.getLocalBounds().width / 2, split12.background.getLocalBounds().height / 2);
    split12.background.setColor(Color::Black);
    for (int i = 0; i < 5; i++)
    {
        split12.block[i].setTexture(inputbox);
        split12.block[i].setScale(2, 1.5);
        split12.block[i].setOrigin(split12.block[i].getLocalBounds().width / 2, split12.block[i].getLocalBounds().height / 2);
        split12.block[i].setPosition(x + 230, (y + 50) + (75 * i));
        split12.block[i].setColor(Color::White);
    }
    split12.contient[0].setString("Asia");
    split12.contient[1].setString("Africa");
    split12.contient[2].setString("Egypt");
    split12.contient[3].setString("Europe");
    split12.contient[4].setString("America");
    for (int i = 0; i < 5; i++)
    {
        split12.contient[i].setFont(f3);
        split12.contient[i].setCharacterSize(60);
        split12.contient[i].setOrigin(split12.contient[i].getLocalBounds().width / 2, split12.contient[i].getLocalBounds().height / 2);
        split12.contient[i].setPosition(x + 230, (y + 40) + (75 * i));
        split12.contient[i].setFillColor(Color(39, 34, 99));
    }
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 5; i++)
        {
            if (MouseRect.getGlobalBounds().intersects(split12.block[i].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                return i;
            }
        }

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.display();
        draw_split12(split12);
    }
}

void draw_country12(COUNTRY12 country12)
{
    window.draw(country12.background);
    for (int i = 0; i < 4; i++)
    {
        window.draw(country12.block[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        window.draw(country12.countries[i]);
    }
}
string set_country12(COUNTRY12& country12, int x, int y, int cont, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;
    string Country[5][4] = { { "Bahrain_(Manama)","China_(Beijing)","Saudi_Arabia_(Riyadh)","United_Arab_Emirates_\n(Abu_Dhabi)" }, { "Algeria_(Algiers)","Tunisia_(Tunisia)","Morocco_(Marakesh)","Sudan_(Khartoum)" }, { "EGY_Alexandria_(ALY)","EGY_Cairo_(CAI)","EGY_Luxor_(LXR)","EGY_Sharm_Elshekh_(SSH)" }, { "France_(Paris)","Russia_(Moscow)","Spain_(Madrid)","United_Kingdom_(London)" }, { "Canada_(Ottawa)","United_States_(Washington)","Brazil_(Brasilia)","Argentina_(Buenos_Aires)" } };

    for (int i = 0; i < 4; i++)
    {
        country12.block[i].setTexture(inputbox);
        country12.block[i].setScale(1.8, 1.7);
        country12.block[i].setOrigin(country12.block[i].getLocalBounds().width / 2, country12.block[i].getLocalBounds().height / 2);
        country12.block[i].setPosition(x + 540, y + 60 + (70 * i));
        country12.block[i].setColor(Color::White);
    }
    for (int i = 0; i < 4; i++)
    {
        country12.countries[i].setString(Country[cont][i]);
        country12.countries[i].setFont(f2);
        country12.countries[i].setCharacterSize(30);
        country12.countries[i].setOrigin(country12.countries[i].getLocalBounds().width / 2, country12.countries[i].getLocalBounds().height / 2);
        country12.countries[i].setPosition(country12.block[i].getPosition().x, country12.block[i].getPosition().y);
        country12.countries[i].setFillColor(Color(39, 34, 99));
    }
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 4; i++)
        {
            if (MouseRect.getGlobalBounds().intersects(country12.block[i].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                return Country[cont][i];
            }
        }

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {

                window.close();
            }
        }
        window.display();
        draw_country12(country12);
    }
}

void draw_split13(SPLIT13 split13)
{
    window.draw(split13.background);
    for (int i = 0; i < 5; i++)
    {
        window.draw(split13.block[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        window.draw(split13.contient[i]);
    }
}
int set_split13(SPLIT13& split13, int x, int y, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;

    split13.background.setTexture(inputbox);
    split13.background.setScale(2, 7.5);
    split13.background.setPosition(x + 230, y + 190);
    split13.background.setOrigin(split13.background.getLocalBounds().width / 2, split13.background.getLocalBounds().height / 2);
    split13.background.setColor(Color::Black);
    for (int i = 0; i < 5; i++)
    {
        split13.block[i].setTexture(inputbox);
        split13.block[i].setScale(2, 1.5);
        split13.block[i].setOrigin(split13.block[i].getLocalBounds().width / 2, split13.block[i].getLocalBounds().height / 2);
        split13.block[i].setPosition(x + 230, (y + 50) + (75 * i));
        split13.block[i].setColor(Color::White);
    }
    split13.contient[0].setString("Asia");
    split13.contient[1].setString("Africa");
    split13.contient[2].setString("Egypt");
    split13.contient[3].setString("Europe");
    split13.contient[4].setString("America");
    for (int i = 0; i < 5; i++)
    {
        split13.contient[i].setFont(f3);
        split13.contient[i].setCharacterSize(60);
        split13.contient[i].setOrigin(split13.contient[i].getLocalBounds().width / 2, split13.contient[i].getLocalBounds().height / 2);
        split13.contient[i].setPosition(x + 230, (y + 40) + (75 * i));
        split13.contient[i].setFillColor(Color(39, 34, 99));
    }
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 5; i++)
        {
            if (MouseRect.getGlobalBounds().intersects(split13.block[i].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                return i;
            }
        }

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.display();
        draw_split13(split13);
    }
}

void draw_country13(COUNTRY13 country13)
{
    window.draw(country13.background);
    for (int i = 0; i < 4; i++)
    {
        window.draw(country13.block[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        window.draw(country13.countries[i]);
    }
}
string set_country13(COUNTRY13& country13, int x, int y, int cont, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;
    string Country[5][4] = { { "Bahrain_(Manama)","China_(Beijing)","Saudi_Arabia_(Riyadh)","United_Arab_Emirates_\n(Abu_Dhabi)" }, { "Algeria_(Algiers)","Tunisia_(Tunisia)","Morocco_(Marakesh)","Sudan_(Khartoum)" }, { "EGY_Alexandria_(ALY)","EGY_Cairo_(CAI)","EGY_Luxor_(LXR)","EGY_Sharm_Elshekh_(SSH)" }, { "France_(Paris)","Russia_(Moscow)","Spain_(Madrid)","United_Kingdom_(London)" }, { "Canada_(Ottawa)","United_States_(Washington)","Brazil_(Brasilia)","Argentina_(Buenos_Aires)" } };

    for (int i = 0; i < 4; i++)
    {
        country13.block[i].setTexture(inputbox);
        country13.block[i].setScale(1.8, 1.7);
        country13.block[i].setOrigin(country13.block[i].getLocalBounds().width / 2, country13.block[i].getLocalBounds().height / 2);
        country13.block[i].setPosition(x + 520, y + 60 + (75 * i));
        country13.block[i].setColor(Color::White);
    }

    for (int i = 0; i < 4; i++)
    {
        country13.countries[i].setString(Country[cont][i]);
        country13.countries[i].setFont(f2);
        country13.countries[i].setCharacterSize(30);
        country13.countries[i].setOrigin(country13.countries[i].getLocalBounds().width / 2, country13.countries[i].getLocalBounds().height / 2);
        country13.countries[i].setPosition(country13.block[i].getPosition().x, country13.block[i].getPosition().y);
        country13.countries[i].setFillColor(Color(39, 34, 99));
    }
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 4; i++)
        {
            if (MouseRect.getGlobalBounds().intersects(country13.block[i].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                return Country[cont][i];
            }
        }

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {

                window.close();
            }
        }
        window.display();
        draw_country13(country13);
    }
}


void draw_split(SPLIT split)
{
    window.draw(split.background);
    for (int i = 0; i < 5; i++)
    {
        window.draw(split.block[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        window.draw(split.contient[i]);
    }
}
int set_split(SPLIT& split, int x, int y, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;

    split.background.setTexture(inputbox);
    split.background.setScale(1.8, 7.5);
    split.background.setPosition(x, y + 160);
    split.background.setOrigin(split.background.getLocalBounds().width / 2, split.background.getLocalBounds().height / 2);
    split.background.setColor(Color::Black);

    for (int i = 0; i < 5; i++)
    {
        split.block[i].setTexture(inputbox);
        split.block[i].setScale(1.8, 1.5);
        split.block[i].setOrigin(split.block[i].getLocalBounds().width / 2, split.block[i].getLocalBounds().height / 2);
        split.block[i].setPosition(x, y + (75 * i));
        split.block[i].setColor(Color::White);
    }
    split.contient[0].setString("Asia");
    split.contient[1].setString("Africa");
    split.contient[2].setString("Egypt");
    split.contient[3].setString("Europe");
    split.contient[4].setString("America");

    for (int i = 0; i < 5; i++)
    {
        split.contient[i].setFont(f2);
        split.contient[i].setCharacterSize(40);
        split.contient[i].setOrigin(split.contient[i].getLocalBounds().width / 2, split.contient[i].getLocalBounds().height / 2);
        split.contient[i].setPosition(x, (y - 15) + (75 * i));
        split.contient[i].setFillColor(Color(39, 34, 99));
    }
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 5; i++)
        {
            if (MouseRect.getGlobalBounds().intersects(split.block[i].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                return i;
            }
        }

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {

                window.close();
            }
        }
        window.display();
        draw_split(split);
    }
}

void draw_country(COUNTRY country)
{
    window.draw(country.background);
    for (int i = 0; i < 4; i++)
    {
        window.draw(country.block[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        window.draw(country.countries[i]);
    }
}
string set_country(COUNTRY& country, int x, int y, int cont, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;
    string Country[5][4] = { { "Bahrain_(Manama)","China_(Beijing)","Saudi_Arabia_(Riyadh)","United_Arab_Emirates_\n(Abu_Dhabi)" }, { "Algeria_(Algiers)","Tunisia_(Tunisia)","Morocco_(Marakesh)","Sudan_(Khartoum)" }, { "EGY_Alexandria_(ALY)","EGY_Cairo_(CAI)","EGY_Luxor_(LXR)","EGY_Sharm_Elshekh_(SSH)" }, { "France_(Paris)","Russia_(Moscow)","Spain_(Madrid)","United_Kingdom_(London)" }, { "Canada_(Ottawa)","United_States_(Washington)","Brazil_(Brasilia)","Argentina_(Buenos_Aires)" } };
    /* country.background.setTexture(inputbox);
     country.background.setScale(1.8, 7.5);
     country.background.setPosition(x+375, y + 130);
     country.background.setOrigin(country.background.getLocalBounds().width / 2, country.background.getLocalBounds().height / 2);
     country.background.setColor(Color::Black);*/

    for (int i = 0; i < 4; i++)
    {
        country.block[i].setTexture(inputbox);
        country.block[i].setScale(1.8, 1.7);
        country.block[i].setOrigin(country.block[i].getLocalBounds().width / 2, country.block[i].getLocalBounds().height / 2);
        country.block[i].setPosition(x + 374, y + 10 + (75 * i));
        country.block[i].setColor(Color::White);
    }
    for (int i = 0; i < 4; i++)
    {
        country.countries[i].setString(Country[cont][i]);
        country.countries[i].setFont(f2);
        country.countries[i].setCharacterSize(30);
        country.countries[i].setOrigin(country.countries[i].getLocalBounds().width / 2, country.countries[i].getLocalBounds().height / 2);
        country.countries[i].setPosition(country.block[i].getPosition().x, country.block[i].getPosition().y);//( - 15) + (75 * i));
        country.countries[i].setFillColor(Color(39, 34, 99));
    }
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 4; i++)
        {
            if (MouseRect.getGlobalBounds().intersects(country.block[i].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                return Country[cont][i];
            }
        }

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {

                window.close();
            }
        }
        window.display();
        draw_country(country);
    }
}


void draw_split31(SPLIT31 split31)
{
    window.draw(split31.background);
    for (int i = 0; i < 5; i++)
    {
        window.draw(split31.block[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        window.draw(split31.contient[i]);
    }
}
int set_split31(SPLIT31& split31, int x, int y, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;

    split31.background.setTexture(inputbox);
    split31.background.setScale(1.8, 7.5);
    split31.background.setPosition(x + 230, y + 190);
    split31.background.setOrigin(split31.background.getLocalBounds().width / 2, split31.background.getLocalBounds().height / 2);
    split31.background.setColor(Color::Black);
    for (int i = 0; i < 5; i++)
    {
        split31.block[i].setTexture(inputbox);
        split31.block[i].setScale(1.8, 1.5);
        split31.block[i].setOrigin(split31.block[i].getLocalBounds().width / 2, split31.block[i].getLocalBounds().height / 2);
        split31.block[i].setPosition(x + 230, (y + 50) + (75 * i));
        split31.block[i].setColor(Color::White);
    }
    split31.contient[0].setString("Asia");
    split31.contient[1].setString("Africa");
    split31.contient[2].setString("Egypt");
    split31.contient[3].setString("Europe");
    split31.contient[4].setString("America");
    for (int i = 0; i < 5; i++)
    {
        split31.contient[i].setFont(f3);
        split31.contient[i].setCharacterSize(60);
        split31.contient[i].setOrigin(split31.contient[i].getLocalBounds().width / 2, split31.contient[i].getLocalBounds().height / 2);
        split31.contient[i].setPosition(x + 230, (y + 40) + (75 * i));
        split31.contient[i].setFillColor(Color(39, 34, 99));
    }

    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 5; i++)
        {
            if (MouseRect.getGlobalBounds().intersects(split31.block[i].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                return i;
            }
        }
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        window.display();
        draw_split31(split31);
    }
}

void draw_country31(COUNTRY31 country31)
{
    window.draw(country31.background);
    for (int i = 0; i < 4; i++)
    {
        window.draw(country31.block[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        window.draw(country31.countries[i]);
    }
}
string set_country31(COUNTRY31& country31, int x, int y, int cont, countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    Mouse ms;
    string Country[5][4] = { { "Bahrain_(Manama)","China_(Beijing)","Saudi_Arabia_(Riyadh)","United_Arab_Emirates_\n(Abu_Dhabi)" }, { "Algeria_(Algiers)","Tunisia_(Tunisia)","Morocco_(Marakesh)","Sudan_(Khartoum)" }, { "EGY_Alexandria_(ALY)","EGY_Cairo_(CAI)","EGY_Luxor_(LXR)","EGY_Sharm_Elshekh_(SSH)" }, { "France_(Paris)","Russia_(Moscow)","Spain_(Madrid)","United_Kingdom_(London)" }, { "Canada_(Ottawa)","United_States_(Washington)","Brazil_(Brasilia)","Argentina_(Buenos_Aires)" } };

    for (int i = 0; i < 4; i++)
    {
        country31.block[i].setTexture(inputbox);
        country31.block[i].setScale(1.8, 1.7);
        country31.block[i].setOrigin(country31.block[i].getLocalBounds().width / 2, country31.block[i].getLocalBounds().height / 2);
        country31.block[i].setPosition(x + 603, y + 58 + (75 * i));
        country31.block[i].setColor(Color::White);
    }

    for (int i = 0; i < 4; i++)
    {
        country31.countries[i].setString(Country[cont][i]);
        country31.countries[i].setFont(f2);
        country31.countries[i].setCharacterSize(30);
        country31.countries[i].setOrigin(country31.countries[i].getLocalBounds().width / 2, country31.countries[i].getLocalBounds().height / 2);
        country31.countries[i].setPosition(country31.block[i].getPosition().x, country31.block[i].getPosition().y);
        country31.countries[i].setFillColor(Color(39, 34, 99));
    }
    while (window.isOpen())
    {
        Event event;
        MouseRect.setPosition(ms.getPosition().x - 15, ms.getPosition().y);
        for (int i = 0; i < 4; i++)
        {
            if (MouseRect.getGlobalBounds().intersects(country31.block[i].getGlobalBounds()) && Mouse::isButtonPressed(Mouse::Left))
            {
                return Country[cont][i];
            }
        }

        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {

                window.close();
            }
        }
        window.display();
        draw_country31(country31);
    }
}

/////////////////

void getdata2(countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    ifstream AH("offers.txt");
    if (AH.is_open())
    {

        for (int i = 0; i < 5; i++)
        {
            AH >> offers1[i].dep >> offers1[i].arv >> offers1[i].t_h >> offers1[i].t_m >> offers1[i].price;
        }
        AH.close();
    }

    ifstream AH2("reservations.txt");
    if (AH2.is_open())
    {
        for (int i = 0; (!AH2.eof()); i++)
        {
            flightinfo.push_back(flight1);
            AH2 >> flightinfo[i].from >> flightinfo[i].to >> flightinfo[i].price >> flightinfo[i].th1 >> flightinfo[i].th2 >> flightinfo[i].tm2 >> flightinfo[i].passengers_number >> flightinfo[i].flight_num >> flightinfo[i].level >> flightinfo[i].user >> flightinfo[i].myDate.
                Day >> flightinfo[i].myDate.Month >> flightinfo[i].myDate.Year;
            for (int j = 0; j < flightinfo[i].passengers_number; j++)
            {
                flightinfo[i].passengers.push_back(passenger1);
                AH2 >> flightinfo[i].passengers[j].first_name >> flightinfo[i].passengers[j].last_name >> flightinfo[i].passengers[j].gender >> flightinfo[i].passengers[j].title >> flightinfo[i].passengers[j].passport_id >> flightinfo[i].passengers[j].birthdate.Day >> flightinfo[i].passengers[j].birthdate.Month >> flightinfo[i].passengers[j].birthdate.Year >> flightinfo[i].passengers[j].seats;
            }
        }

        AH2.close();
    }

    ifstream AH3("users.txt");
    if (AH3.is_open())
    {


        for (int i = 0; (!AH3.eof()); i++)
        {
            if (AH3.eof())
                break;
            else
            {
                info.push_back(user1);
                AH3 >> info[i].email >> info[i].password >> info[i].confirmPass >> info[i].firstName >> info[i].lastName >> info[i].surname >> info[i].phoneNum >> info[i].nationality >> info[i].data.Day >> info[i].data.Month >> info[i].data.Year >> info[i].kind;
            }
        }
        AH3.close();
    }

    ifstream AH4("countries admin.txt");
    if (AH4.is_open())
    {
        for (int i = 0; i < 100; i++)
        {
            AH4 >> schedule2[i].dep >> schedule2[i].arv >> schedule2[i].th1 >> schedule2[i].th2 >> schedule2[i].tm2 >> schedule2[i].price >> schedule2[i].seats >> schedule2[i].num >> schedule2[i].duration;
        }

        AH4.close();
    }

}
void senddata2(countries_offers offers1[], countries_offers2 schedule2[], vector< user>& info, vector<Data>& flightinfo)
{
    ofstream ah1("offers.txt");
    if (ah1.is_open())
    {
        for (int i = 0; i < 5; i++)
        {
            ah1 << offers1[i].dep << "\t" << offers1[i].arv << "\t" << offers1[i].t_h << "\t" << offers1[i].t_m << "\t" << offers1[i].price << endl;
        }

        ah1.close();
    }

    ofstream ah4("users.txt");
    if (ah4.is_open())
    {
        for (int i = 0; i < info.size(); i++)
        {
            if (info[i].email == "0")
                continue;
            else
                ah4 << info[i].email << "\t" << info[i].password << "\t" << info[i].confirmPass << "\t" << info[i].firstName << "\t" << info[i].lastName << "\t" << info[i].surname << "\t" << info[i].phoneNum << "\t" << info[i].nationality << "\t" << info[i].data.Day << "\t" << info[i].data.Month << "\t" << info[i].data.Year << "\t" << info[i].kind << "\n";
        }

        ah4.close();
    }

    ofstream ah3("reservations.txt");
    if (ah3.is_open())
    {
        for (int i = 0; i < flightinfo.size(); i++)
        {
            if (flightinfo[i].from == "0")
                continue;
            else
            {
                ah3 << flightinfo[i].from << "\t" << flightinfo[i].to << "\t" << flightinfo[i].price << "\t" << flightinfo[i].th1 << "\t" << flightinfo[i].th2 << "\t" << flightinfo[i].tm2 << "\t" << flightinfo[i].passengers_number << "\t" << flightinfo[i].flight_num << "\t" << flightinfo[i].level << "\t" << flightinfo[i].user << "\t" << flightinfo[i].myDate.
                    Day << "\t" << flightinfo[i].myDate.Month << "\t" << flightinfo[i].myDate.Year << "\t";
                for (int j = 0; j < flightinfo[i].passengers.size(); j++)
                {
                    ah3 << flightinfo[i].passengers[j].first_name << "\t" << flightinfo[i].passengers[j].last_name << "\t" << flightinfo[i].passengers[j].gender << "\t" << flightinfo[i].passengers[j].title << "\t" << flightinfo[i].passengers[j].passport_id << "\t" << flightinfo[i].passengers[j].birthdate.Day << "\t" << flightinfo[i].passengers[j].birthdate.Month << "\t" << flightinfo[i].passengers[j].birthdate.Year << "\t" << flightinfo[i].passengers[j].seats << "\t";
                }
                ah3 << "\n";
            }
        }
    }

    ofstream ah5("countries admin.txt");
    if (ah5.is_open())
    {
        for (int i = 0; i < 100; i++)
        {
            ah5 << schedule2[i].dep << "\t" << schedule2[i].arv << "\t" << schedule2[i].th1 << "\t" << schedule2[i].th2 << "\t" << schedule2[i].tm2 << "\t" << schedule2[i].price << "\t" << schedule2[i].seats << "\t" << schedule2[i].num << "\t" << schedule2[i].duration << endl;
        }

        ah5.close();
    }
}
int check(string email, string password, vector<user>& info)
{
    email.resize(email.size() - 1);
    password.resize(password.size() - 1);
    int x = 3;
    for (int i = 0; i < info.size(); i++)
    {
        if ((email == info[i].email) && (password == info[i].password) && (info[i].kind == "admin"))
        {
            USER = i;
            x = 1;
        }
        else if ((email == info[i].email) && (password == info[i].password) && (info[i].kind == "user"))
        {
            USER = i;
            x = 2;
        }
        else
        {
            USER = 0;
            continue;
        }
    }
    return x;
}
int getindex2(countries_offers2 schedule2[])
{
    int ind = 1000;
    for (int i = 0; i < 100; i++)
    {
        if (schedule2[i].dep == "0")
        {
            ind = i;
            break;
        }
    }
    return ind;
}
