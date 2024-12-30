#include <stdio.h> 
#include <stdlib.h> 

int main(void)
{
    int n1, n2, n3, n4; 

    printf("Enter n1:");
    scanf("%d", &n1); 

    printf("Enter n2:");
    scanf("%d", &n2); 

    printf("Enter n3:");
    scanf("%d", &n3); 

    printf("Enter n4:");
    scanf("%d", &n4);

    if((n1 > n2) && (n3 < n4))
    {
        printf("n1 is greater than n2 AND n3 is less than n4\n"); 
    } 

    if((n1 > n2) || (n3 < n4))
    {
        printf("n1 is greater than n2 OR n3 is less than n4 OR BOTH\n"); 
    }

    if(!(n1 == n2))
    {
        printf("n1 is not equal to n2\n"); 
    }

    return (0); 
}

/* 
    MATHEMATICAL LOGIC: 
    
    Proposition: Def: 
    It is a declarative statement in English 
    which is either TRUE OR FALSE BUT NOT BOTH. 

    e.g. 

    Mumbai is a capital of Maharashtra. 
    Statement: Declarative 
    TRUE OR FALSE BUT NOT BOTH: YES 
    Therefore, it is a proposition. 
    TRUTH VALUE : TRUE 

    Pune is a capital of India. 
    Declarative statement? YES. 
    TRUE OR FALSE BUT NOT BOTH: YES. 
    Therefore, it is a proposition. 
    TRUTH VALUE: FALSE. 

    n1 < n2: Is NOT A PROPOSITION
    Why? 
    Because n1 and n2 are VARIABLES. 

    100 < 50 : FALSE 
    200 < 400: TRUE 

    Let p and q be two propositions: 

    p       q       p && q 
    FALSE   FALSE   FALSE 
    FALSE   TRUE    FALSE 
    TRUE    FALSE   FALSE 
    TRUE    TRUE    TRUE 

    How to read? 
    p && q = p AND q 
    && -> LOGICAL AND OPERATOR 
    BINARY OPERATOR 
    INFIX 

    COND1 AND COND2 = COND 

    Let p and q be propositions 
    p       q       p || q 
    FALSE   FALSE   FALSE 
    FALSE   TRUE    TRUE 
    TRUE    FALSE   TRUE 
    TRUE    TRUE    TRUE 

    How to read? 
    p || q = p OR q 
    || -> LOGICAL OR OPERATOR 
    BINARY OPERATOR 
    INFIX 

    TEA OR COFFEE 
    Let p and q be propositions 
    p       q       p XOR q 
    FALSE   FALSE   FALSE 
    FALSE   TRUE    TRUE 
    TRUE    FALSE   TRUE 
    TRUE    TRUE    FALSE

    Let p be a condition (proposition) 
    not p 

    p   not p 
    F   T 
    T   F 

    UNARY PREFIX OPERATOR 

    !(cond)  
*/