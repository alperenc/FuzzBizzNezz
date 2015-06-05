//
//  main.c
//  FuzzBizzNezz
//
//  Created by Alp Eren Can on 02/06/15.
//  Copyright (c) 2015 Alp Eren Can. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int fuzz;
    int bizz;
    int nezz;
    
    printf("Type in a number to replace with the word Fuzz: ");
    scanf("%i", &fuzz);
    printf("You entered: %i\n", fuzz);
    
    printf("Type in another number to replace with the word Bizz: ");
    scanf("%i", &bizz);
    
    printf("Type in a number to count to: ");
    scanf("%i", &nezz);
    
    int counter = 1;
    while (counter <= nezz) {
        if (counter % fuzz == 0 && counter % bizz == 0) {
            printf("FuzzBizz\n");
        } else if (counter % fuzz == 0) {
            printf("Fuzz\n");
        } else if (counter % bizz == 0) {
            printf("Bizz\n");
        } else {
            printf("%i\n", counter);
        }
        counter++;
    }
    
    printf("The counting complete. Check the results.");
    return 0;
}
