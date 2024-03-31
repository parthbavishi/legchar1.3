#include <stdio.h>

int main() {
    float baseSalary, hraPercent, daPercent, taPercent;
    float grossSalary;

    printf("Enter the base salary: ");
    scanf("%f", &baseSalary);

    printf("Enter the percentage of HRA: ");
    scanf("%f", &hraPercent);

    printf("Enter the percentage of DA: ");
    scanf("%f", &daPercent);

    printf("Enter the percentage of TA: ");
    scanf("%f", &taPercent);

    grossSalary = baseSalary + (baseSalary * hraPercent / 100) + (baseSalary * daPercent / 100) + (baseSalary * taPercent / 100);

    printf("Gross Salary: Rs. %.2f\n", grossSalary);

}
