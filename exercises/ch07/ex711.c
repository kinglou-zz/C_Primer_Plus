#include <stdio.h>

#define PRICE_ARTICHOKES 2.05
#define PRICE_BEETS 1.15
#define PRICE_CARROTS 1.09
#define DISCOUNT_RATE 0.05
#define UNDER_5 6.50
#define UNDER_20 14.00
#define EXTRA 0.5

int main(void)
{
    int ch;
    double weight_artichokes = 0.0, weight_beets = 0.0, weight_carrots = 0.0;
    double weight_temp, weight_total;
    double cost_artichokes, cost_beets, cost_carrots, cost_vegetable;
    double discount;
    double cost_shipping, cost_total;
    
    printf("Enter a to buy artichokes, b for beets, c for carrots, q to quit:");
    while((ch = getchar()) != 'q')
    {
        if(ch == '\n')
            continue;
        while(getchar() != '\n')
            continue;
        switch(ch)
        {
            case 'a':
                printf("Enter pounds of artichokes: ");
                scanf("%lf", &weight_temp);
                weight_artichokes += weight_temp;
                break;
            case 'b':
                printf("Enter pounds of beets: ");
                scanf("%lf", &weight_temp);
                weight_beets += weight_temp;
                break;
            case 'c':
                printf("Enter pounds of carrots: ");
                scanf("%lf", &weight_temp);
                weight_carrots += weight_temp;
                break;
            default: 
                printf("%c is not a valid choice.\n", ch);   
        }
        printf("Enter a to buy artichokes, b for beets, c for carrots, q to quit:");
    }

    weight_total = weight_artichokes + weight_beets + weight_carrots;
    cost_artichokes = weight_artichokes * PRICE_ARTICHOKES;
    cost_beets = weight_beets * PRICE_BEETS;
    cost_carrots = weight_carrots * PRICE_CARROTS;
    cost_vegetable = cost_artichokes + cost_beets + cost_carrots;

    if(weight_total <= 0)
        cost_shipping = 0;
    else if(weight_total <= 5)
        cost_shipping = UNDER_5;
    else if(weight_total <= 20)
        cost_shipping = UNDER_20;
    else
        cost_shipping = UNDER_20 + (weight_total - 20) * EXTRA;

    if(cost_vegetable < 100)
        discount = 0;
    else
        discount = DISCOUNT_RATE * cost_vegetable;

    cost_total = cost_vegetable - discount + cost_shipping;

    printf("Your order:\n");
    printf("%.2f pounds of artichokes at $%.2f per pound: $%.2f\n",
           weight_artichokes, PRICE_ARTICHOKES, cost_artichokes);
    printf("%.2f pounds of beets at $%.2f per pound: $%.2f\n",
           weight_beets, PRICE_BEETS, cost_beets);
    printf("%.2f pounds of carrots at $%.2f per pound: $%.2f\n",
           weight_carrots, PRICE_CARROTS, cost_carrots);
    printf("Total cost of vegetables: $%.2f\n", cost_vegetable);
    if(cost_vegetable >= 100)
        printf("Volume discount: $%.2f\n", discount);
    printf("Shipping: $%.2f\n", cost_shipping);
    printf("Total charges: $%.2f\n", cost_total);

    return 0;
}
