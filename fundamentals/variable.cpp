#include <iostream>
#include <cstdio>

int main() {

   // type receives a value
   double price = 99.80;
   double tax = 0.08;
   // right here one expression 
  // price * (1 + tax);

   double finalPrice = price * (1 + tax);

   printf("The final price is %f.", finalPrice);
    
    return 0;
}