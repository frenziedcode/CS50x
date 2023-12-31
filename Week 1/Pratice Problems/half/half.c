// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, float tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, float tip)
{
    float bill_after_tax, final_bill;

    tax = (bill * tax) / 100;
    bill_after_tax = bill + tax;
    tip = tip / 100;
    final_bill = (bill_after_tax * tip) + bill_after_tax;

    final_bill = final_bill / 2;

    return final_bill;
}
