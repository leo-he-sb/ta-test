//
//  main.c
//  TA-Stuff
//
//  Created by Leo He on 1/22/24.
//

#include <stdio.h>
#include <string.h>

int main()
{
    // obtain string
    char str[100];
    printf("Input String: ");
    scanf("%s",str);
    
    //create string for y
    char cons[100] = "y";

    // get string length
    int len = strlen(str);

    // reverse string
    for (int i = 0, j = len - 1; i <= j; i++, j--) {
        // swapping characters
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }

    // add y to reversed string
    strcat(str,cons);

    // output
    printf("Output String: %s\n", str);

    // return 0 to end main
    return 0;

}
