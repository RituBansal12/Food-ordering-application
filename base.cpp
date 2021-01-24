#include<iostream>
#include<string>
using namespace std;
class base
{
public:
int count;
int pincode;

void getcount()
{
count=0;
count=count+1;
cout<<"customer number:"<<count<<"\n";
}
void getpin()
{
cout<<"please enter pincode\n";
cin>>pincode;
try
{
if(pincode<600000 || pincode>600100)
{
throw(pincode);
}
}
catch(int i)
{
cout<<"sorry,we don't deliver to this location yet!\n";
cout<<"end programme\n";
exit(0);
}
}
};
class rest
{
public:
std::string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
void sel(int i)
{
cout<<"Menu\n";	
switch(i)
{
case 1:
{
cout<<"Welcome to Taco Bell\n";
cout<<"Mocktails:\n";
cout<<"1. Mint Mojito          Rs.100\n";
cout<<"2. Virgin Cuba Libre    Rs.125\n";
cout<<"Main course:\n";
cout<<"3. Quesadilla           Rs.110\n";
cout<<"4. Bean Burrito         Rs.140\n";
cout<<"5. Chicken parmesan     Rs.210\n";
cout<<"6. piri piri fries      Rs.150\n";
cout<<"7. Mexican Taco         Rs.225\n";
cout<<"Desserts\n";
cout<<"8. Chocodilla           Rs.160\n";
cout<<"9. Lava cake            Rs.105\n";
cout<<"10.Mango mousse         Rs.150\n";
s1="mojito";
s2="cuba libre";
s3="quesadilla";
s4="burrito";
s5="chicken par";
s6="piri fries";
s7="taco";
s8="chocodilla";
s9="lava cake";
s10="mousse";
r1=100;
r2=125;
r3=110;
r4=140;
r5=210;
r6=150;
r7=225;
r8=160;
r9=105;
r10=150;
break;
}
case 2:
{
cout<<"Welcome to Keventers\n";
cout<<"Milkshakes:\n";
cout<<"1. Oreo shake       Rs.150\n";
cout<<"2. KitKat shake     Rs.125\n";
cout<<"3. Raspberry shake  Rs.130\n";
cout<<"4. Caramel crunch   Rs.170\n";
cout<<"5. Popcorn shake    Rs.160\n";
s1="oreo";
s2="kitkat";
s3="raspberry";
s4="caramel";
s5="popcorn";
r1=150;
r2=125;
r3=130;
r4=170;
r5=160;
break;
}
case 3:
{
cout<<"Welcome to Belgian Waffle\n";
cout<<"Waffles:\n";
cout<<"1. ChocoVanilla        Rs.205\n";
cout<<"2. Red Velvet          Rs.160\n";
cout<<"3. Caramel             Rs.170\n";
cout<<"4. Dark Chocolate      Rs.160\n";
cout<<"5. sugarfree chocoffle Rs.140\n";
s1="chocovanilla";
s2="redvelevet";
s3="caramel";
s4="darkchoco";
s5="sugarfreechoco";
r1=205;
r2=160;
r3=170;
r4=160;
r5=140;
break;
}
case 4:
{
cout<<"Welcome to Burger King\n";
cout<<"Fries:\n";
cout<<"1. piri piri         Rs.120\n";
cout<<"2. cheddar cheese    Rs.130\n";
cout<<"Burgers:\n";
cout<<"3. paneer burger     Rs.210\n";
cout<<"4. mexican patty     Rs.180\n";
cout<<"5. chicken burger    Rs.220\n";
cout<<"6. maharaja burger   Rs.230\n";
cout<<"7. zingy             Rs.150\n";
s1="piri piri";
s2="cheddar cheese";
s3="paneer burger";
s4="mexican patty";
s5="chickenBurger";
s6="maharaja";
s7="zingy";
r1=120;
r2=130;
r3=210;
r4=180;
r5=220;
r6=230;
r7=150;
break;
}
case 5:
{
cout<<"Welcome to Little Italy\n";
cout<<"Appetizers:\n";
cout<<"1. Chicken Bruschetta    Rs.145\n";
cout<<"2. Cheese Baugette       Rs.160\n";
cout<<"3. potato wedges         Rs.130\n";
cout<<"Main courses:\n";
cout<<"4. Veg lasagna           Rs.210\n";
cout<<"5. Pasta Arabiatta       Rs.245\n";
cout<<"6. 4 cheese pizza        Rs.260\n";
cout<<"7. Rissotto              Rs.195\n";
cout<<"8. Italain herb sizzler  Rs.290\n";
s1="chicken Brus";
s2="cheese Baugette";
s3="potato wedges";
s4="lasagna";
s5="pasta arab";
s6="cheese pizza";
s7="rissotto";
s8="sizzler";
r1=145;
r2=160;
r3=130;
r4=210;
r5=245;
r6=260;
r7=195;
r8=290;
break;
}
case 6:
{
cout<<"Welcome to Delhi Highway\n";
cout<<"1. Aloo paratha 		    Rs.190\n";	
cout<<"2. sholay Kebab          Rs.220\n";
cout<<"3. Curd cutlet           Rs.160\n";
cout<<"4. Rumali roti           Rs.110\n";
cout<<"5. Butter naan           Rs.125\n";
cout<<"6. Kadai panner          Rs.140\n";
cout<<"7. Butter chicken        Rs.210\n";
cout<<"8. Dal fry               Rs.185\n";
cout<<"9. Chicken Shawarma      Rs.210\n";
cout<<"10.Sweet Lassi           Rs.130\n";
s1="aloo";
s2="kebab";
s3="cutlet";
s4="rumali roti";
s5="naan";
s6="kadai panner";
s7="butter chicken";
s8="dal";
s9="shawarma";
s10="lassi";
r1=190;
r2=220;
r3=160;
r4=110;
r5=125;
r6=140;
r7=210;
r8=185;
r9=210;
r10=130;

break;
}
default:
{
cout<<"enter a valid choice\n";
break;
}
}
}  	
};
