#include<stdio.h>

int main(void)
{
    float height_cm;
      int height_foot;
    float height_inch;

    const float FOOT_PER_CM = 0.032804;
    const float FOOT_PER_INCH = 0.393701;

    printf("Enter a height in centimeters: ");
    scanf("%f", &height_cm);

    while(height_cm>0)
    {
        height_foot = height_cm * FOOT_PER_CM;
        height_inch = (height_cm - height_foot / FOOT_PER_CM)*FOOT_PER_INCH;

        printf("%.1f cm = %d feet, %.1f inches\n", height_cm, height_foot, height_inch);

        printf("Enter a height in centimeters (<=0 to quit): ");
        height_cm = 0;
        scanf("%f", &height_cm);
    }

    printf("bye\n");

    return 0;
}

