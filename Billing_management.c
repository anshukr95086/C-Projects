#include <stdio.h>
#include <string.h>

struct Item
{
    char item_name[15];
    float quantity;
    float price_per_Unit;
};
int main()
{
    int max_items;
    printf("Enter max items: ");
    scanf("%d", &max_items);
    struct Item item[max_items];

    for (int i = 0; i < max_items; i++)
    {
        printf("Enter details of item %d:- \n", i + 1);
        printf("Enter item name: ");
        scanf("%s", item[i].item_name);
        printf("Enter Quantity: ");
        scanf("%f", &item[i].quantity);
        printf("Enter Price_per_Unit: ");
        scanf("%f", &item[i].price_per_Unit);
    }
    FILE *fptr;
    fptr = fopen("Bill.txt", "w");
    char ch1[10] = "Items";
    fprintf(fptr, "%-15s", ch1);
    char ch2[10] = "Quantity";
    fprintf(fptr, "%-11s", ch2);
    char ch3[11] = "Price/Unit";
    fprintf(fptr, "%-13s", ch3);
    char ch4[10] = "Total";
    fprintf(fptr, "%-5s\n", ch4);
    for (int i = 0; i < max_items; i++)
    {
        fprintf(fptr, "%-15s", item[i].item_name);
        fprintf(fptr, "%-11.3f", item[i].quantity);
        fprintf(fptr, "%-13.3f", item[i].price_per_Unit);
        fprintf(fptr, "%-5.3f\n", item[i].quantity * item[i].price_per_Unit);
    }
      
    fclose(fptr);
}