---
layout: post
title:  Return to C
date:   2025-04-16
categories: Code
picture: /assets/img/c-logo.png
image: /assets/img/c-logo.png
  srcset:
    1920w: /assets/img/c-logo.png
    960w: /assets/img/c-logo
    480w: /assets/img/c-logo
---

## 30 Years with C 

I first learned C around the year 1990. At the time, we didn't even have a computer that was capable of running a C Compiler. I had a book that was just called, "Learn C Programming," and I just wrote out the assignments long-hand in a notebook.  
  
A few years later I had several courses in college that either taught or used C and C++ and I learned a lot mroe advanced topics, but that old notebook survived, and I still have it today in 2025! However, in my daily professional life, C and C++ are rarely used becuase the language most businesses use for data science, analysis, and application development is Python. Python is an excellent language for developing applications that rely on big data and analytics, but I have decided to polish up my old C skills with a daily(ish) practice log.  

For this one, I thought I'd take another look at the first problem at project Euler.

## Multiples of 3 or 5

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int num = 0;
    int sum = 0;
    if ( ( argc < 2 ) || ( ( num = atoi ( argv[1] ) ) <= 0 ) ) {
      num = 10;
    }

    for ( int i = 3; i < num; i++ ) {
      if ( i % 3 == 0 || i % 5 == 0 ) sum += i;
    }
    printf("Sum = %d\n", sum);

    return 0;
}

```  

This is a simple solution to the problem, but it isn't the most efficient. This iterates over _every_ number from 3 to _num_ and checks if it is divisible by 3 or 5. If it is, it adds it to the sum.  
A more efficient method would be to count up by 3 or 5 and then check if the number is divisible by either 3 or 5, BUT also before adding the multiple for 5, make sure that is isn't also a multiple of 3.


```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int num = 0;
    int sum = 0;
    if ( ( argc < 2 ) || ( ( num = atoi ( argv[1] ) ) <= 0 ) ) {
      num = 10;
    }
    
    for ( int i = 3; i < num; i += 3 ) sum += i;
    for ( int i = 5; i < num; i += 5 ) { 
        if ( i % 3 != 0 ) sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}

```
This second version reduces the iterations by skipping numbers that are not multiples of 3. 

