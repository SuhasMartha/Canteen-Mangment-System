/*

SRU Canteen Management System
******************************

Developer Name : Suhas Martha

Section : K2

Roll Number : 2203A54014


*/

#include<stdio.h>
int main()
{
    int m1,t,v1,v2;
    printf("**********************");
    printf("\n* WELCOME TO SRU CMS *");
    printf("\n**********************");
    printf("\n1. Tiffin's\n2. Vegetarian Food\n3. Non Vegetarian Food");
    printf("\nSelect any iteam from above List: ");
    scanf("%d",&m1);
    switch(m1)
    {
    case 1:
        printf("\nTiffin Iteams");
        printf("\n1. Poori\n2. Chapati\n3. Vada\n4. Dosa");
        printf("\nSelect any iteam from above List: ");
        scanf("%d",&t);
        switch(t)
        {
          case 1: printf("Your Iteam Poori has booked sucessfully");
          break;
          case 2: printf("Your Iteam Chapati has booked successfully");
          break;
          case 3: printf("Your Iteam Vada has booked successfully");
          break;
          case 4: printf("Your Iteam Dosa has booked successfully");
          break;
          default: printf("Your Selected Iteam is not in the List");
        }
    break;    
    case 2:
        printf("\nVegetarian Iteams");
        printf("\n1. Aloo Biryani \n2. Paneer Biryani \n3. Veg Biryani \n4. Gobi Manchuria ");
        printf("\nSelect any iteam from above List: ");
        scanf("%d",&v1);
        switch(v1)
        {
            case 1: printf("Your Iteam Aloo Biryani has booked successfully");
            break;
            case 2: printf("Your Iteam Paneer Biryani has booked successfully");
            break;
            case 3: printf("Your Iteam Veg Biryani has booked successfully");
            break;
            case 4: printf("Your Iteam Gobi Manchuria has booked successfully");
            break;
            default: printf("Your Selected Iteam is not in the List");
        }
    break;
    case 3:
        printf("\nNon Vegetarian Iteams");
        printf("\n1. Chicken Biryani \n2. Chicken Fried Rice \n3. Egg Biryani \n4. Chicken Fried Rice");
        printf("\nSelect any iteam from above List: ");
        scanf("%d",&v2);
        switch(v2)
        {
            case 1: printf("Your Iteam Chicken Briyani has booked successfully");
            break;
            case 2: printf("Your Iteam Chicken Fried Rice has booked successfully");
            break;
            case 3: printf("Your Iteam Egg Briyani has booked successfully");
            break;
            case 4: printf("Your Iteam Chicken Manchuria has booked successfully");
            break;
            default: printf("Your Selected Iteam is not in the List");
        }
    break;
    default: printf("\nYour Selected Iteam is not in the lisit");
    }
    printf("\nThank you for using SRU CMS");
    return 0;
}





