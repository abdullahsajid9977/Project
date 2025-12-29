#include <stdio.h>
#include <string.h>
struct saledate
{
    int day;
    int month;
    int year;
};

struct sale
{
    int saleid;
    int productid;
    int quantity;
    struct saledate date;
    int amount;
};

struct sale salecollection[100];
int salecount = 0;

void salemenu()
{
while (1)
    {
        int choice1;
        printf("1.Enter Sale\n");
        printf("2.Display Sale\n");
        printf("3.Search Sale\n");
        printf("4.Delete Sale\n");
        printf("5.Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice1);

    if (choice1 == 1)
{
    printf("Enter Sale ID:\n");
    scanf("%d", &salecollection[salecount].saleid);

    printf("Enter Product ID:\n");
    scanf("%d", &salecollection[salecount].productid);

    printf("Enter Quantity:\n");
    scanf("%d", &salecollection[salecount].quantity);

    printf("Enter Day:\n");
    scanf("%d", &salecollection[salecount].date.day);

    printf("Enter Month:\n");
    scanf("%d", &salecollection[salecount].date.month);

    printf("Enter Year:\n");
    scanf("%d", &salecollection[salecount].date.year);

    printf("Enter Amount:\n");
    scanf("%d", &salecollection[salecount].amount);

    salecount++;
}
    else if (choice1 == 2)
{
    for (int i = 0; i < salecount; i++)
{
    printf("Sale ID: %d\n", salecollection[i].saleid);
    printf("Product ID: %d\n", salecollection[i].productid);
    printf("Quantity: %d\n", salecollection[i].quantity);
    printf("Date: %d/%d/%d\n", salecollection[i].date.day,salecollection[i].date.month,salecollection[i].date.year);
    printf("Amount: %d\n", salecollection[i].amount);
}
}
    else if (choice1 == 3)
{
    while (1)
    {
        int choice2, searchid;
        printf("1.Search by Sale ID\n");
        printf("2.Search by Product ID\n");
        printf("3.Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice2);

    if (choice2 == 1)
{
    printf("Enter Sale ID:\n");
    scanf("%d", &searchid);
for (int i = 0; i < salecount; i++)
    {
      if (searchid == salecollection[i].saleid)
{
    printf("Sale ID: %d\n", salecollection[i].saleid);
    printf("Product ID: %d\n", salecollection[i].productid);
    printf("Quantity: %d\n", salecollection[i].quantity);
    printf("Date: %d/%d/%d\n", salecollection[i].date.day,salecollection[i].date.month,salecollection[i].date.year);
    printf("Amount: %d\n", salecollection[i].amount);
}
    }
}
else if (choice2 == 2)
    {
        printf("Enter Product ID:\n");
        scanf("%d", &searchid);
for (int i = 0; i < salecount; i++)
    {
        if (searchid == salecollection[i].productid)
{
    printf("Sale ID: %d", salecollection[i].saleid);
    printf("Product ID: %d", salecollection[i].productid);
    printf("Quantity: %d", salecollection[i].quantity);
    printf("Date: %d/%d/%d", salecollection[i].date.day,salecollection[i].date.month,salecollection[i].date.year);
    printf("Amount: %d", salecollection[i].amount);
}
    }
}
else if (choice2 == 3)
    {
        break;
    }
else
    {
        printf("Invalid Input\n");
    }
}
    }
else if (choice1 == 4)
    {
        int saleid;
        printf("Enter Sale ID You Want To Delete:\n");
        scanf("%d", &saleid);
for (int i = 0; i < salecount; i++)
    {
        if (saleid == salecollection[i].saleid)
        {
            for (int j = i; j < salecount - 1; j++)
            salecollection[j] = salecollection[j + 1];
            salecount--;
            break;
        }
    }
    }
else if (choice1 == 5)
    {
        break;
    }
else
    {
        printf("Invalid Input\n");
    }
}
}

struct supplier
{
    int supplierid;
    char name[50];
    char contact[20]; 
    char address[50];
};

struct supplier suppliercollection[100];
int suppliercount = 0;

void suppliermenu()
{
    while (1)
{
    int choice1;
    printf("1.Enter Supplier\n");
    printf("2.Display Supplier\n");
    printf("3.Search Supplier\n");
    printf("4.Delete Supplier\n");
    printf("5.Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice1);

if (choice1 == 1)
{
    printf("Enter Supplier Id:\n");
    scanf("%d", &suppliercollection[suppliercount].supplierid);

    printf("Enter Supplier Name:\n");
    scanf("%s", suppliercollection[suppliercount].name);

    printf("Enter Contact:\n");
    scanf("%s", suppliercollection[suppliercount].contact);

    printf("Enter Address:\n");
    scanf("%s", suppliercollection[suppliercount].address);

    suppliercount++;
}
else if (choice1 == 2)
{
for (int i = 0; i < suppliercount; i++)
    {
        printf("Supplier ID: %d\n", suppliercollection[i].supplierid);
        printf("Name: %s\n", suppliercollection[i].name);
        printf("Contact: %s\n", suppliercollection[i].contact);
        printf("Address: %s\n", suppliercollection[i].address);
    }
}
else if (choice1 == 3)
    {
        while (1)
{
    int choice2, searchid;
    char searchname[50];
    printf("1.Search by Supplier Id\n");
    printf("2.Search by Supplier Name\n");
    printf("3.Exit\n");
    printf("Enter Choice: ");
    scanf("%d", &choice2);

if (choice2 == 1)
{
    printf("Enter Supplier Id:\n");
    scanf("%d", &searchid);
for (int i = 0; i < suppliercount; i++)
    {
if (searchid == suppliercollection[i].supplierid)
    {
        printf("Supplier ID: %d\n", suppliercollection[i].supplierid);
        printf("Name: %s\n", suppliercollection[i].name);
        printf("Contact: %s\n", suppliercollection[i].contact);
        printf("Address: %s\n", suppliercollection[i].address);
    }
    }
}
 else if (choice2 == 2)
{
    printf("Enter Supplier Name:\n");
    scanf("%s", searchname);
for (int i = 0; i < suppliercount; i++)
    {
        if (strcmp(searchname, suppliercollection[i].name) == 0)
    {
        printf("Supplier ID: %d\n", suppliercollection[i].supplierid);
        printf("Name: %s\n", suppliercollection[i].name);
        printf("Contact: %s\n", suppliercollection[i].contact);
        printf("Address: %s\n", suppliercollection[i].address);
    }
    }
}
else if (choice2 == 3)
    break;
else
    printf("Invalid Input\n");
    }
    }
else if (choice1 == 4)
{
    int supplierid;
    printf("Enter Supplier Id You Want To Delete:\n");
    scanf("%d", &supplierid);
    for (int i = 0; i < suppliercount; i++)
{
    if (supplierid == suppliercollection[i].supplierid)
{
    for (int j = i; j < suppliercount - 1; j++)
    suppliercollection[j] = suppliercollection[j + 1];
    suppliercount--;
    break;
}
}
    }
else if (choice1 == 5)
{
    break;
}
else
    {
        printf("Invalid Input\n");
    }
}
}
struct purchasedate
{
    int day;
    int month;
    int year;
};

struct purchase
{
    int purchaseid;
    int supplierid;
    int totalamount;
    struct purchasedate date;
};

struct purchase purchasecollection[100];
int purchasecount = 0;

void purchasemenu()
{
    while (1)
 {
    int choice1;
    printf("\n1.Enter Purchase\n");
    printf("2.Display Purchase\n");
    printf("3.Search Purchase\n");
    printf("4.Delete Purchase\n");
    printf("5.Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice1);

if (choice1 == 1)
{
    printf("Enter Purchaser Id: ");
    scanf("%d", &purchasecollection[purchasecount].purchaseid);

    printf("Enter Supplier Id: ");
    scanf("%d", &purchasecollection[purchasecount].supplierid);

    printf("Enter Day: ");
    scanf("%d", &purchasecollection[purchasecount].date.day);

    printf("Enter Month: ");
    scanf("%d", &purchasecollection[purchasecount].date.month);

    printf("Enter Year: ");
    scanf("%d", &purchasecollection[purchasecount].date.year);

    printf("Enter Total Amount: ");
    scanf("%d", &purchasecollection[purchasecount].totalamount);

    purchasecount++;
}

else if (choice1 == 2)
{
     for (int i = 0; i < purchasecount; i++)
    {
        printf("\nPurchaser ID:%d\nSupplier Id:%d\nDate:%d/%d/%d\nTotal Amount:%d\n",purchasecollection[i].purchaseid,purchasecollection[i].supplierid,purchasecollection[i].date.day,purchasecollection[i].date.month,purchasecollection[i].date.year,purchasecollection[i].totalamount);
    }
}

else if (choice1 == 3)
{
    while (1)
{
    int choice2, searchid;
    printf("\n1.Search by Purchaser Id\n");
    printf("2.Search by Supplier Id\n");
    printf("3.Exit\n");
    printf("Enter Choice: ");
    scanf("%d", &choice2);

if (choice2 == 1)
{
    printf("Enter Purchaser Id: ");
    scanf("%d", &searchid);

    for (int i = 0; i < purchasecount; i++)
   {
    if (searchid == purchasecollection[i].purchaseid)
{
    printf("\nPurchaser ID:%d\nSupplier Id:%d\nDate:%d/%d/%d\nTotal Amount:%d\n",purchasecollection[i].purchaseid,purchasecollection[i].supplierid,purchasecollection[i].date.day,purchasecollection[i].date.month,purchasecollection[i].date.year,purchasecollection[i].totalamount);
}
    }
}

else if (choice2 == 2)
    {
        printf("Enter Supplier Id: ");
        scanf("%d", &searchid);

for (int i = 0; i < purchasecount; i++)
    {
if (searchid == purchasecollection[i].supplierid)
{
    printf("\nPurchaser ID:%d\nSupplier Id:%d\nDate:%d/%d/%d\nTotal Amount:%d\n",purchasecollection[i].purchaseid,purchasecollection[i].supplierid,purchasecollection[i].date.day,purchasecollection[i].date.month,purchasecollection[i].date.year,purchasecollection[i].totalamount);
}
    }
}

else if (choice2 == 3)
{
    break;
}
else
{
    printf("Invalid Input\n");
}
 }
    }

else if (choice1 == 4)
{
    int purchaserid;
    printf("Enter Purchaser Id You Want To Delete: ");
    scanf("%d", &purchaserid);

for (int i = 0; i < purchasecount; i++)
{
    if (purchaserid == purchasecollection[i].purchaseid)
{
    for (int j = i; j < purchasecount - 1; j++)
{
    purchasecollection[j] = purchasecollection[j + 1];
}
    purchasecount--;
    break;
}
}
}

else if (choice1 == 5)
    {
        break;
    }

else
    {
        printf("Invalid Input\n");
    }
    }
}

void title()
{
    printf("***************************************\n");
    printf("WELCOME TO INVENTORY MANAGEMENT SYSTEM\n");
    printf("***************************************\n");
}

void inventorymenu()
{
int choice;
    while (1)
{
    printf("1.Product Details\n");
    printf("2.Supplier Details\n");
    printf("3.Purchase Details\n");
    printf("4.Sale Details\n");
    printf("5.Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

if (choice == 1)
    printf("In process\n");
else if (choice == 2)
    suppliermenu();
else if (choice == 3)
    purchasemenu();
else if (choice == 4)
    salemenu();
else if (choice == 5)
    break;
else
    printf("Invalid Entry\n");
    }
}

int main()
{
    title();
    inventorymenu();
    return 0;
}
