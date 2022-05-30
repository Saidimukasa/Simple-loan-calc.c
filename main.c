#include <stdio.h>
#include <stdlib.h>
/**This is a user defined function that we are going to use to out put simple interest then later
  use simple interest to calculate the Monthly installments*/
int guildloan(int principle, float rate,int time)
{
    int result1=(principle*(rate)*time);
    int time=24;//the are the months in the two years since the question requires us to get the monthly installments
    int principle=3000000;//This is the actual loan amount that a student borrows without interest
    int rate=4/100;// This is the percentage of interest at which the loan is being given
  return result1;
}
int main()
{
    int simpleinterest  = guildloan(3000000,0.04,24);
    printf("simpleInterest: %d \n", simpleinterest);
    /**we are finding the monthly installments for the one student
      so we add simple interest with principle and divide it with 24 months**/
    int monthtyinstallment = (simpleinterest + 3000000)/ 24;
    printf("amount per installment: %d\n", monthtyinstallment);
    int permonth = monthtyinstallment*47;
    printf("amount per month: %d\n", permonth);
    int peryear = permonth*12;
    printf("amount per year: %d\n", peryear);
    int totalamount = peryear*2;
    printf("Total amount for all 47 after 2years: %d\n", totalamount);
    int profit=simpleinterest*47;
    printf("profit for all the students:%d\n",profit);
    return 0;
}
