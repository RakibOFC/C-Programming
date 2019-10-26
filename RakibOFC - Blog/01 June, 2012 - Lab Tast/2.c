#include<stdio.h>
#include<math.h>
void main()
{
     float v, a, t, velocity, distance;

     printf("Enter Velocity, Acceleration & Time: ");
     scanf("%f %f %f", &v, &a, &t);

     velocity = (v + a*t); //Sample output is wrong!
     distance = (v*t + 0.5*a*t*t);

     printf("\nFinal Velocity: %f\nFinal Distance: %f\n\n", velocity, distance);
}
