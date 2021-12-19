#include<stdio.h>


    //Declare variables
    char name[10];
    int order_number;
    int cost,p,number_of_food=0,total=0;
	int order_count=0,served_count=0,waiting_now=0,i;

int order ()
{
    int  in, qun;
    printf("\n");
    printf ("please enter your name: ");
    gets(name);
    order_number = 1000+order_count;
    printf("\n");
    printf("############################  OUR MENU  ###########################\n");
    printf("\n");
        printf("No.of Item\tmeal name\tSize\t\t\tPrice(Rs)\n");
        printf("press[01]\tburger\t\tsmall/large\t\t200/300\n");
        printf("press[02]\tpizza\t\tsmall/medium/large\t450/900/1400\n");
        printf("press[03]\tchicken bucket\tmini/medium/large\t500/900/1700\n");
        printf("press[04]\tcheese kottu\tsmall/large\t\t400/700\n");
        printf("press[05]\tPasta\t\thalf/full\t\t400/800\n");
        printf("press[06]\tBiriyani\thalf/full\t\t200/350\n");
        printf("press[07]\tsoft drink\t375ml\t\t\t250\n");
        printf("press[08]\tMilkshake\t250ml\t\t\t200\n");

    cost = 0;
    number_of_food = 0;

    number :
    printf("\n");
    printf ("How many items you want to order? ");
    scanf ("%d", &p);

    //
    getchar ();
    while (p--){
        printf ("\nEnter chosen No.of Item\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 01 : {
        printf ("Enter the size of burger: 1.small  2.large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qun);
        getchar();
        printf ("............................ \n");
        number_of_food +=qun;

        if (i==1)
        {
            cost = 200*qun;
            total=total+cost;
        }

        else
        {
            cost=300*qun;
            total=total+cost;
        }
        break;
    }
    case 02 :{
        printf ("Enter the size of  Pizza: 1.small  2.medium  3.large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qun);
        getchar();
        printf ("............................ \n");
        number_of_food +=qun;

        if (i==1)
        {
            cost=450*qun;
            total=total+cost;
        }
        else if (i==2)
        {
            cost=900*qun;
            total=total+cost;
        }

        else
            {
                cost=1400*qun;
                total=total+cost;
            }

        break;
    }
    case 03 :{
        printf ("Enter the amount of  chicken bucket: 1.mini  2. 4 medium  3. large\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("Please enter the quantity: ");
        scanf ("%d", &qun);
        getchar();
        printf ("............................ \n");
        number_of_food +=qun;

        if (i==1)
        {
            cost=500*qun;
            total=total+cost;
        }

        else if (i==2)
        {
            cost=900*qun;
            total=total+cost;
        }

        else
        {
            cost=1700*qun;
            total=total+cost;
        }

        break;
    }
    case 04 :{
        printf ("Enter the size of chesse kottu: 1. small  2. large\n");
        int i;
        scanf ("%d", &i);
        getchar();
        printf ("............................ \n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qun);
        getchar();

        number_of_food +=qun;

        if (i==1)
        {
            cost=400*qun;
            total=total+cost;
        }

        else
        {
            cost=700*qun;
            total=total+cost;
        }

        break;
    }
    case 05 :{
        printf ("Enter the size of pasta: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qun);
        getchar();
        printf ("............................ \n");
        number_of_food +=qun;

        if (i==1)
        {
            cost=400*qun;
            total=total+cost;
        }

        else
        {
            cost=800*qun;
            total=total+cost;
        }

        break;
    }
    case 06 :{
        printf ("Enter the size of Biriyani: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qun);
        getchar();
        printf ("............................ \n");
        number_of_food +=qun;

        if (i==1)
        {
            cost=200*qun;
            total=total+cost;
        }

        else
        {
            cost=350*qun;
            total=total+cost;
        }

        break;
    }
    case 07 : {
        printf ("soft drink\n");
        printf("\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qun);
        getchar();
        printf ("............................ \n");
        number_of_food +=qun;
        cost=200*qun;
        total=total+cost;
        break;
    }

    case 8 :{
	    printf ("Milkshake\n");
        printf("\n");
        printf ("Please enter the quantity: ");
        scanf ("%d", &qun);
        getchar();
        printf ("............................ \n");
        number_of_food +=qun;
        cost=200*qun;
        total=total+cost;
        break;
    }
    default : {
        printf ("Invalid selection try again\n");
        printf("\n");
        p++;
    }
        }
    }
    char other;
    printf("\n");
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &other);
    printf("\n");
    if (other == 'y' || other == 'N')
        goto number;
    printf ("\n-------------------you have  ordered %d foods----------------------\n",number_of_food);
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf ("Your bill Rs %d.Please wait while prepare the food.Thank you for order %s\n",total,name);
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    order_count ++;
    return 0;
}
int recive ()
{
    if (order_count==0){
        printf ("!!!!!!!!!Please order first!!!!!!!!!!\n");
        printf ("\n");
        return 0;
    }

    else if (served_count == order_count) {
        printf ("All order served\n");
        return 0;
    }



    printf ("Order no. %d by %s is ready\n",order_number,name);
    printf ("Enjoy your meal\n\n");
    served_count++;
    return 0;
}
void display ()//
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("\n");
}

int main ()
{
    printf("\t\t****************WELCOME*******************\n");

    printf("\t\t****************CAFE 24*******************\n");
    printf("\t\t******************************************\n");
    while (1){
		printf("\n");
        printf ("Press[1]to order\n");
        printf ("Press[2]to Serve\n");
        printf ("Press[3]to Display\n");
        printf ("Press[4]to Exit the program\n");
        printf("\n");
        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {

                recive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                printf ("Thank you for visiting our shop.come  again\n\n");

            }
        }
    }
    return 0;
}

