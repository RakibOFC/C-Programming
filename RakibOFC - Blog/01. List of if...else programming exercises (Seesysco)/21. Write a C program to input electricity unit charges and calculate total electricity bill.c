#include<stdio.h>
void main()
{
    /*
    Calculate total electricity bill according to the given condition:
    For first 50 units Tk. 1.50/unit
    For next 100 units Tk. 2.25/unit
    For next 100 units Tk. 3.00/unit
    For unit above 250 Tk. 3.75/unit
    An additional surcharge of 20% is added to the bill
    */
    float unit, surcharge, taka;

    printf("Input electricity unit charges and calculate total electricity bill .\n\n");

    scanf("%f", &unit, printf("\nEnter unit: "));

    if(unit >=1 && unit <= 50)
    {
        //For first 50 units Tk. 1.50/unit
        taka = unit * 1.5;
        surcharge = taka * 0.2; //Surcharge 20%
        taka = taka + surcharge;
    }
    else if(unit >=51 && unit <=100)
    {
        //For next 100 units Tk. 2.25/unit
        taka = unit * 2.25;
        surcharge = taka * 0.2; //Surcharge 20%
        taka = taka + surcharge;
    }
    else if(unit >=101 && unit <= 250)
    {
        //For next 100 units Tk. 3.00/unit
        taka = unit * 3.0;
        surcharge = taka * 0.2; //Surcharge 20%
        taka = taka + surcharge;
    }
    else if(unit >=251)
    {
        //For unit above 250 Tk. 3.75/unit
        taka = unit * 3.75;
        surcharge = taka * 0.2; //Surcharge 20%
        taka = taka + surcharge;
    }
    printf("\nTotal cost: %0.2f\n", taka);
}
