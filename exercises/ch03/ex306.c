#include <stdio.h>
int main(void)
{
    float mass_mol = 3.0e-23;
    float mass_qt = 950;
    float quarts, molecules;

    printf("Enter the number of quarts of water: ");
    scanf("%f", &quarts);
    molecules = quarts * mass_qt / mass_mol;
    printf("There are %e molecules in %g quarts of water.\n", molecules, quarts);
    
    return 0;
}