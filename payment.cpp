void details()
{
std::string name,address;
int phone_number;
cout<<"name:";
cin>>name;
cout<<"\naddress:";
cin>>address;
cout<<"\nphone:";
cin>>phone_number;
int j;
std::string pay;
cout<<"press 1-cash 2-card";
cin>>j;
if(j==1)
{
pay="cash";    
}
else if(j==2)
{
pay="card";
int z;
cout<<"enter card number:";
cin>>z;
}
cout<<"name:"<<name<<"\n";
cout<<"address:"<<address<<"\n";
cout<<"phone:"<<phone_number<<"\n";
cout<<"payment method:"<<pay<<"\n";
exit(0);
}
};
