#include <stdio.h>
#include <conio.h>
int main ()
{
    int input,number,amount,pin,user_pin=1234;

    printf("***WELCOME TO MOBILE BANK***\n\nPlease Press a Number;\n 1.Balance transfer\n 2.Mobile recharge. \n 3.Withdraw amount\n 4.cheek balance\n 5.Change PIN.\n 6.Pay Bill.\n 7.Help Line\n 8.quit\n");

 scanf("%d",&input );
 if(input==1) {
    printf("Enter Receive Account No;");
    scanf("%d,&number");
    printf("Enter your amount:");
    scanf("%d",&amount);
    printf("Enter your pin number:");
    scanf("%d",&pin);
    if(pin==user_pin){
        printf("your are success");

    }else {
       printf("your pin number is incorrect");

 }



}

   else if(input==2){
    int sim,input_sim,sim_type;
    printf("notification\n 1.Airtel\n 2.Robi\n 3.Grameenphone\n 4.Banglalink\n 5.Teletalk\n");
    scanf("%d",&sim);

    if(sim==1){
    input_sim="Airte";
    }

  else if(sim==2){
    input_sim="Robi";
    }

   else if(sim==3){
    input_sim="Grameenphone";
    }
    else if(sim==4){
    input_sim="Banglalink";
    }
     else if(sim==5){
    input_sim="Teletalk";
    }
    else {
        printf("your input is wrong");
    }
    printf("1.prepaid\n2.postpaid\n");
    scanf("%d",&sim_type);
    printf("Enter your %s phone number: ",input_sim);
    scanf("%d",&number);
    printf("Enter your amount:  ");
    scanf("%d",&amount);
    printf("Enter your pin number:  ");\
    scanf("%d",&pin);
    if(pin==user_pin){
        printf("your are success");
    }
    else {
        printf("your pin is wrong");
    }

   }
   else if(input==3){
    int cashout_type,agent_number;
    printf("notification\n 1.From agent\n 2.From ATM\n");
    scanf("%d",&cashout_type);
    if(cashout_type==1){
        printf("Enter the agent number: ");
        scanf("%d",&number);
        printf("Enter your amount:");
        scanf("%d",&amount);
        printf("Enter your pin number: ");
        scanf("%d",&pin);

        if(pin==user_pin){

        printf("your are success");
    }
    else {
        printf("your pin is wrong");
    }
    }
   }
else if(input==4){

    printf("Enter your pin: ");
    scanf("%d",&pin);
    if(pin==user_pin){
        printf("Your balance is: 25000.00");
    }
    else{
        printf("Your pin number is wrong");

    }

}
else if(input==5){
    int new_pin,confirm_pin;
    printf("Enter your old PIN:  ");
    scanf("%d",&pin);
    if(pin==user_pin){
        printf("Enter your new PIN:  ");
        scanf("%d",&new_pin);
        printf("confirm your PIN number:  ");
        scanf("%d",&confirm_pin);
        if(new_pin==confirm_pin){
            printf("Your PIN is successfully changed");

        }else {
        printf("Your PIN does`t match");
        }
    }
else {
     printf("Your PIN is wrong");
    }
}

else if(input==6){
    int bill,input_bill,bill_type,month,input_month,month_type,number;
    printf("Notification\n 1.Electricity bill\n 2.Gas bill\n 3.Water bill\n 4.Telephone bill\n 5.Internet bill\n\n");
    scanf("%d",&bill);

    if(bill==1){
            input_bill="Electricity bill";

    }
    if(bill==2){
        input_bill="Gas bill";
        int gas_tpye;
        printf("NOTIFICATION\n 1.Jalabad Gas\n 2.Sundarban Gas\n 3.Paschimanchalb Gas\n\n");
        scanf("%d",&gas_tpye);
    }
    if(bill==3){
        input_bill="water bill";
        int water_tpye;
        printf("NOTIFICATION\n 1.Dhaka WASA\n 2.Chattogram WASA\n\n");
        scanf("%d",&water_tpye);
    }
    if(bill==4){
        input_bill="Telephone";
    }
    if(bill==5){
        input_bill="Internet";
        int internet_tpye;
        printf("NOTIFICATION\n 1.Link3\n 2.AmberIT\n 3.Carnival\n 4.SamOnline\n 5.Triangle\n 6.KS Network Ltd\n 7.Dot Internet\n 8.Circle Network\n 9.Mazeda Network\n 10.Antarage Dot Com Ltd\n 11.SS Ali & Co\n 12.DDN\n 13.IT Net\n 14. Kaswar IT\n 15.HN Telecom\n 16.PC NET\n 17.Optima\n 18.29 Communication\n 19.Ideal Communication\n 20.RT Tradars\n 21.Daulatpur online\n 22.Sony Cyber Net\n 23.FR communication\n 24.Evolution Net\n 25.I Communication\n 26.BAS Network\n 27.FNF Online\n 28.Hm Telecom\n 29.Link Technologies\n 30.Xplore Net\n\n");
        scanf("%d",&internet_tpye);
    }



     printf("1.prepaid\n2.postpaid\n");
    scanf("%d",&bill_type);
    printf("Enter your bill period:\n1.January\n 2.February\n 3.March\n 4.April\n 5.May\n 6.June\n 7.July\n 8.August\n 9.September\n 10.October\n 11.November\n 12.December\n");
    scanf("%d",&month);
      if(month==1){
             input_month="January";
    }
    if(month==2){
        input_month="February";
    }
    if(month==3){
        input_month="March";
    }
    if(month==4){
             input_month="April";
    }
    if(month==5){
        input_month="May";
    }
    if(month==6){
        input_month="June";
    }
    if(month==7){
             input_month="July";
    }
    if(month==8){
        input_month="August";
    }
    if(month==9){
        input_month="September";
    }
    if(month==10){
             input_month="October";
    }
    if(month==11){
        input_month="November";
    }
    if(month==12){
        input_month="December";
    }

    printf("Input Bill number:   ");
    scanf("%d",&number);
    printf("Enter your amount:  ");
    scanf("%d",&amount);


    printf("Enter your pin number:  ");
    scanf("%d",&pin);
    if(pin==user_pin){
        printf("your are success");
    }
    else {
        printf("your pin is wrong");
    }


}


else if(input==7){
    printf("Mobile bank\nMobile no:01775050422");

}
else if(input==8){
    printf("YOUR ARE QUIT");
}



























}
