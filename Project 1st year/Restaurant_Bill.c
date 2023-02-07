#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct item {
    char Item[20]; // no of item take thats is 20
    float price;
    int qty;
};                 // ; is used

struct orders {
    char customer[50];
    char date[50];
    int numofItem;
    struct item itm[]      // to store different types of item 
};

// fuction to generate bill
void generateBillHeader(char name[50], char date[30]) {
    printf("\n\n");
    printf("\t             GOPAL Restaurant");
    printf("\n\t---------------------------------------");
    printf("\nDate:%s",date);
    printf("\nInvoice To: %s", name);
    printf("\n");
    printf("-------------------------------------------\n");
    printf("Items\t\t");
    printf("Qty\t\t");
    printf("Total\t\t");
    printf("\n-----------------------------------------");
    printf("\n\n");
      
}

void generateBillBody(char item[30],int qty, float price) {
    printf("%s\t\t", item);
    printf("%d\t\t", qty);
    printf("%.2f\t\t", qty * price);
    printf("\n");
}



void generateBillFooter(float total) {
    printf("\n");
    float dis = 0.1 * total;
    float netTotal = total - dis;
    float cgst = 0.09 * netTotal, grandTotal = netTotal + 2*cgst; // net Total + cgst + sgst
    printf("-----------------------------------------------\n");
    printf("Sub Total\t\t\t%.2f", total);
    printf("\nDiscount @10%s\t\t\t.2f", "%", dis);
    printf("\n\t\t\t\t-----------");
    printf("\nNet Total\t\t\t%.2f", netTotal);
    printf("\nCGST @9%s\t\t\t%.2f","%", cgst);
    printf("\nSGST @9%s\t\t\t%.2f","%", cgst);
    printf("\n------------------------------------+-----");
    printf("\nGrand Total\t\t\t%.2f", grandTotal);
    printf("\n------------------------------------------");
    
}

int main() {
    float  total;
    int opt,n;  // opt = options
    struct orders ord;
    struct orders order;
    char saveBill = 'y'; // yes for save bill

    FILE *fp;      // file pointer for share bill
    //dashboard
    printf("\t=============== GOPAL RESTAURANT ===============");
    printf("\n\nPlease select your prefered operation:");
    printf("\n\n1.Generate Invoice / Bill ");   // double \n used for space between restaurant name and code
    printf("\n2.Show all Invoices");
    printf("\n3.Search Invoice");
    printf("\n4.Exit");

    printf("\n\nYour choice:\t");
    scanf("%d", &opt);
    fgetc(stdin);

    switch(opt) {
        case 1:
            system("clear"); // for clear unwanted thingh form the bill
                printf("\nPlease enter the name of the customer:\t");
                fgets(ord.customer,50,stdin);
                ord.customer[strlen(ord.customer)-1] = 0;
                strcpy(ord.date,__DATE__);
                printf("\nPlease enter the quantity of items: \t");
                scanf("%d", &n);
                ord.numofItem = n;

                for( int i = 0; i<n; i++) {
                    fgetc(stdin);
                    printf("\n\n");
                    printf("Please enter the item name.%d:\t", i+1);
                    fgets(ord.itm[i].Item,20,stdin);
                    ord.itm[i].Item[strlen(ord.itm[i].Item)-1] = 0;
                    printf(" Please enter the quantity : \t");
                    scanf("%d",&ord.itm[i].qty);
                    printf("Please enter the unit price:\t");
                    scanf("%f", &ord.itm[i].price);
                    total += ord.itm[i].qty * ord.itm[i].price;
                }
                generateBillHeader(ord.customer,ord.date);
                for(int i = 0; i<ord.numofItem;i++) {
                generateBillBody(ord.itm[i].Item,ord.itm[i].qty,ord.itm[i].price);
                }
                generateBillFooter(total);

                // asked the user for Save the Bill

               printf("\nDo you want to save the invoice [y/n]:\t");
        scanf("%s",&saveBill);

        if(saveBill == 'y'){
            fp = fopen("RestaurantBill.dat","a+");
            fwrite(&ord,sizeof(struct orders),1,fp);
        if(fwrite != 0)
            printf("\nSuccessfully saved");
        else 
            printf("\nError saving");
            fclose(fp);
        }
        break;

        case 2:
                  // show all the invoices
                  system("clear");
                  fp = fopen("RestaurantBill.dat","r");
                  printf("\n   ********Your previous Invoices ********\n");
                  while(fread(&order, sizeof(struct orders),1,fp));
                  generateBillHeader(order.customer,order.date);
                  for(int i = 0; i<=order.numofItem;i++) {
                    generateBillBody(order.itm[i].Item,order.itm[i].qty,order.itm[i].price);
                    total+= order.itm[i].qty * order.itm[i].price; 
                  }
                  generateBillFooter(total);
                  }
                  fclose(fp); // file close
                  



    printf("\n\n");

    return 0;
} 
