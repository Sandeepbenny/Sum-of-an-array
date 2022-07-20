#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
void operation(int arr[],int n)
{
            int sum=0,sub=0;
            for(int i=0;i<n;i++)
                {
                    sum+=arr[i];
                }
            for(int i=0;i<n;i++)
                {
                    sub-=arr[i];
                }
            for(int i=0;i<n;i++)
               {
                std::cout<<"\n";
                std::cout<<arr[i];
                std::cout<<" +";
               }
            std::cout<<"\nThe sum is :\n";
            std::cout<<sum;
            std::cout<<"\n";
            for(int i=0;i<n;i++)
               {
                std::cout<<"\n";
                std::cout<<arr[i];
                std::cout<<" -";
               }
            std::cout<<"\nThe sub is: \n";
            std::cout<<sub;
            std::cout<<"\n";
        
        }
int main()
        {
        system("cls");
        int arr[10],n;
        system("cls");
        std::cout<<"\n   "<<std::endl;
        std::cout<<"\n  "<<std::endl;
        std::cout<<"\t ** OPERATION ON AN, ARRAY ALGORITHM BY SANDEEP*** \n"<<std::endl;
        std::cout<<" \n Enter the Size of the array \n";
        std::cin>>n;
        std::cout<<" \n Enter the array element you want to add \n ";
        for(int i=0;i<n;i++)
            {
                std::cin>>arr[i];
            }
        system("cls");                
        operation(arr,n);
        getch();
    }