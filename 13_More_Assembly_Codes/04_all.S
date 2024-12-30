#int n1 = 0;
#int n2 = 0;
#int sum = 0;
#int sub = 0;
#int mul = 0;
#int quotient = 0;
#int remainder = 0;
#int main(void)
#{
#    printf("Enter n1:");
#    scanf("%d", &n1);
#    printf("Enter n2:");
#    scanf("%d", &n2);
#    sum = n1 + n2;
#    sub = n1 - n2;
#    mul = n1 * n2;
#    quotient = n1 / n2;
#    remainder = n1 % n2;
#    printf("sum=%d, sub=%d, mul=%d, quotient+%d, remainder=%d\n", sum, sub, mul, quotient, remainder);
#    return 0;
#}

.section .note.GNU-stack,"",@progbits #For 64 bit thing

.section .rodata
    msgP1:
        .string "Enter n1:"
    msgP2:
        .string "Enter n2:"
    msgP3:
        .string "%d"
    msgP4:
        .string "sum=%d, sub=%d, mul=%d, quotient=%d, remainder=%d\n"

.section .data
    n1:
        .int 0
    n2:
        .int 0
    sum:
        .int 0
    sub:
        .int 0
    mul:
        .int 0
    quotient:
        .int 0
    remainder:
        .int 0
.section .text
.globl main # can be accessed outside file
main:
    #PROLOGUE
    pushl %ebp
    movl %esp, %ebp

    pushl $msgP1
    call printf
    addl $4, %esp

    pushl $n1 #$n1 = &n1 
    pushl $msgP3
    call scanf
    addl $8, %esp

    pushl $msgP2
    call printf
    addl $4, %esp

    pushl $n2 #$n1 = &n1 
    pushl $msgP3
    call scanf
    addl $8, %esp

    movl n1, %eax
    movl n2, %edx
    addl %edx, %eax
    movl %eax, sum

    movl n1, %eax
    movl n2, %edx
    subl %edx, %eax
    movl %eax, sub

    movl n1, %eax
    movl n2, %ebx
    mull %ebx
    movl %eax, mul

    movl n1, %eax
    movl n2, %ebx
    movl $0, %edx # zero out
    divl %ebx
    movl %eax, quotient
    movl %edx, remainder
    
    pushl remainder
    pushl quotient
    pushl mul
    pushl sub
    pushl sum
    pushl $msgP4
    call printf
    addl $24, %esp

    #return 0
    movl $0, %eax

    #EPILOGUE
    movl %ebp, %esp
    popl %ebp
    ret



#for 32 bit
# gcc -o print HelloWorld.S 
#for 64 bit
#sudo apt install gcc-multilib g++-multilib
#gcc -m32 -no-pie -o all 04_all.S