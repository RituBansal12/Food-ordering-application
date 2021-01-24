
int main()
{
cout<<"welcome\n";
base t;
t.getpin();
t.getcount();
cout<<"List of restaurants:\n";
cout<<"1. Taco bell\n";
cout<<"2. Keventers\n";
cout<<"3. Belgian waffle\n";
cout<<"4. Burger king\n";
cout<<"5. Little Italy\n";
cout<<"6. Delhi highway\n";
cout<<"please enter your choice: ";
int number;
cin>>number;
list y;
y.sel(number);
while(1)
{
int z,q;
cout<<"press 1-add items  2-billing:\n";
cin>>z;
cout<<"\n";
if(z==1)
{
cout<<"number of items you wish to select:";
cin>>q;	
y.add(q);
}
else if(z==2)
{
y.details();
}
else 
{
cout<<"enter valid choice\n";
exit(0);	
}
}
return 0;
}
