#include <stdio.h>
#include <stdlib.h>

int main()
{

    char name[100];
    char defaultStatus;
    char another;

    int age;
    int monthsEmployed;

    float salary;
    float loanAmount;
    float interest;
    float totalRepayment;
    float monthlyRepayment;

    do
    {
        printf("\n===== BANK LOAN APPLICATION SYSTEM =====\n");

        printf("Enter applicant full name: ");
        scanf(" %99[^\n]", name);

        printf("Enter applicant age: ");
        scanf("%d", &age);

        printf("Enter monthly salary: ");
        scanf("%f", &salary);

        printf("Enter months employed: ");
        scanf("%d", &monthsEmployed);

        printf("Does applicant have an existing loan default? (Y/N): ");
        scanf(" %c", &defaultStatus);

        printf("\n===== LOAN ELIGIBILITY RESULTS =====\n");

        printf("Applicant Name: %s\n", name);
        printf("Age: %d\n", age);
        printf("Monthly Salary: Ksh %.2f\n", salary);
        printf("Months Employed: %d\n", monthsEmployed);

        if (age >= 21)
        {
            if (salary >= 25000)
            {
                if (monthsEmployed >= 12)
                {
                    if (defaultStatus == 'N' ||
                        defaultStatus == 'n')
                    {
                        printf("\nApplicant QUALIFIES for the loan.\n");

                        if (salary >= 100000)
                        {
                            loanAmount = salary * 5;
                        }
                        else if (salary >= 50000)
                        {
                            loanAmount = salary * 4;
                        }
                        else
                        {
                            loanAmount = salary * 3;
                        }

                        interest = loanAmount * 0.12;

                        totalRepayment = loanAmount + interest;

                        monthlyRepayment = totalRepayment / 12;

                        printf("\n===== LOAN DETAILS =====\n");

                        printf("Maximum Loan: Ksh %.2f\n", loanAmount);

                        printf("Interest: Ksh %.2f\n", interest);

                        printf("Total Repayment: Ksh %.2f\n",
                               totalRepayment);

                        printf("Monthly Repayment: Ksh %.2f\n",
                               monthlyRepayment);
                    }
                    else
                    {
                        printf("\nApplication REJECTED.\n");
                        printf("Reason: Existing loan default.\n");
                    }
                }
                else
                {
                    printf("\nApplication REJECTED.\n");
                    printf("Reason: Employment period is less than 12 months.\n");
                }
            }
            else
            {
                printf("\nApplication REJECTED.\n");
                printf("Reason: Monthly salary is below Ksh 25,000.\n");
            }
        }
        else
        {
            printf("\nApplication REJECTED.\n");
            printf("Reason: Applicant must be at least 21 years old.\n");
        }

        printf("\nProcess another loan application? (Y/N): ");
        scanf(" %c", &another);

    }
    while (another == 'Y' || another == 'y');

    printf("\nThank you for using the bank loan system.\n");



    return 0;
}
