#include<iostream>
using namespace std;
int main()
{
int size = 20 , count =0 , count1 = 0 , count2 = 0 , count3 = 0 ,count4 = 0 ,count5 = 0,count6 = 0;

char arr[size];
cout<<"Enter a sentence  : ";
cin.get(arr,19);

//output
for(int i = 0; i<size ; i++ )
{
if(arr[i]==' ')
{
arr[i+1] = arr[i+1]-32;
}
}
cout<<"answer : "<<endl;
for(int i = 0 ; i<size ; i++)
{

cout<<arr[i];
}

for(int i = 0 ; i<size ; i++)//check
{
if(arr[i]>='A'&&arr[i]<='Z')
{
count++;
}

else if(arr[i]>='a'&&arr[i]<='z')
{
count1++;
}
if(arr[i]=='a'|| arr[i]=='A')
{
count2++;
}
else if(arr[i]=='e'|| arr[i]=='E')
{
count3++;
}
else if(arr[i]=='i'|| arr[i]=='I')
{
count4++;
}
else if(arr[i]=='o'|| arr[i]=='O')
{
count5++;
}
else if(arr[i]=='u'|| arr[i]=='U')
{
count6++;
}

}
cout<<endl;
cout<<"The number of uppercase case letters are: "<<count<<endl;
cout<<"The number of lower case letters are: "<<count1<<endl;
cout<<"The number of a's are: "<<count2<<endl;
cout<<"The number of e's are: "<<count3<<endl;
cout<<"The number of i's are: "<<count4<<endl;
cout<<"The number of o's are: "<<count5<<endl;
cout<<"The number of u's are: "<<count6<<endl;




return 0;
}
