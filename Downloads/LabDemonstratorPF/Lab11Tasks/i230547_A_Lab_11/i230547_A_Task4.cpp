#include<iostream>

using namespace std;


int qualitypoints(int average);

int main()

{

int studentaverage;

cout<<"enter the student's average: ";

cin>>studentaverage;

if(studentaverage>=0&& studentaverage<=100)
{
int points= qualitypoints(studentaverage);

cout<<"Quality points " <<points<<endl;

}

else
{

cout<<"invalid average input. Please enter a value between 0 and 100. "<<endl;

}

return 0;
}

int qualitypoints(int average)

{

if(average>=90&& average<=100)
{


return 4;

}
else if(average>=80&& average<=89)
{

return 3;
}
else if(average>=70&& average<=79)
{
return 2;

}
else if(average>=60&& average<=69)

{
return 1;
}

else
{

return 0;

}

}
