class list:public rest
{	
public:
void add(int n)
{
int price[n];
std::string item[n];
for(int i=0;i<n;i++)
{
int a;
cout<<"select item to be inserted:";
cin>>a;
int d;
std::string e;
if(a==1)
{
d=r1;
e=s1;
}
else if(a==2)
{
d=r2;
e=s2;	
}
else if(a==3)
{
d=r3;
e=s3;
}
else if(a==4)
{
d=r4;
e=s4;
}
else if(a==6)
{
d=r6;
e=s6;	
}
else if(a==7)
{
d=r7;
e=s7;	
}
else if(a==8)
{
d=r8;
e=s8;	
}
else if(a==9)
{
d=r9;
e=s9;
}
else if(a==10)
{
d=r10;
e=s10;	
}
else if(a==5)
{
d=r5;
e=s5;
}
else
{
cout<<"enter valid choice\n";
}
price[i]=d;
item[i]=e;
}
for(int j=0;j<n;j++)
{
cout<<j+1<<".\t"<<item[j]<<"\t"<<"Rs."<<price[j]<<"\n";    
}
int sum;
sum=1;
for(int k=0;k<n;k++)
{
sum=sum+price[k];    
}
float tax,total;
tax=(9*sum)/100;
total=sum+tax;
cout<<"sum:Rs"<<sum<<"\n";
cout<<"tax:Rs"<<tax<<"\n";
cout<<"amount to be paid:Rs"<<total<<"\n";
}
