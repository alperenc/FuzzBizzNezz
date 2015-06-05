//
//  main.c
//  FuzzBizzNezz
//
//  Created by Alp Eren Can on 02/06/15.
//  Copyright (c) 2015 Alp Eren Can. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int counter = 1;
    while (counter <= 100) {
        if (counter % 3 == 0 && counter % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (counter % 3 == 0) {
            printf("Fizz\n");
        } else if (counter % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%i\n", counter);
        }
        counter++;
    }
    return 0;
}
