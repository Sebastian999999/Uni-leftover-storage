#include<iostream>
using namespace std;
int main()
{     char arr[20];
int vowel[5]={0,0,0,0,0};
       int count=0,tem=0;
     cout<<"\nEnter a sentence:";
     cin.ignore();
     for(int i=0;i<20;i++)
     { 
        if(cin.get())
        break;
     }
      for(int i=0;i<20;i++)
      { if(arr[i]>='A'&& arr[i]<='Z')
         { count++;
         }
        if(arr[i]>='a'&& arr[i]<='z')
        { tem++;
        }
       }
       cout<<"\nThere are"<<count<<" number of Upper case letter";
       cout<<"\nThere are"<<tem<<" number of lower case letter";
       for(int i=0;i<20;i++)
       {  if(arr[i]=='a'&& arr[i]=='A')
            vowel[0]++;
             if(arr[i]=='e'&& arr[i]=='E')
            vowel[1]++;   
        if(arr[i]=='i'&& arr[i]=='I')
            vowel[2]++;
              if(arr[i]=='o'&& arr[i]=='O')
            vowel[3]++;
            if(arr[i]=='u'&& arr[i]=='U')
            vowel[4]++;
        }
        for(int i=0;i<5;i++)
        {
        cout<<vowel[i]<<" ";
        }
    return 0;
    }
