#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
void sum(int arr[],int n)
{
            int sum=0;
            for(int i=0;i<n;i++)
                {
                    sum+=arr[i];
                }
            for(int i=0;i<n;i++)
               {
                std::cout<<"\n";
                std::cout<<arr[i];
                std::cout<<" +";
               }
            std::cout<<"\nThe sum is \n";
            std::cout<<"\n";
            std::cout<<sum;
            std::cout<<"\n";
        }
int main()
    {
        system("cls");
        int arr[10],n;
        std::cout<<"Enter the Size of the array \n";
        std::cin>>n;
        std::cout<<" \n Enter the array element you want to add \n ";
        for(int i=0;i<n;i++)
            {
                std::cin>>arr[i];
            }
        std::cout<<" \n \tDisplaying the array \n";
        for(int i=0;i<n;i++)
            {
                std::cout<<arr[i];   
                std::cout<<"\n";  
               }
     sum(arr,n);
     getch();
    }