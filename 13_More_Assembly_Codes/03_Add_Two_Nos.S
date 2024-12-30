#int n1 = 0;
#int n2 = 0;
#int sum = 0;
#int main(void)
#{
#    printf("Enter n1:");
#    scanf("%d", &n1);
#    printf("Enter n2:");
#    scanf("%d", &n2);
#    sum = n1 + n2;
#    printf("%d+%d=%d\n", n1, n2, sum);
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
        .string "%d+%d=%d\n"

.section .data
    n1:
        .int 0
    n2:
        .int 0
    sum:
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
    
    pushl sum
    pushl n2
    pushl n1
    pushl $msgP4
    call printf
    addl $16, %esp

    #EPILOGUE
    #return 0
    movl $0, %eax
    movl %ebp, %esp
    popl %ebp
    ret



#for 32 bit
# gcc -o print HelloWorld.S 
#for 64 bit
#sudo apt install gcc-multilib g++-multilib
#gcc -m32 -no-pie -o add_two_nos 03_Add_Two_Nos.S