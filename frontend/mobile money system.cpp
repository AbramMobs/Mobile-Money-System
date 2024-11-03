//abram mobs
#include <stdio.h>

int main() {
    int pin, choice, mobile, amount, dial, option, selection, meter;
    float bal = 100000;
    dial = 185;
    pin = 2468;

    printf("---WELCOME TO MOBILE MONEY SERVICE--\n");
    printf("\n Dial:");
    scanf("%d", &dial);

    if (dial == 185) {
     	printf("1.Send Money\n");
	        printf("2.Airtime/Bundles\n");
	        printf("3.Withdraw Cash\n");
	        printf("4.Pay Bill\n");
	        printf("5.Payments\n");
	        printf("6.Financial Services\n");
	        printf("7.Savings & Loans\n");
	        printf("8.My Account\n");
	
	        // ENTER CHOICE TAB
	        printf("\n Enter Reply:");
	        scanf("%d", &choice);
	
	        if (choice == 1) {
	            printf(" Enter Mobile Number:");
	            scanf("%d", &mobile);
	            printf(" Enter Amount:");
	            scanf("%d", &amount);
	            printf(" Enter PIN:");
	            scanf("%d", &pin);
	             if (pin != 2468){
	                        	printf(" Invalid PIN code. You have 4 attempts left to lock your account.");
	                        	return 0;
							}
	
	            if (amount > bal) {
	                printf("Insufficient funds. Sending failed.\n");
	            } else {
	                bal -= amount;
	                printf(" You have successfully sent \n UGX %d Uganda Shillings to %d. \n Your new balance is: Shs.%.2f\n", amount, mobile, bal);
	            }
	        } else if (choice == 2) {
	            printf("1.Buy Airtime\n");
	            printf("2.Buy Data Bundles\n");
	            printf("\n Enter Reply:");
	            scanf("%d", &option);
	
	            if (option == 1) {
	                printf("1.Buy for Self\n");
	                printf("2.Buy for other\n");
	                printf("\n Enter Reply:");
	                scanf("%d", &selection);
	
	                if (selection == 1) {
	                    printf(" Enter Amount:");
	                    scanf("%d", &amount);
	                    printf(" Enter PIN:");
	                    scanf("%d", &pin);
	                        if (pin != 2468){
	                        	printf(" Invalid PIN code. You have 4 attempts left to lock your account.");
	                        	return 0;
							}
	
	                    if (amount > bal) {
	                        printf("Insufficient funds. Transaction failed.\n");
	                    } else {
	                        bal -= amount;
	                        printf("\n You have successfully bought airtime\n worthf UGX %d Uganda Shillings. \n Your new balance is: Shs.%.2f\n", amount, bal);
	                    }
	                }
	
	                if (selection == 2) {
	                    printf(" Enter Mobile Number:");
	                    scanf("%d", &mobile);
	                    printf(" Enter Amount:");
	                    scanf("%d", &amount);
	                    printf(" Enter PIN:");
	                    scanf("%d", &pin);
	                     if (pin != 2468){
	                        	printf(" Invalid PIN code. You have 4 attempts left to lock your account.");
	                        	return 0;
							}
	
	                    if (amount > bal) {
	                        printf("Insufficient funds. Transaction failed.\n");
	                    } else {
	                        bal -= amount;
	                        printf("\n You have successfully bought airtime to\n %d worth UGX %d Uganda Shillings. \n Your new balance is: Shs.%.2f\n", mobile, amount, bal);
	                    }
	                }
	            } else if (option == 2) {
	                printf("1.Buy for Self\n");
	                printf("2.Buy for other\n");
	                printf("\n Enter Reply:");
	                scanf("%d", &selection);
	
	                if (selection == 1) {
	                    printf(" Enter Amount:");
	                    scanf("%d", &amount);
	                    printf(" Enter PIN:");
	                    scanf("%d", &pin); if (pin != 2468){
	                        	printf(" Invalid PIN code. You have 4 attempts left to lock your account.");
	                        	return 0;
							}
	
	                    if (amount > bal) {
	                        printf("Insufficient funds. Transaction failed.\n");
	                    } else {
	                        bal -= amount;
	                        printf("\n You have successfully bought data\n bundles worth UGX %d Uganda Shillings. \n Your new balance is: Shs.%.2f\n", amount, bal);
	                    }
	                }
	
	                if (selection == 2) {
	                    printf(" Enter Mobile Number:");
	                    scanf("%d", &mobile);
	                    printf(" Enter Amount:");
	                    scanf("%d", &amount);
	                    printf(" Enter PIN:");
	                    scanf("%d", &pin);
	                     if (pin != 2468){
	                        	printf(" Invalid PIN code. You have 4 attempts left to lock your account.");
	                        	return 0;
							}
	
	                    if (amount > bal) {
	                        printf("Insufficient funds. Transaction failed.\n");
	                    } else {
	                        bal -= amount;
	                        printf("\n You have successfully bought data\n bundles for %d worth UGX %d Uganda Shillings. \n Your new balance is: Shs.%.2f\n", mobile, amount, bal);
	                    }
	                }
	            }
	        } else if (choice == 3) {
	            printf(" Enter Amount:");
	            scanf("%d", &amount);
	            printf(" Enter PIN:");
	            scanf("%d", &pin);
	             if (pin != 2468){
	                        	printf(" Invalid PIN code. You have 4 attempts left to lock your account.");
	                        	return 0;
							}
	
	            if (amount > bal) {
	                printf("Insufficient funds. Withdrawal failed.\n");
	            } else {
	                bal -= amount;
	                printf("\n You have successfully withdrawn\n UGX %d Uganda Shillings. \n Your new balance is: Shs.%.2f\n", amount, bal);
	            }
	        } else if (choice == 4) {
	            printf("1.UMEME\n");
	            printf("2.Water\n");
	            printf("3.Pay Tv\n");
	            printf("4.Pay Solar\n");
	            printf("5.Pay Rent\n");
	            printf("\n Enter Reply:");
	            scanf("%d", &option);
	
	            if (option == 1) {
	                printf("1.Buy Yaka\n");
	                printf("\n Enter Reply:");
	                scanf("%d", &selection);
	
	                if (selection == 1) {
	                    printf(" Enter Meter Number:");
	                    scanf("%d", &meter);
	                    printf(" Enter Amount:");
	                    scanf("%d", &amount);
	                    printf(" Enter PIN:");
	                    scanf("%d", &pin); if (pin != 2468){
	                        	printf(" Invalid PIN code. You have 4 attempts left to lock your account.");
	                        	return 0;
							}
	
	                    if (amount > bal) {
	                        printf("Insufficient funds. Transaction failed.\n");
	                    } else {
	                        bal -= amount;
	                        printf("\n You have successfully paid\n UGX %d Uganda Shillings to UMEME\n Uganda Ltd in reference to %d \n Your new balance is: Shs.%.2f\n", amount, meter, bal);
	                    }
	                }
	            }else if (option == 2) {
	                printf("1.Pay NWSC\n");
	                printf("\n Enter Reply:");
	                scanf("%d", &selection);
	
	                if (selection == 1) {
	                    printf(" Enter Meter Number:");
	                    scanf("%d", &meter);
	                    printf(" Enter Amount:");
	                    scanf("%d", &amount);
	                    printf(" Enter PIN:");
	                    scanf("%d", &pin);
	                     if (pin != 2468){
	                        	printf(" Invalid PIN code. You have 4 attempts left to lock your account.");
	                        	return 0;
							}
	
	                    if (amount > bal) {
	                        printf("Insufficient funds. Transaction failed.\n");
	                    } else {
	                        bal -= amount;
	                        printf("\n You have successfully paid\n UGX %d Uganda Shillings to NWSC\n Uganda Ltd in reference to %d \n Your new balance is: Shs.%.2f\n", amount, meter, bal);
	                    }
	                }
	            }
	        } else if (choice == 5) {
	            printf("1.Pay Easy\n");
	            printf("2.Betting\n");
	            printf("3.Kabaka Run\n");
	            printf("4.MobiPay\n");
	            printf("5.UNEB\n");
	        } else if (choice == 6) {
	            printf("1.Banks\n");
	            printf("2.SACCOs\n");
	            printf("3.ATM Withdrawal\n");
	            printf("4.NSSF Savings\n");
	            printf("5.Insurance\n");
	        } else if (choice == 7) {
	            printf("1.Wewole\n");
	            printf("2.Quick Loan\n");
	            printf("\n Enter Reply:");
	            scanf("%d", &option);
	            
	            if (option == 1) {
	                 printf(" Enter Amount:");
	                    scanf("%d", &amount);
	                    printf(" Enter PIN:");
	                    scanf("%d", &pin);
						 if (pin != 2468){
	                        	printf(" Invalid PIN code. You have 4 attempts left to lock your account.");
	                        	return 0;
							}
	
	                    if (amount > bal) {
	                        printf(" Your not eligible for wewole loan. Transaction failed.\n");
	                    } else {
	                        bal += amount;
	                        printf("\n You have successfully borrowed\n UGX %d Uganda Shillings from wewole\n money services and interest of 10 percent. \n Your new balance is Shs.%.2f\n", amount, bal);
	                    }
	            }else if (option == 2) {
		                 printf(" Enter Amount:");
		                    scanf("%d", &amount);
		                    printf(" Enter PIN:");
		                    scanf("%d", &pin);
		                     if (pin != 2468){
	                        	printf(" Invalid PIN code. You have 4 attempts left to lock your account.");
	                        	return 0;
							}
		
		                    if (amount > bal) {
		                        printf(" Your not eligible for Quick loan. Transaction failed.\n");
		                    } else {
		                        bal += amount;
		                        printf("\n You have successfully borrowed\n UGX %d Uganda Shillings from quick\n loan and interest of 8 percent. \n Your new balance is Shs.%.2f\n", amount, bal);
		                    }
		        } 
				}else if (choice == 8) {
		            printf("1.Check Balance\n");
		            printf("2.Request Statement\n");
		            printf("3.Change PIN\n");
		            printf("4.Last 5 Transactions\n");
		            printf("5.Approvals\n");
		            printf("6.Transactions Reversals\n");
		            		 printf("\n Enter Reply:");
	            			 scanf("%d", &option);
	
	            if (option == 1) {
	                    printf(" Enter PIN:");
	                    scanf("%d", &pin);
	                        if (pin != 2468){
	                        	printf(" Invalid PIN code. You have 4 attempts left to lock your account.");
	                        	return 0;
							}
	                     printf("\n Balance Shs.%.2f\n Thank you for using Denise mobile money services.\n Do not share your Mobile Money PIN.", bal);

	}
		         
		        
		}
	}else if (dial != 185) {
			        printf("\n Invalid Service Code.");
		         }
		         
		          return 0;
}
